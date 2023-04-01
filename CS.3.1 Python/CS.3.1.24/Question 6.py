r = float(input("What is the radius of the circle? "))
a = 3.14 * r ** 2
if r < 0:
    raise Exception("Negative value, error!")
print(a)



