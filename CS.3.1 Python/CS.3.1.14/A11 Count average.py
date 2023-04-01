num = []
while True:
    inp = input("Enter your number: ")
    if inp: #if there is an input
        num.append(inp)
    else:
        break #exit the while loop if there is no input from user

total = 0
count = 0
for inp in num:
    try:
        total += int(inp)
        count += 1
    except:
        total += 0

try:
    average = total / count
except ZeroDivisionError:
    average = 0
finally:
    print("Average is", average)