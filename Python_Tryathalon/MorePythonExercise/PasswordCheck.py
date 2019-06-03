import random

def main():
    NumChecker = 0
    Invalid = 1

    while Invalid != 0:
        NumChecker = 0
        Invalid = 0
        
        Password = input("Enter a password:\n")
        if len(Password) < 1:
            print("Invalid password you", randomInsult(),"\n")
            continue

        for i in range(len(Password)):
            if Password[i].isdigit() == True:
                NumChecker += 1

        if len(Password) < 8 or Password.isalnum() == False or NumChecker < 2:
            Invalid += 1
        
        if Invalid != 0:
            print("Invalid password you", randomInsult(),"\n")
        
    print("\nPassword Accepted")
    print(Password, "Is a valid password")


def randomInsult():
    InsultList = ['doorknob', 'pineapple', 'coconut', 'walnut', 'clown', 'snollygoster', 'pillock', 'lickspittle', 'smellfungus', 'ninny', 'milksop', 'hipster']
    index = random.randint(0, len(InsultList) - 1)
    Insult = InsultList[index]
    return Insult

main()