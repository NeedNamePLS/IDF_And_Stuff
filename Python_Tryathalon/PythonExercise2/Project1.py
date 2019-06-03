#

def main():
    argument = float(input("Enter a value to be multiplied by 10: "))
    times_ten(argument)

def times_ten(num):
    product = num * 10
    print("The Output is", product)
    show_value(12)

def show_value(quantity):
    print(quantity)

main()
