#List

def main():
    List = []
    Total = 0
    Average = 0
    for i in range(20):
        List.append(int(input("Enter a integer: ")))
    Highest = List[0]
    Lowest = List[0]
    for i in range(len(List)):
        Total += List[i]
        if Highest < List[i]:
            Highest = List[i]
        if Lowest > List[i]:
            Lowest = List[i]
    Average = Total/12
    print("Total:", Total)
    print("Average:", format(Average, '.2f'))
    print("Highest:", Highest)
    print("Lowest:", Lowest)
    
main()