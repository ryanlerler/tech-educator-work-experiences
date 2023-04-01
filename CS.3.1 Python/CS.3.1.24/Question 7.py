L = int(input("What is the limit? "))
sum = 0

for i in range(1, L + 1):
    if i % 3 == 0 or i % 5 == 0:
        sum += i

print("The sum is", sum)