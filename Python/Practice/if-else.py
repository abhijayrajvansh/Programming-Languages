# age = 2
age = input()
int(age)
if age >= 18:
    print("you can vote!")

elif age < 18 and age > 3:
    print("you cannot vote")

else:
    print("please enter a valid age")
