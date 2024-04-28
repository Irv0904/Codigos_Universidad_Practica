from tkinter import *

# Funciones de la calculadora
def click_boton(valor):
    current = str(entry.get())
    entry.delete(0, END)
    entry.insert(0, current + str(valor))

def borrar():
    entry.delete(0, END)

def borrar_ultimo():
    current = str(entry.get())
    entry.delete(0, END)
    entry.insert(0, current[:-1])

def calcular():
    try:
        resultado = eval(entry.get())
        entry.delete(0, END)
        entry.insert(0, resultado)
    except Exception as e:
        entry.delete(0, END)
        entry.insert(0, "Error")

# Configuración de la interfaz gráfica
ventana = Tk()
ventana.title("Calculadora")

entry = Entry(ventana, width=16, font=("Arial", 20))
entry.grid(row=0, column=0, columnspan=4)

botones = [
    '7', '8', '9', '/',
    '4', '5', '6', '*',
    '1', '2', '3', '-',
    '0', '.', '=', '+'
]

row_val = 1
col_val = 0

for boton in botones:
    Button(ventana, text=boton, padx=20, pady=20, font=("Arial", 16), command=lambda boton=boton: click_boton(boton) if boton != '=' else calcular()).grid(row=row_val, column=col_val)
    col_val += 1
    if col_val > 3:
        col_val = 0
        row_val += 1

Button(ventana, text="C", padx=20, pady=20, font=("Arial", 16), command=borrar).grid(row=row_val, column=col_val)
col_val += 1
Button(ventana, text="<-", padx=20, pady=20, font=("Arial", 16), command=borrar_ultimo).grid(row=row_val, column=col_val)

ventana.mainloop()
