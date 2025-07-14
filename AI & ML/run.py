import requests

# Define the URL for the Ollama server
url = "http://127.0.0.1:11434/api/v1/generate"  # Include 'http://'

# Set up the payload
payload = {
    "model": "deepseek-r1:8b",  # Replace with your model name
    "prompt": "Hello, how can I assist you today?"
}

# Make the request
try:
    response = requests.post(url, json=payload)
    # Display the response
    if response.ok:
        print(response.json()["response"])
    else:
        print(f"Error: {response.status_code} - {response.text}")
except requests.exceptions.RequestException as e:
    print(f"An error occurred: {e}")
