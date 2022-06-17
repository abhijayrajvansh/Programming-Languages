students = ["dhruv", "manraj", "indram", "abhijay", "bobby", "anurag"]

for student_name in students:
    print(student_name)

print()
print("Using break keyword in code!")
print()

for student_name in students:
    if(student_name == "bobby"):
        break;
    print(student_name)
print()
print("Using continue keyword in code!")
print()
for i in students:
    if(i == "bobby"):
        continue
    print(i)