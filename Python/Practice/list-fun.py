vec = [32, 54, 56, 78, 789]
for i in vec:
    print(i)

print()
vec.append(3) # added a '3' in the last
for i in vec:
    print(i)

print()
vec.insert(1, 23) #23 inserted at the 2nd position
for i in vec:
    print(i)

print()
print(23 in vec)

print()
print("The length or the size of the vec (list) is : " + str(len(vec)))
size_of_arr = len(vec)

vec.clear()
print(vec)