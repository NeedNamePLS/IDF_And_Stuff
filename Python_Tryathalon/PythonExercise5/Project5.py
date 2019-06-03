#2d List

def main():
    List2D = []
    for i in range(5):
        List2D.append([])
        for j in range(3):
            List2D[i].append(0)
            List2D[i][j] = int(input("Input an int value: "))
    print(List2D)
    
main()