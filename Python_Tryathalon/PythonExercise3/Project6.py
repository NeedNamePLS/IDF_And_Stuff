#

def main():
    price = 99
    discount = 0
    purchase = int(input("Input amount of packages purchased: "))
    if purchase >= 10 and purchase <= 19:
        discount = 0.20
    if purchase >= 20 and purchase <= 49:
        discount = 0.30
    if purchase >= 50 and purchase <= 99:
        discount = 0.40
    if purchase >= 100:
        discount = 0.50
    total = float((price * purchase) * (1 - discount))
    print("You have a", discount * 100, "% discount!")
    print("Your total comes to $", format(total, '.2f'))
    print("You saved $", format((price * purchase) - total, '.2f'))
    
main()
