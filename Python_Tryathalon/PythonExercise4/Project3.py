#Display an integer reversed
def main():
    number = int(input("Input an integer: "))
    reverse(number)

def reverse(numb):
    revNumb = int(str(numb)[::-1])
    print("Integer Reversed:", revNumb)

main()
