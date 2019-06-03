#Pet Class

class NeoPets(object):
    def __init__(self, name, animal_type, age):
        self.__name = name
        self.__animal_type = animal_type
        self.__age = age

    def set_name(self, name):
        self.__name = name
    
    def set_type(self, animal_type):
        self.__animal_type = animal_type

    def set_age(self, age):
        self.__age = age

    def get_name(self):
        return self.__name

    def get_animal(self):
        return self.__animal_type

    def get_age(self):
        return self.__age

def main():
    name = input("What is your pet's name?: ")
    animal_type = input("What type of pet is it?: ")
    age = int(input("How old is your pet?: "))
    lePet = NeoPets(name, animal_type, age)
    print("Pet Name:", lePet.get_name())
    print("Pet Type:", lePet.get_animal())
    print("Pet Age:", lePet.get_age())

main()