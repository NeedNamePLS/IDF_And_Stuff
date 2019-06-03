#Lottery Number Generator
import random

def main():
    LotteryNum = []
    for i in range(7):
        LotteryNum.append(LottoGen())
    for i in range(7):
        print(LotteryNum[i], end = "")

def LottoGen():
    Number = random.randint(0,9)
    return Number

main()