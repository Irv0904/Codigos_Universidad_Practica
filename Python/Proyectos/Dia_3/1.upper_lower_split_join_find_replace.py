#   /|
#    |
#    |
#   ----
#|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|#
#|                    Index                          |#
#|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|#

#my_texto = "hola putito"
#resultado = my_texto.index("o") #Busca de izquierda a derecha
#resultado1 = my_texto.rindex("o") #Busca de derecha izquierda
#print(resultado,resultado1)

#frase = "En teoría, la teoría y la práctica son los mismos. En la práctica, no lo son."
#h = frase.index("práctica",34)
#print(h)

#frase = "En teoría, la teoría y la práctica son los mismos. En la práctica, no lo son."
#h = frase.index("práctica")
#print(h)

#palabra = "ordenador"
#h=palabra[4]
#print(h)

#|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|#
#|                    Sub_Strings                    |#
#|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|#

#texto = "ABCDEFGHIJKLMN"
#graf = texto[::-1]
#print(graf)

#frase = "Controlar la complejidad es la esencia de la programación"
#h = frase[:9]
#print(h)

#frase = "Nunca confíes en un ordenador que no puedas lanzar por una ventana"
#h = frase[8::3]
#print(h)

#frase = "Es genial trabajar con ordenadores. No discuten, lo recuerdan #todo y no se beben tu cerveza"
#h = frase[::-1]
#print(h)

#|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=#
#|                     upper_lower_split_join_find_replace                    |#
#|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=#

#texto = "ellos aveces no son amigos aveces son novios"
#result = texto.upper()
#result = texto.lower()
#result = texto.split("e")
#result = texto.find("")
#result = texto.replace("o","x")
#a="hola"
#b="como"
#c="estas"
#d= "-".join([a,b,c])
#print(result)

#frase = "Especialmente en las comunicaciones electrónicas, la escritura enteramente en mayúsculas equivale a gritar."
#h= frase.upper()
#print(h)

#lista_palabras = ["La","legibilidad","cuenta."]
#a = " ".join(lista_palabras)
#print(a)

#a = "Si la implementación es difícil de explicar, puede que sea una mala idea."
#frase = a.replace("difícil","fácil")
#print(frase)