from selenium import webdriver

url = "https://www.youtube.com/results?search_query=gangsta+paradise+slowed"

browser = webdriver.Chrome("/Users/abhijayrajvansh/Desktop/Programming-Languages/python/Modules-And-Libraries/chromedriver")
browser.get(url)

browser.find_element_by_xpath('//*[@id="video-title"]').click()
# print(data)

#plays gangsta paradise slowed version and skip ads version on browser


