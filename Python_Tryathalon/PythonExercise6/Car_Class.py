#Pet Class

class Car(object):
    def __init__(self, year_model, make):
        self.__year_model = year_model
        self.__make = make
        self.__speed = 0

    def get_speed(self):
        return self.__speed

    def accelerate(self):
        self.__speed += 5
        return self.__speed

    def brake(self):
        self.__speed -= 5
        return self.__speed

def main():
    year_model = input("Enter the car's year model: ")
    make = input("Enter the car's make: ")
    CarCar = Car(year_model, make)

    for i in range(5):
        Car.accelerate(CarCar)
        print("Accelerating Speed:", CarCar.get_speed())

    for i in range(5):
        Car.brake(CarCar)
        print("Brake Speed:", CarCar.get_speed())

main()