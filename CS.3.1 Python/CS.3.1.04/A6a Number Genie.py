import random

mystery = random.randint(1,100)
n = 5
print("You have", n, "tries")

while True:
    guess = int(input("Guess the number: "))
    n -= 1
    if guess > mystery and n > 0:
        print("Your number is too large!")
        print("You left with", n, "tries")
    elif guess < mystery and n > 0:
        print("Your number is too small!")
        print("You left with", n, "tries")
    elif guess == mystery and n >= 0:   # If the condition is n > 0 instead, when the player guess the number correctly at the 5th try where n == 0 but not > 0, else statement (GAME OVER) will be printed.
        print("Your number is correct!")
        print("You left with", n, "tries")
        break
    else:
        print("GAME OVER!")
        print("You used up all your tries")
        print("The number is", mystery)
        break
