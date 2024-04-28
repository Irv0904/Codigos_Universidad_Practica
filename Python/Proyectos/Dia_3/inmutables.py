#|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=#
#|                    Inmutables                    |#
#|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=#
#nombre = "Carina"
#nombre[0] = "K"
#print(nombre)

#poema = "hola"
#print(len(poema))

#a = "Repetición"
#print( a * 15)

#a = """Tierra mojada
#mis recuerdos de viaje,
#entre las lluvias"""
#print("agua" not in a)

#a = "electroencefalografista"
#print(len(a))

#|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=#
#|                    Listas                    |#
#|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=#

#lis = ['a','g','c','d','e']
#lis2 = ['f','b','h','i']
#lisu = lis + lis2
#lisu[0] ="alfa"
#lisu.append("j")
#lisu.pop()
#lisu.sort()
#lisu.reverse()
#print(lisu)
#print(res)
#print(len(lis))
#print(type(lis))

#medios_transporte = ["avión", "auto", "barco", "bicicleta"]
#a = medios_transporte.append("motocicleta")
#print(a)

#frutas = ["manzana", "banana", "mango", "cereza", "sandía"]
#eliminado = frutas.pop(2)
#print(eliminado)

#|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|#
#|                    Diccionario                    |#
#|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|#

#diccionario = {'C1':'Aa','C2':'Bb','C3':'Cc'}
#print(type(diccionario))
#print(diccionario)
#result = diccionario['C1']
#print(result)

#clientes = {'Nombre':'Irving','Apellido':'Villarreal','Edad':18}
#consulta = (clientes['Apellido'])
#print(consulta)

#dic = {'C1':55,'C2':[45,10,78],'C3':{'c4':67,'c5':56}}
#print(dic['C3']['c4'])

#dic = {'c1':['a','b','c'],'c2':['d','e','f']}
#print(dic['c2'][1].upper())

dic = {1:'a',2:'b',3:'c',4:'d'}
print(dic)
dic[5] = 'e'
print(dic)
dic[2] = 'B'
print(dic)
print(dic.keys())
print(dic.values())
print(dic.items())

#mi_dict = {"valores_1":{"v1":3,"v2":6},"puntos":{"points1":9,"points2":[10,300,15]}}
#print(mi_dict["puntos"]['points2'][1])

#mi_dic = {"nombre": "Karen", "apellido": "Jurgens", "edad": 35, "ocupacion": "Periodista", 'edad': 36,
#          'ocupacion': 'Editora', 'pais': 'Colombia'}
#print(mi_dic)