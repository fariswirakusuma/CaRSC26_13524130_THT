from fastapi import APIRouter, HTTPException, Depends, Query
from sqlalchemy.orm import Session
from sqlalchemy import asc, desc
from .models import Entry
from .database import SessionLocal
from pydantic import BaseModel
from datetime import datetime

router = APIRouter()

class EntryCreate(BaseModel):
    latitude: float
    longitude: float
    altitude: float
    speed: float
    battery: int

def get_db():
    db = SessionLocal()
    try:
        yield db
    finally:
        db.close()

@router.post("/entries/")
def create_entry(entry: EntryCreate, db: Session = Depends(get_db)):
    db_entry = Entry(**entry.dict(), timestamp=datetime.utcnow())
    db.add(db_entry)
    db.commit()
    db.refresh(db_entry)
    return db_entry

@router.get("/entries/")
def get_entries(order_by: str = Query(None), db: Session = Depends(get_db)):
    query = db.query(Entry)
    sort_map = {
        "altitude_desc": desc(Entry.altitude),
        "altitude_asc": asc(Entry.altitude),
        "speed_desc": desc(Entry.speed),
        "speed_asc": asc(Entry.speed),
        "battery_desc": desc(Entry.battery),
        "battery_asc": asc(Entry.battery),
        "timestamp_desc": desc(Entry.timestamp),
        "timestamp_asc": asc(Entry.timestamp)
    }
    if order_by in sort_map:
        query = query.order_by(sort_map[order_by])
    return query.all()

@router.put("/entries/{entry_id}")
def update_entry(entry_id: int, entry: EntryCreate, db: Session = Depends(get_db)):
    db_entry = db.query(Entry).filter(Entry.id == entry_id).first()
    if not db_entry:
        raise HTTPException(status_code=404, detail="Entry not found")
    for k, v in entry.dict().items():
        setattr(db_entry, k, v)
    db.commit()
    db.refresh(db_entry)
    return db_entry

@router.delete("/entries/{entry_id}")
def delete_entry(entry_id: int, db: Session = Depends(get_db)):
    db_entry = db.query(Entry).filter(Entry.id == entry_id).first()
    if not db_entry:
        raise HTTPException(status_code=404, detail="Entry not found")
    db.delete(db_entry)
    db.commit()
    return {"ok": True}
