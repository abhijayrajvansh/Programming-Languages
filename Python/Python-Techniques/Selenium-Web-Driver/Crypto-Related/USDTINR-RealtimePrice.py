#/
#    author:   abhijayrajvansh
#    created:  24.01.2022 12:05:16
#/
from selenium import webdriver
from selenium.webdriver.chrome.service import Service
from selenium.webdriver.chrome.options import Options #to by-pass chrome broswer notification
from selenium.webdriver.common.by import By
import datetime
import time

path_with_service = Service("/Users/abhijayrajvansh/desktop/programming-languages/python/Modules-And-Libraries/Selenium-Web-Driver/chromedriver")
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
def USDTINR(): #tether

    usdtprice = driver.find_element(By.XPATH, "//span[@class='latest-trade-price']").text # Current Crypto Price - working
    usdt24h = driver.find_element(By.XPATH, "//p[@class='value -c-red']").text # 24 hours percentage change - working
    curr_time = time.strftime('%H:%M:%S %d/%m/%y', time.gmtime())

    print("USDT-INR : " + usdtprice + " | 24h change : " + usdt24h + " | " + curr_time)


while True:
    try:
        time.sleep(1)
        USDTINR()
        print()
    except Exception as e:
        driver.quit()
        break
