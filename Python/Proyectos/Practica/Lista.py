lista = []
num =0

def lis(num):
    #num=0
    for b in (lista):
        print(num, b)
        num = num + 1

cant = int(input("Cuantos nombres vas a ingresar: "))
for i in range(cant):
    ingresar = input("Ingrese un nombre: ")
    lista.append(ingresar)
quitar = input("\nQuiere quitar algun nombre: ")
if quitar == "S" or quitar == "s":
        can = int(input("Cuantos vas a eliminar: "))
        for a in range(can):
            lis(num)
            quiper = int(input("Ingrese la posicion que vas a eliminar: "))
            if quiper is lista:
                lista.pop(quiper)
            else:
                lista.pop(quiper)
else:
    print(f"\n{lista}")
print(f"\n{lista}")

