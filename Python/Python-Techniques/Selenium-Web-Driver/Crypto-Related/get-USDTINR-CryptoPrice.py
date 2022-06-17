#/
#    author:   abhijayrajvansh
#    created:  24.01.2022 09:49:10
#/
from selenium import webdriver
from selenium.webdriver.chrome.service import Service
from selenium.webdriver.chrome.options import Options #to by-pass chrome broswer notification
from selenium.webdriver.common.by import By
import time

path_with_service = Service("/Users/abhijayrajvansh/desktop/programming-languages/python/Modules-And-Libraries/Selenium-Web-Driver/chromedriver")
path_without_service = ("/Users/abhijayrajvansh/desktop/programming-languages/python/Modules-And-Libraries/Selenium-Web-Driver/chromedriver")
final_path = "Service = path"
url = "https://coindcx.com/trade/USDTINR"


# Handling Chrome Options:
chromeOptions = Options()
chromeOptions.add_argument("--disable-extensions")
chromeOptions.add_argument("--disable-notifications")
# chromeOptions.add_experimental_option("prefs", { "profile.default_content_setting_values.notifications": 2 }) 


driver = webdriver.Chrome(service = path_with_service, options = chromeOptions)
driver.maximize_window()


driver.get(url) # launches the broswer and open url
time.sleep(5) # very important to load before exicuting commands

#Commands:
# driver.find_element(By.XPATH, "//button[@class='cta cta--green']").text # BUY BUTTON - working
r = driver.find_element(By.XPATH, "//span[@class='latest-trade-price']") # Current Crypto Price - working
print(r.text)
