import { defineConfig } from 'vite'
import react from '@vitejs/plugin-react'

export default defineConfig({
  plugins: [react()],
  server: {
    host: true,       // listen on 0.0.0.0
    port: 4000,       // internal container port (map to 4000 in docker-compose)
    strictPort: true, // fail if 3000 already in use
  }
})
