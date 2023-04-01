import random

mystery = random.randint(1,100)

while True:
    guess = int(input("Guess the number:"))
    if guess > mystery:
        print("Your number is too large!")
    elif guess < mystery:
        print("Your number is too small!")
    else:
        print("Your number is correct!")
        break
