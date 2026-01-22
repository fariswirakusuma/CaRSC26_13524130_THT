const BASE_URL = import.meta.env.VITE_BACKEND_URL || "http://localhost:9000";
const API_URL = `${BASE_URL}/entries`;

export async function getEntries(order_by = "") {
  let url = API_URL;
  if (order_by) url += `?order_by=${order_by}`;
  const res = await fetch(url);
  if (!res.ok) throw new Error("Failed to fetch entries");
  return res.json();
}

export async function createEntry(data) {
  const res = await fetch(API_URL, {
    method: "POST",
    headers: { "Content-Type": "application/json" },
    body: JSON.stringify(data),
  });
  return res.json();
}

export async function deleteEntry(id) {
  const res = await fetch(`${API_URL}/${id}`, { method: "DELETE" });
  if (!res.ok) throw new Error("Failed to delete entry");
}

export async function updateEntry(id, data) {
  const res = await fetch(`${API_URL}/${id}`, {
    method: "PUT",
    headers: { "Content-Type": "application/json" },
    body: JSON.stringify(data),
  });
  return res.json();
}
