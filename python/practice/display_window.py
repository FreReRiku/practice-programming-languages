import sys
import tkinter

root = tkinter.Tk()

root.title("Hello,tkinter")
root.geometry("1000x500")

Static = tkinter.Label(text=u'test')
Static.pack()

root.mainloop()