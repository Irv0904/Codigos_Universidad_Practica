lista = ["marta","laura","maria"]
num = 0
for a in(lista):
    print(num,a)
    num=num+1


#
for i in  range(2):
    q = int(input("Elimine uno que este en la lista"))
    if q is not lista:
        print("ErrOR 404")
        print(lista)
    else:
        lista.pop(q)
        print(lista)