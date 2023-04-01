b = float(input("What is the base of the triangle? "))
h = float(input("What is the height of the triangle? "))
a = b * h /2

if b < 0 or h < 0:
    raise Exception("Negative value, error!")

print(a)