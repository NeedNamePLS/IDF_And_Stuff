#

def main():
    TheWeek = ['Monday','Tuesday','Wednesday','Thursday','Friday','Saturday','Sunday']
    Sales = []
    Total = 0
    for i in range(len(TheWeek)):
        print("Enter the total sales on", TheWeek[i], ":", end=" ")
        temp = int(input(""))
        Sales.append(temp)
        Total += Sales[i]
    print("The total sales of the week is:",Total)
    
main()