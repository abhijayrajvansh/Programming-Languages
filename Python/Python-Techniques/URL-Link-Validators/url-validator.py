import requests
url = "https://google.com"
try:

    response = requests.get(url)

    print("URL is valid and exists on the internet")

except requests.ConnectionError as exception:

    print("URL does not exist on Internet")