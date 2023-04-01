import random

mystery = random.randint(1,100)
n = 5
print("You have", n, "tries")

while n > 0:
    guess = int(input("Guess the number: "))
    n -= 1
    if guess > mystery:
        print("Your number is too large!")
        print("You left with", n, "tries")
    elif guess < mystery:
        print("Your number is too small!")
        print("You left with", n, "tries")
    else:
        print("Your number is correct!")
        print("You left with", n, "tries")
        break
if n == 0:  # Add this if statement to show the mystery number after running out of tries.
    print("GAME OVER!")
    print("You used up all your tries")
    print("The number is", mystery)

