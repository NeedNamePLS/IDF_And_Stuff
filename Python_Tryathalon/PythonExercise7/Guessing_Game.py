#Guessing Game

import random
from tkinter import *
import tkinter

class GuiLouie:
    def __init__(self):
        self.Attempts = 0
        self.TextInput = 0
        self.Answer = random.randint(1,101)

        self.main_window = tkinter.Tk()
        self.main_window.title('Guessing Game')

        self.GuessLabel = tkinter.Label(self.main_window, text = 'Guess a number between 1 and 100\n').grid(row = 0, column = 0, sticky = W)
        self.UserLabel = tkinter.Label(self.main_window, text = 'Your guess: ').grid(row = 1, column = 0, sticky = W)
        self.TextBox = tkinter.Entry(self.main_window).grid(row = 1, column = 1, sticky = W)
        self.NextButt = tkinter.Button(self.main_window, text = 'Next', command = self.Guessaroo).grid(row = 2, column = 0, sticky = W)
        self.NewGameButt = tkinter.Button(self.main_window, text = 'New Game', command = self.NewGame).grid(row = 2, column = 1, sticky = W)
        tkinter.mainloop()

    def Guessaroo(self):
        userInput = int(self.TextBox.get()) 

        if userInput > self.Answer:
            self.GuessLabel['text'] = 'You\'re way too large...\n'
            self.Attempts += 1
        elif userInput < self.Answer:
            self.GuessLabel['text'] = 'You\'re way too small...\n'
            self.Attempts += 1
        else:
            winText = 'WINNER\n It only took you failing ' + str(self.Attempts) + ' times...'
            self.GuessLabel['text'] = winText
            self.NextButt['state'] = 'disabled'

    def NewGame(self):
        self.GuessLabel['text'] = 'Guess a number between 1 and 100\n'
        self.NextButt['state'] = 'active'
        self.TextBox.delete('0', 'end')
        self.Attempts = 0
        self.Answer = random.randint(1,101)


my_gui = GuiLouie()