#

def main():
    
    for line in reversed(list(open("normFile.txt"))):
       string = "".join(reversed(line.rstrip()))
       print(string)

main()