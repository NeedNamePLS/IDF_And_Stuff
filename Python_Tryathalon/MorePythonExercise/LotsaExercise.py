

def main():
    print("[1] - Iterate")
    print("[2] - Loopy")
    print("[3] - Half")
    Function = int(input("Enter a number to run the corresponding function: "))
    if Function == 1:
        Iterate()
    if Function == 2:
        Loopy()
    if Function == 3:
        mathed = float(input("Enter a number: "))
        mathed = Half(mathed)
        print(mathed)

def Iterate():
    product = int(input("Enter a number to be multiplied by 10: "))
    while product < 100:
        product *= 10
        print("New Product =", product)
        if product < 100:
            product = int(input("Enter a number to be multiplied by 10: "))

def Loopy():
    for i in range(1,101):
        if i == 100:
            print(i*10)
        else:
            print(i*10,end=", ")

def Half(number):
    number = number/2
    return number

main()