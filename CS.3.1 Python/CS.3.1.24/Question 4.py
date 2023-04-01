def fn(x):
    try:
        print(5 / y)
    except ZeroDivisionError:
        print("ZeroDivisionError") # NO ZeroDivisionError here as y is not even defined
    except NameError:
        print("NameError") # Only NameError
    finally:
        print("finally block")

fn(0)

#  try-except-except:
# Block1 – test codes for errors
# Block2 – run if the error in block1 has the ZeroDivisionError
# Block3 – run if there is any other error