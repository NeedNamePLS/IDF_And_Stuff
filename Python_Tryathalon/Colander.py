#CALENDER YES VERY GOOD TOTALLY LEGIT

import calendar

isLeap = 0
List_Days = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30]
List_New_Cal = ['January','February','March','April','May','June','Sol','July','August','September','October','November','December']

def main():
    year = int(input("Enter a year in YYYY format: "))
    month = int(input("Enter a month in MM format: "))
    day = int(input("Enter a day in DD format: "))
    temp = 0

    if calendar.isleap(year):
        global isLeap
        isLeap = 1
        global List_Days
        List_Days[1] = 29
    otherstuff(day, month, temp, year)

def otherstuff(day, month, temp, year):
    for i in range (0, month - 1):
        temp += List_Days[i]
    temp += day
    Total_day = temp
    if isLeap == 1 and temp >= 169:
        temp -= 1
    New_Day = (temp % 28)
    New_Month = int(temp / 28)
    print()
    if New_Day == 0 or New_Month == 13:
        New_Day = 28
        New_Month -= 1
    #Display Stuff
    if isLeap == 0:
        if Total_day == 365:
            print("Day", Total_day, "/ 365")
            print("New Day: YEAR DAY! (╯°□°)╯︵ ┻━┻", year)
        else:
            print("Day", Total_day, "/ 365")
            print("New Day:", str(New_Day) + ",", List_New_Cal[New_Month], year)
    else:
        if Total_day == 366:
            print("Day", Total_day, "/ 366")
            print("New Day: YEAR DAY! (╯°□°)╯︵ ┻━┻", year)
        elif Total_day == 169:
            print("Day", Total_day, "/ 366")
            print("New Day: LEAP DAY! (╯°□°)╯︵ ┻━┻", year)
        else:
            print("Day", Total_day, "/ 366")
            print("New Day:", str(New_Day) + ",", List_New_Cal[New_Month], year)

main()