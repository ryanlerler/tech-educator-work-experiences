temperature = int(input("Enter the temperature: "))
raining = input("Is it raining (y/n): ")

if temperature < 25 and raining == 'y':
    print("Please wear a rain coat.")
elif temperature < 25 and raining == 'n':
    print("Please wear a jacket.")
elif temperature >= 25 and raining == 'n':
    print("Please wear a T-Shirt.")
elif temperature >= 25 and raining == 'y':
    print("Hmm this is weird.")
