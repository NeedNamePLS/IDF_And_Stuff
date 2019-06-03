#

def main():
    fatGram = float(input("Input grams of fat consumed: "))
    fatRatio(fatGram)
    carbGram = float(input("Input grams of carbs consumed: "))
    carbRatio(carbGram)
    
def fatRatio(fat):
    fatCal = fat * 9
    print("Calories from fat: ", fatCal)

def carbRatio(carb):
    carbCal = carb * 4
    print("Calories from carbohydrates: ", carbCal)

main()
