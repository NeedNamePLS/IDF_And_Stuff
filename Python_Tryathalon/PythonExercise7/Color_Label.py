#Color Label

import tkinter

def main():
    main_window = tkinter.Tk()
    main_window.configure(background = 'green')
    label1 = tkinter.Label(main_window, text = 'RED', fg = 'red', background = 'green')
    label2 = tkinter.Label(main_window, text = 'WHITE', fg = 'white', background = 'green')
    label3 = tkinter.Label(main_window, text = 'BLUE', fg = 'blue', background = 'green')
    label1.pack()
    label2.pack()
    label3.pack()
    tkinter.mainloop()

main()