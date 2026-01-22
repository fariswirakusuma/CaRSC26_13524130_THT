FROM python:3.11-slim

# Set working directory
WORKDIR /app

# Upgrade pip & install build tools
RUN python3 -m pip install --upgrade pip setuptools wheel

# Copy and install dependencies
COPY requirements.txt .
RUN pip install --no-cache-dir -r requirements.txt

# Copy backend app code
COPY app ./app

# Expose port used by FastAPI
EXPOSE 9000

# Run FastAPI via uvicorn
CMD ["uvicorn", "app.main:app", "--host", "0.0.0.0", "--port", "9000"]
