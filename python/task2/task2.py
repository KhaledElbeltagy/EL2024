import requests

response=requests.get("https://api.ipify.org/?formate=jason")


print(response.text)

x = response.text

response2=requests.get("http://ipinfo.io/197.121.211.162/geo")

x2=response2.json()
print(x2["loc"])
