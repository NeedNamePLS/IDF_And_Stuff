class Date:
    def __init__(self, m, d):
        self.__month = m
        self.__day = d

    def get_day(self):
        return self.__day

    def get_month(self):
        return self.__month

    #Not my problem
    def days_in_month(self):
        print()

    #Not my problem
    def next_day(self):
        print()

    def compare(self, m, d):
        if self.__month > m:
            return 1
        elif self.__month < m:
            return -1
        elif self.__month == m:
            if self.__day > d:
                return 1
            elif self.__day < d:
                return -1
            elif self.__day == d:
                return 0

def main():
    daisyMoth = [31,28,31,30,31,30,31,31,30,31,30,31]
    try:
        #
        month = int(input("Input the month of the 1st date (Ex: mm): "))
        day = int(input("Input the day of the 1st date (Ex: dd): "))
        test = daisyMoth[month - 1]
        #
        month2 = int(input("Input the month of the 2nd date (Ex: mm): "))
        day2 = int(input("Input the day of the 2nd date (Ex: dd): "))
        test2 = daisyMoth[month2 - 1]
    except ValueError:
        print("ಥ ╭╮ಥ\nWhy are you like this...")
        return 0
    except IndexError:
        print("ಥ ╭╮ಥ\nWhy are you like this...")
        return 0
    else:
        if daisyMoth[month - 1] < day or day < 0:
            print("ಥ ╭╮ಥ\nWhy are you like this...")
        elif daisyMoth[month2 - 1] < day2 or day2 < 0:
            print("ಥ ╭╮ಥ\nWhy are you like this...")
        else:
            The_Date = Date(month,day)
            result = The_Date.compare(month2, day2)
            print(result)
            
main()