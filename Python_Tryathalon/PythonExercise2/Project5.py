#

def main():
    totalSales = float(input("Input total sales for the month: "))
    tax1 = countyTax(totalSales)
    tax2 = stateTax(totalSales)
    totalTax = tax1 + tax2
    print("County Tax: $", format(tax1, '.2f'))
    print("State Tax : $", format(tax2, '.2f'))
    print("Total Tax : $", format(totalTax, '.2f'))
    
def countyTax(sale):
    return(sale * 0.02)

def stateTax(sale):
    return(sale * 0.04)
    
main()
