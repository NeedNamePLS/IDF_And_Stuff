#

def main():
    speed = int(input("Input the miles per hour of the train: "))
    time = int(input("Input the hours the train has traveled: "))
    print("Hours   Distance Traveled")
    print("-------------------------")
    for i in range(1, time+1):
        distance = float(speed * i)
        print(format(i, '2d'), "    ", format(distance, '4.1f'), "miles")
    
main()
