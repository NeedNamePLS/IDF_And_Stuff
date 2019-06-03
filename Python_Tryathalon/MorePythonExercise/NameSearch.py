BNfile = open('BoyNames.txt')
GNfile = open('GirlNames.txt')

BNlist = list(BNfile)
for i in range(len(BNlist)):
    BNlist[i] = BNlist[i].strip()

GNlist = list(GNfile)
for i in range(len(GNlist)):
    GNlist[i] = GNlist[i].strip()

BNfile.close()
GNfile.close()

privCheckM = 0
privCheckF = 0
SearchWord = input("Input a name to be searched: ")

for i in range(len(BNlist)):
    if SearchWord.lower() == BNlist[i].lower():
        privCheckM = 1
        break

for i in range(len(GNlist)):
    if SearchWord.lower() == GNlist[i].lower():
        privCheckF = 1
        break

if privCheckM == 1 and privCheckF == 1:
    print("The name", SearchWord, "is among the top 200 most popular names for both boys and girls")
elif privCheckM == 1:
    print("The name", SearchWord, "is among the top 200 most popular names for boys")
elif privCheckF == 1:
    print("The name", SearchWord, "is among the top 200 most popular names for girls")
else:
    print("The name", SearchWord, "isn't among the top 200 most popular names for either boys or girls")