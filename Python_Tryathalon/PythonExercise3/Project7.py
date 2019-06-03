#

def main():
    product = 0
    answer = 'Y'
    while product < 100:
        product = float(input("Input a number: ")) * 10
        print("The output is:", product)

    while answer == 'Y':
        num1, num2 = input("Enter num1, and num2: ").split(', ')
        num1, num2 = float(num1), float(num2)
        numSum = num1 + num2
        print(num1, "+", num2, "=", numSum)
        answer = input("If you wish to continue adding numbers, enter Y: ")
        
    for i in range(101):
        if i == 100:
            print(i*10)
        else:
            print(i*10,end=', ')
        
main()
