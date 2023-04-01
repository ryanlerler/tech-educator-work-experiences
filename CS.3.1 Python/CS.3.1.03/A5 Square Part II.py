from turtle import *
a = input("Length of square: ")
a = int(a)

shape("turtle")

for i in range(4):
    forward(a)
    left(90)

mainloop()

