from selenium import webdriver
import os
from selenium.webdriver.common.by import By

pwd = os.getcwd()
driver = webdriver.Chrome(pwd + "/chromedriver")

url = "https://www.google.com"
driver.get(url)

