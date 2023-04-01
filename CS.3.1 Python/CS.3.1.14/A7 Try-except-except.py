try:
    print(x)
except NameError:
    print("x is not defined")
except:
    print("An exception occured")