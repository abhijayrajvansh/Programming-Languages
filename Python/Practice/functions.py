# def function_name (parameter): 
#      DO Something..

def print_sum(a, b):
    print(a+b)
#it's overwrites the funtions

def print_sum(a, b, c = 10):
    print(a+b+c)

a = 10
b = 20
c = 100

print_sum(a, b)