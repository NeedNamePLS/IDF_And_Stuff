import random

def main():
    StartGame()

def StartGame():
    WordList = ['grunting', 'travisisahipster', 'brautwurst', 'basement', 'democrat', 'decontamination', 'avocado', 'adoption', 'spacejam',
    'scissor', 'moan', 'felon', 'bacon', 'moist', 'dolphins', 'lemonparty', '|$20 (;^D) $20|', 'taco', 'cornhub', 'helpme']

    Mr_Bones_Wild_Ride = 0
    failCounter = 0
    index = (random.randint(0, len(WordList))) - 1
    Word = WordList[index]
    Length = len(Word)
    Display = []
    for i in range(Length):
        Display.append('*')

    # while Mr_Bones_Wild_Ride == 0:
    # print("  ???   | What could be the word?")s
    print("( ͝סּ ͜ʖ͡סּ) |", Display)


main()