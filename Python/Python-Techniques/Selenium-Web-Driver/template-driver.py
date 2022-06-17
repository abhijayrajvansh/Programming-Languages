#/
#    author:   abhijayrajvansh
#    created:  25.02.2022 17:29:04
#/
from selenium import webdriver
from selenium.webdriver.chrome.service import Service
from selenium.webdriver.chrome.options import Options #to by-pass chrome broswer notification
from selenium.webdriver.common.by import By

import os
import datetime
import time

pwd = os.getcwd()
PATH = Service(pwd + "/chromedriver")

# url to be launched ...
url = "https://google.com"

# Handling Chrome Options:
chromeOptions = Options()
chromeOptions.add_argument("--disable-extensions")
chromeOptions.add_argument("--disable-notifications")
# chromeOptions.add_experimental_option("prefs", { "profile.default_content_setting_values.notifications": 2 }) 

# driver setup:
driver = webdriver.Chrome(service = PATH, options = chromeOptions)
# driver.maximize_window()
# driver.minimize_window()

driver.get(url) # launches the broswer and open url


#``````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````
# Opening a new tab in browser:

another_page_URL = "https://youtube.com"

driver.execute_script("window.open('https://youtube.com')")
# driver.switch_to.window(driver.window_handle)

# driver.get(another_page_URL)











#````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````
# choice = input("Close Web Browser [YES] or [NO] : ")
# if choice == 'Y' or choice == 'y' or choice == 'yes' or choice == 'YES':
#     driver.quit()
