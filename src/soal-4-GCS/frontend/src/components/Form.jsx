import React, { useState, useEffect } from "react";

export default function Form({ onSubmit, editEntry }) {
  const [form, setForm] = useState({
    latitude: "",
    longitude: "",
    altitude: "",
    speed: "",
    battery: "",
  });

  useEffect(() => {
    if (editEntry) setForm(editEntry);
  }, [editEntry]);

  const handleChange = (e) => {
    const { name, value } = e.target;
    setForm({ ...form, [name]: value });
  };

  const handleSubmit = (e) => {
    e.preventDefault();
    const { latitude, longitude, altitude, speed, battery } = form;

    if (
      latitude < -90 || latitude > 90 ||
      longitude < -180 || longitude > 180 ||
      altitude < 0 || speed < 0 ||
      battery < 0 || battery > 100
    ) {
      alert("Invalid input values!");
      return;
    }

    onSubmit({
      latitude: parseFloat(latitude),
      longitude: parseFloat(longitude),
      altitude: parseFloat(altitude),
      speed: parseFloat(speed),
      battery: parseFloat(battery),
    });

    setForm({ latitude: "", longitude: "", altitude: "", speed: "", battery: "" });
  };

  return (
    <form onSubmit={handleSubmit}>
      {["latitude","longitude","altitude","speed","battery"].map((f) => (
        <input
          key={f} name={f} value={form[f]} onChange={handleChange}
          placeholder={f} type="number" step="any"
        />
      ))}
      <button type="submit">{editEntry ? "Update" : "Submit"}</button>
    </form>
  );
}
