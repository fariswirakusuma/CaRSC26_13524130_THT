import React, { useState } from "react";

export default function EditModal({ entry, onClose, refresh }) {
  const [data, setData] = useState({ ...entry });

  const handleChange = (e) => {
    setData({ ...data, [e.target.name]: e.target.value });
  };

  const handleSubmit = async (e) => {
    e.preventDefault();
    await fetch(`http://localhost:8000/entries/${entry.id}`, {
      method: "PUT",
      headers: { "Content-Type": "application/json" },
      body: JSON.stringify({
        latitude: parseFloat(data.latitude),
        longitude: parseFloat(data.longitude),
        altitude: parseFloat(data.altitude),
        speed: parseFloat(data.speed),
        battery: parseInt(data.battery),
      }),
    });
    refresh();
    onClose();
  };

  return (
    <div style={{
      position: "fixed",
      top: "20%",
      left: "50%",
      transform: "translateX(-50%)",
      background: "#fff",
      border: "1px solid #000",
      padding: "20px",
      zIndex: 1000
    }}>
      <h2>Edit Entry</h2>
      <form onSubmit={handleSubmit}>
        {["latitude","longitude","altitude","speed","battery"].map((key) => (
          <div key={key}>
            <label>{key}: </label>
            <input
              type="number"
              step="any"
              name={key}
              value={data[key]}
              onChange={handleChange}
              required
            />
          </div>
        ))}
        <button type="submit">Save</button>
        <button type="button" onClick={onClose}>Cancel</button>
      </form>
    </div>
  );
}
