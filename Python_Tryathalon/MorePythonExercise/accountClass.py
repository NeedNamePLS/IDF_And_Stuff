class Account:
    # Construct an Account object 
    def __init__(self, id, balance = 100, annualInterestRate = 0):
        self.__id = id
        self.__balance = balance
        self.__annualInterestRate = annualInterestRate

    def getId(self):
        return self.__id

    def getBalance(self):
        return self.__balance

    def getAnnualInterestRate(self):
        return self.__annualInterestRate

    def getMonthlyInterestRate(self):
        return self.__annualInterestRate / 12

    def setPreviousPrice(self, previousPrice):
        self.previousPrice = previousPrice

    def setCurrentPrice(self, currentPrice):
        self.currentPrice = currentPrice

    def withdraw(self, amount):
        self.__balance -= amount

    def deposit(self, amount):
        self.__balance += amount

    def getMonthlyInterest(self):
        return self.__balance * self.getMonthlyInterestRate()

def main():
    loop = 1
    IdList = [0,1,2,3,4,5,6,7,8,9]
    AccountList = []
    for i in range(10):
        account = Account(i, 100, 4.5)
        AccountList.append(Account(i, 100, 4.5))

    idcheck = int(input("Enter an account id: "))
        if idcheck not in IdList:
            print("REEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE")
            return 0
        else:
            account.getId
            print()

    while loop = 1:
        while menu != 4:
            print("[1] - Check current balance")
            print("[2] - Make a Withdrawl")
            print("[3] - Make a deposit")
            print("[4] - Exit")
            menu = int(input("Select: "))

        if menu = 1:
            print("Current balance:", account.getBalance)
          
main()
