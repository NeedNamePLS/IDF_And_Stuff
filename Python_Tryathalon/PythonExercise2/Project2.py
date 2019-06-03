#

def main():
    print("Diamond")
    draw_diamond()
    print("Big X")
    draw_X()
    print("Murican Rocket")
    draw_Rocket()

def draw_diamond():
    Piece1()
    Piece2()
    print()

def draw_X():
    Piece2()
    Piece1()
    print()

def draw_Rocket():
    Piece1()
    Piece3()
    Piece4()
    Piece3()
    Piece1()

def Piece1():
    print("   /\\")
    print("  /  \\")
    print(" /    \\")

def Piece2():
    print(" \\    /")
    print("  \\  /")
    print("   \\/")

def Piece3():
    print("+------+")
    print("|      |")
    print("|      |")
    print("+------+")
    
def Piece4():
    print("|United|")
    print("|States|")

main()
