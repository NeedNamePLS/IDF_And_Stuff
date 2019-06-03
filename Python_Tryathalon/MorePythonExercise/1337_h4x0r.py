def main():
    print("Enter a string to get 420 no scoped *69")
    
    openFile = open('1337.txt', 'r')
    haxor = openFile.read()

    haxor = toLeet(haxor)
    temp = ''

    for i in range(len(haxor)):
        if i == 0:
            temp += '('
        if haxor[i] == '\n' and haxor[i+1] != None:
            
        if haxor[i] == ' ' and haxor[i+1] != None or haxor[i] == ' ' and haxor[i+1] != '\n':
            

    haxor = temp
    print(haxor)

def toLeet(msg):
    leet = (
        (('you', 'You'), 'j00'),
        (('o', 'O'), '0'),
        (('i', 'I'), '1'),
        (('e', 'E'), '3'),
        (('s', 'S'), '5'),
        (('a', 'A'), '4'),
        (('t', 'T'), '7'),
        )
    for symbols, replaceStr in leet:
        for symbol in symbols:
            msg = msg.replace(symbol, replaceStr)
    return msg

main()