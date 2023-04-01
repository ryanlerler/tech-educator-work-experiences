class Vehicle:
    def __init__(self,name,max_speed,mileage, capacity):
        self.name = name
        self.max_speed = max_speed
        self.mileage = mileage
        self.capacity = capacity

    def fare(self):
        return self.capacity * 100

class Bus(Vehicle):
    def fare(self):
        amount = super().fare()
        amount += amount * 10 / 100
        return amount

bus1 = Bus("bus", 100, 200, 100)
print(bus1.fare())