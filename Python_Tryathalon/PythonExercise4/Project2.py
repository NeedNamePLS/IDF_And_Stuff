#Palindrome integer
def main():
    number = int(input("Input an integer: "))
    reverse(number)
    
#Return the reversal of an integer, e.g. reverse(456) returns
#654
def reverse(numb):
    revNumb = int(str(numb)[::-1])
    print("Integer Reversed:", revNumb)
    Pally = isPalindrome(numb, revNumb)
    print("Is Palindrome?: ", Pally)

#Return true if number is a palindrome
def isPalindrome(numb, revNumb):
    if (numb != revNumb):
        return False
    else:
        return True

main()
