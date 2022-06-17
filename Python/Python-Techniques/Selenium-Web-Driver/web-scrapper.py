from selenium import webdriver

url = "https://www.youtube.com/results?search_query=eminem+slowed"

browser = webdriver.Chrome("/Users/abhijayrajvansh/Desktop/Programming-Languages/python/Modules-And-Libraries/chromedriver")
browser.get(url)

browser.find_element_by_xpath('//*[@id="video-title"]').click()

#plays eminem love yourself slowed + reverb version on broswer


