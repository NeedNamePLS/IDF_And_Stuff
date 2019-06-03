weight = float(input("Input weight in pounds: "))
height = float(input("Input height in inches: "))
#BMI = (weight * 703) / (height **2)
Kg = 0.45359237
M = 0.0254
BMI = (weight * Kg) / ((height * M) **2)
print("BMI is", BMI)
