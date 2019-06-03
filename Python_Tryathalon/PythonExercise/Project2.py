item1 = float(input("Input the price of your first item: "))
item2 = float(input("Input the price of your second item: "))
item3 = float(input("Input the price of your third item: "))
item4 = float(input("Input the price of your fourth item: "))
item5 = float(input("Input the price of your fifth item: "))
subTotal = item1 + item2 +item3 + item4 + item5
tax = subTotal * 0.06
Total = subTotal + tax
print("The sub total is: $", format(subTotal, '.2f'))
print("The sales tax totals to: $", format(tax, '.2f'))
print("The final total is: $", format(Total, '.2f'))
