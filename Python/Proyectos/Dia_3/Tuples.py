#|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|#
#|                       Tuples                      |#
#|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|#

#mi_tuple = (1,2,(10,20),4,5,2)
#mi_tuple = list(mi_tuple)
#print(type(mi_tuple))
#print(mi_tuple)
#print(len(mi_tuple))
#t = (1,2,3)
#x,y,z = t
#print(x,y,z)

#print(mi_tuple.count(2))
#print(mi_tuple.index(1))

#mi_tupla = (1, 2, 3, 2, 3, 1, 3, 2, 3, 3, 3, 1, 3, 2, 2, 1, 3, 2)
#print(mi_tupla.count(2))

#mi_tupla = (1, 2, 3, 2, 3, 1, 3, 2)
#mi_lista = list(mi_tupla)

#mi_tupla = (1, 2, 3, 4)\
#a,b,c,d = mi_tupla

#|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|#
#|                        SET                        |#
#|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|#

#mi_set = set([1,2,3,4,5,6])
#print(type(mi_set))
#print(mi_set)
#print(2 in mi_set)

#otro_set = {1,2,(7,8,9),3,4,5,6}
#print(type(otro_set))
#print(otro_set)

#s1 = {1,2,3}
#s2 = {4,5,6}
#s3 = s1.union(s2)
#print(s3)

#s1 = {1,2,3,5,6,7,8,9,0}
#s1.add(4)
#s1.remove(1)
#s1.discard(2)
#s1.pop()
#s1.clear()
#print(s1)

#mi_set_1 = {1, 2, "tres", "cuatro"}
#mi_set_2 = {"tres", 4, 5}
#mi_set_3 = mi_set_1.union(mi_set_2)

#sorteo = {"Camila", "Margarita", "Axel", "Jorge", "Miguel", "Mónica"}
#print(sorteo.pop())

#sorteo = {"Camila", "Margarita", "Axel", "Jorge", "Miguel", "Mónica"}
#print(sorteo.add("Damián"))

#|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|#
#|                        BOOLEANOS                        |#
#|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|#

#var1 = True
#var2 = False
#print(type(var1))
#print(var2)

#numero = 5>2+3
#print(numero)

#lista = [1,2,3,4,5]
#control = 5 in lista
#print(control)

#prueba = 5 == 7+9
#print(prueba)

#a = 1784/34 > 87*56
#print(a)

a = 25 != 5**0.5
print(a)