def add(x, y):
    return x + y

def subtract(x, y):
    return x - y

def multiply(x, y):
    return x * y

def divide(x, y):
    return x / y

print("Select operation.")
print("1.Add")
print("2.Subtract")
print("3.Multiply")
print("4.Divide")

while True:
    choice = input("Enter choice(1/2/3/4): ")
    # Do NOT convert choice variable to int because if it is int and user inputs string for the choice variable (e.g. "roboto"), there will be ValueError (in red colour) instead of the string "Invalid Input" printed as required.

    if choice in ('1','2','3','4'):
    # Alternative: if choice == '1' or choice == '2' or choice == '3' or choice == '4':
        n1 = float(input("Enter first number: "))
        n2 = float(input("Enter second number: "))

        if choice == '1':
            print(n1, "+", n2,"=", add(n1,n2))

        elif choice == '2':
            print(n1, "-", n2,"=", subtract(n1,n2))

        elif choice == '3':
            print(n1, "*", n2,"=", multiply(n1,n2))

        elif choice == '4':
            if n2 == 0:
                print("Invalid Input: Divide by zero")
            else:
                print(n1, "/", n2,"=", divide(n1,n2))
        break
    else:
        print("Invalid Input")




