import random

def main():
    Sizzea()

def Sizzea():
    
    choice = 0
    loop = 1
    insult = ''

    print("\n[WARNING]\n[VIEWER DISCRETION IS ADVISED]")

    while loop != 0:
        print("\n-------------------")
        print(" [ITS PIZZA TIME]")
        print("-------------------")
        print("[1] - Personal:  8\"")
        print("[2] - Small   : 10\"")
        print("[3] - Medium  : 12\"")
        print("[4] - Large   : 14\"")
        print("[5] - X-Large : 16\"")
        print("[6] - MURICA  : 24\"")
        print("-------------------")

        choice = input("Select your desired size: ")

        if choice == '1':
            Spicy_Sizzea = ' 8\"'
            loop = 0
        elif choice == '2':
            Spicy_Sizzea = '10\"'
            loop = 0
        elif choice == '3':
            Spicy_Sizzea = '12\"'
            loop = 0
        elif choice == '4':
            Spicy_Sizzea = '14\"'
            loop = 0
        elif choice == '5':
            Spicy_Sizzea = '16\"'
            loop = 0
        elif choice == '6':
            Spicy_Sizzea = '24\"'
            loop = 0
        else:
            print("\nPlease pick an option from the list...")
            insult = RareInsults()
            print("You",insult)
    return Spicy_Sizzea
    
def RareInsults():
    InsultList = ['doorknob', 'pineapple', 'coconut', 'walnut', 'clown', 'snollygoster', 'pillock', 'lickspittle', 'smellfungus', 'ninny',
    'milksop', 'hipster', 'sausage party', 'hircismus', 'shmeet', 'wandought', 'yaldson', 'shot-clog', 'rakefire', 'lubberwort', 'plonker',
    'billy-no-mates', 'minger', 'bimbo', 'donkey', 'fruitcake', 'twit', 'numpty', 'beetroot', 'hackit', 'howlin']
    index = random.randint(0, (len(InsultList) - 1))
    Insult = InsultList[index]
    return Insult

main()