#

def main():
    DeadMan = ['T','R','A','V','I','S',' ','I','S',' ','A',' ','H','I','P','S','T','E','R']
    Display = ['_','_','_','_','_','_',' ','_','_',' ','_',' ','_','_','_','_','_','_','_']
    Guesses = ['-']
    GameOver = 0
    Correct = 0
    Match = 0
    WinCon = len(DeadMan)
    while GameOver < 5:
        Counter = 0
        Correct = 0
        Match = 0
        print("\n",Display)
        print("Previous Guesses: ",Guesses)
        print("You have", 5 - GameOver, "chances of error remaining...")
        print("Guess a letter: ",end="")
        temp = input()[0].upper()
        for i in range(len(Guesses)):
            if temp == Guesses[i]:
                Match += 1
                print(Guesses)
                print("You already guessed that letter!")
            else:
                for i in range(len(DeadMan)):
                    if temp == DeadMan[i]:
                        Display[i] = DeadMan[i]
                        Correct += 1
        if Match == 0 and Correct > 0:
            Guesses.append(temp)
        for i in range(len(DeadMan)):
            if Display[i] == DeadMan[i]:
                Counter += 1
        if Correct == 0:
            GameOver += 1
        if Counter == WinCon:
            Yay()
            break
    if GameOver == 5:
        Boo()

def Yay():
    for i in range(10):
        print("YOU WIN!")

def Boo():
    for i in range(10):
        print("YOU LOSE...")

main()