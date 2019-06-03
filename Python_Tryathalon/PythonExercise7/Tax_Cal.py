#Guessing Game

from tkinter import *
import tkinter

class GuiLouie:
    def __init__(self):

        self.main_window = tkinter.Tk()
        self.main_window.title('Tax Collector')
        self.Label1 = tkinter.Label(self.main_window, text = 'Gross Income: ').grid(row = 0, column = 0, sticky = 'W')
        self.Entry1 = tkinter.Entry(self.main_window).grid(row = 0, column = 1, sticky = 'W')
        self.Label2 = tkinter.Label(self.main_window, text = 'Dependents: ').grid(row = 1, column = 0, sticky = 'W')
        self.Entry2 = tkinter.Entry(self.main_window).grid(row = 1, column = 1, sticky = 'W')
        self.Butt1 = tkinter.Button(self.main_window, text = 'Compute', command = self.Compute).grid(row = 2, column = 1, sticky = 'W')
        self.Label3 = tkinter.Label(self.main_window, text = 'Total Tax: ').grid(row = 3, column = 0, sticky = 'W')
        self.Entry3 = tkinter.Entry(self.main_window).grid(row = 3, column = 1, sticky = 'W')
        # self.Entry3['state'] = 'disabled'
        tkinter.mainloop()

    def Compute(self):
        print("help")

my_gui = GuiLouie()