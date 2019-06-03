#
def main():
    number = input("Input a number: ")
    try:
        temp = int(number)
    except ValueError:
        print("ಥ ╭╮ಥ\nWhy are you like this...")
        return 0
    length = len(number)
    evenCount = count_even_digits(number, length)
    print("There are", evenCount, "even digits in the number", number)

def count_even_digits(number, length):
    x = 0
    for i in range(length):
        if ((int(number[i]) % 2) == 0 ):
            x += 1
    return x

main()