#Rain and Sadness

def main():
    Months = ['January','February','March','April','May','June','July','August','September','October','November','December']
    RainyYear = []
    TotalRain = 0
    AverageRain = 0
    x = 0
    y = 0
    #
    for i in range(12):
        print("Enter the total rainfall in cm of the month of", Months[i], ":", end=" ")
        temp = float(input(""))
        RainyYear.append(temp)
    for i in range(12):
        temp = RainyYear[i]
        TotalRain += temp
    #
    AverageRain = TotalRain/12
    HighestRain = RainyYear[0]
    LowestRain = RainyYear[0]
    # Determines the month with the highest rainfall
    for i in range(12):
        if HighestRain < RainyYear[i]:
            HighestRain = RainyYear[i]
            x = i
    # Determines the month with the lowest rainfall
    for i in range(12):
        if LowestRain > RainyYear[i]:
            LowestRain = RainyYear[i]
            y = i
    #
    print("\nTotal rainfall of the year:", TotalRain)
    print("Average rainfall per month:", AverageRain)
    print("Month with the highest rainfall:", Months[x], "at", HighestRain, "cm")
    print("Month with the lowest rainfall:", Months[y], "at", LowestRain, "cm")

main()