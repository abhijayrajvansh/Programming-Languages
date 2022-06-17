#/
#    author:   abhijayrajvansh
#    created:  25.02.2022 17:29:04
#/

# import webdriver
from selenium import webdriver
from selenium.webdriver.chrome.service import Service
from selenium.webdriver.chrome.options import Options #to by-pass chrome broswer notification
from selenium.webdriver.common.by import By
import time
 
# import Action chains
from selenium.webdriver.common.action_chains import ActionChains
 
# import KEYS
from selenium.webdriver.common.keys import Keys

# defaulf operating system
import os


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

another_page_URL = "https://youtube.com"; # for example

driver.execute_script("window.open()");
driver.switch_to.window(driver.window_handles[1]);
print("Opening new tab with desired url provide ...")

driver.get(another_page_URL);

search_query = "driver forever";

print("Getting location of search area...")
search_space = driver.find_element(By.XPATH, "//input[@id='search']").send_keys(search_query + Keys.RETURN);
print("Sending search query text and pressing return...")

# driver.find_element(By.XPATH, "//button[@id='search-icon-legacy']//yt-icon[@class='style-scope ytd-searchbox']").click()

time.sleep(3);
print("Python time sleep done for 3 seconds...")

driver.find_element(By.ID, "thumbnail").click()
print("Finding and clicking on the desired video thumbnail...")



print("Playing drive forever for the SIGMA MALE, you're insane!");





#````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````
# choice = input("Close Web Browser [YES] or [NO] : ")
# if choice == 'Y' or choice == 'y' or choice == 'yes' or choice == 'YES':
#     driver.quit()

