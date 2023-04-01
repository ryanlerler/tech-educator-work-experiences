def fn(x):
    try:
        print(5 / x)
    except ZeroDivisionError:
        print("except block")
    else:
        print("else block")

    finally:
        print("finally block")

fn(0)

# try-except-else:
# Block1 – test codes for errors
# Block2 – run if there is an error
# Block3 – run if there is no error

# try-except-finally:
# Block1 – test codes for errors
# Block2 – run if there is an error in block1
# Block3 – run regardless of the result of the try- and except blocks.
