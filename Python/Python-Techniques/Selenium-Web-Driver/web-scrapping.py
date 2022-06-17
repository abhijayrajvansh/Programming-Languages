import requests
from bs4 import BeautifulSoup

url = ('https://coindcx.com/trade/BTCINR')
r = requests.get(url)

print()

web_content = BeautifulSoup(r.text, 'lxml')
print(r.text)

# web_content = web_content.find("class : 'span' ")
# web_content = web_content.find({"class : 'table__data current-price -fw-bolder'"})
# web_content = web_content.find("CoinDCX")

print(web_content)
