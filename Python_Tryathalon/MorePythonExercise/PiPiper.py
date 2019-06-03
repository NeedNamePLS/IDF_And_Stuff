#Totally legit original code no copy paste here
from timeit import default_timer as timer

try:
    # import version included with old SymPy
    from sympy.mpmath import mp
except ImportError:
    # import newer version
    from mpmath import mp
mp.dps = int(input("Enter a digits of pi you wish to check: "))
datefind = input("Enter a date (ddmmyy) you wish to find in the pi: ")
start = timer()
pipitouch = str(mp.pi)

y = 0

for i in range(len(pipitouch)):
    if pipitouch[i] == datefind[0] and pipitouch[i+1] == datefind[1] and pipitouch[i+2] == datefind[2] and pipitouch[i+3] == datefind[3] and pipitouch[i+4] == datefind[4] and pipitouch[i+5] == datefind[5]:
        print("(╯°□°)╯︵ ┻━┻" + pipitouch[i] + pipitouch[i+1] + pipitouch[i+2] + pipitouch[i+3] + pipitouch[i+4] + pipitouch[i+5] + "┬─┬ノ( ◕◡◕ ノ)")
        print("\nDate found starting at digit:", i)
        y = 1
        break
    else:
        print(pipitouch[i],end='')
    if (i % 100) == 0 and i != 0:
        print()
if y == 0:
    print("No cigar")
end - timer()

print("This dumb program took" end - start "seconds to complete.")
