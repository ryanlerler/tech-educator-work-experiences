temperature = int(input("Enter the temperature: "))

if temperature > 40:
    print("The weather is very hot!")
elif temperature > 30:
    print("The weather is hot!")
elif temperature > 20:
    print("The weather is good!")
elif temperature > 10:
    print("The weather is cooling!")
elif temperature > 0:
    print("The weather is cold!")
else:
    print("The weather is very cold!")