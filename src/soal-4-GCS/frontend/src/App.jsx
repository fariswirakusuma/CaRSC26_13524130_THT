import React, { useState, useEffect } from "react";
import Table from "./components/Table";
import Form from "./components/Form";
import { getEntries, createEntry } from "./utils/api";
import '../style.css';

export default function App() {
  const [entries, setEntries] = useState([]);
  const [sortParam, setSortParam] = useState("");

  const fetchData = async (order_by = "") => {
    try {
      const data = await getEntries(order_by);
      setEntries(data);
    } catch (err) {
      console.error(err);
      alert("Failed to fetch entries!");
    }
  };

  useEffect(() => {
    fetchData(sortParam);
  }, [sortParam]);

  return (
    <div>
      <h1>Drone Data Table</h1>
      <Form
        onSubmit={async (entry) => {
          try {
            await createEntry(entry);
            fetchData(sortParam);
          } catch (err) {
            console.error(err);
            alert("Failed to submit entry!");
          }
        }}
      />
      <Table entries={entries} refresh={() => fetchData(sortParam)} />
    </div>
  );
}
