import React from "react";
import { deleteEntry } from "../utils/api";

export default function Table({ entries, refresh }) {
  const handleDelete = async (id) => {
    try {
      await deleteEntry(id);
      refresh();
    } catch (err) {
      console.error(err);
      alert("Failed to delete entry!");
    }
  };

  return (
    <table>
      <thead>
        <tr>
          <th>Timestamp</th>
          <th>Latitude</th>
          <th>Longitude</th>
          <th>Altitude</th>
          <th>Speed</th>
          <th>Battery</th>
          <th>Action</th>
        </tr>
      </thead>
      <tbody>
        {entries.map((e) => (
          <tr key={e.id}>
            <td>{new Date(e.timestamp).toLocaleString()}</td>
            <td>{e.latitude}</td>
            <td>{e.longitude}</td>
            <td>{e.altitude}</td>
            <td>{e.speed}</td>
            <td>{e.battery}</td>
            <td>
              <button onClick={() => handleDelete(e.id)}>Delete</button>
            </td>
          </tr>
        ))}
      </tbody>
    </table>
  );
}
