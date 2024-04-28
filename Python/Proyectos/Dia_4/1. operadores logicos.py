#   /|
#    |
#  -----

#|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=#
#|                    Operadores Logicos                    |#
#|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=#
#MY_BOOL ='hola' > 'HOLA'.lower()
#print(MY_BOOL)
#MY_BOOL ='hola' > 'HOLA'
#print(MY_BOOL)
#MY_BOOL = 14 < 5 and 5 > 6# se debe cumplir todas las opciones
#print(MY_BOOL)
#MY_BOOL = 14 < 5 or 5 > 6# se debe cumplir una de  las opciones
#print(MY_BOOL)
#MY_BOOL = not 'a' == 'b' and not 'a'== 'a'
#print(MY_BOOL)
#frase = "Cuando algo es lo suficientemente importante, lo haces incluso si las probabilidades de que salga bien no te acompañan"
#palabra1 = "éxito"
#palabra2 = "tecnología"
#mi_bool = palabra1 not in frase and palabra2 not in frase
#print(mi_bool)
#|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=#
#|                    Control De Flujo                      |#
#|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=#
#a =19
#if a < 10:
#    print('es correcto')
#elif a > 9:
#    print('es incorrecto')

#mascota = 'perro'
#if mascota == 'gato':
#    print("Tienes un gato")
#elif mascota == 'perro':
#    print("Tienes un perro")

#edad = 26
#calificacion = 7
#if edad > 18:
#    print("Eres mayor")
#    if calificacion >= 7:
#        print("No Aprobo")
#    else:
#        print("Aprobo")
#else:
#    print("Eres menor")

#num1 = input("Ingresa un número:")
#num2 = input("Ingresa otro número:")
#if num1 > num2:
#    print(f"{num1} es mayor que {num2}")
#elif num1< num2:
#    print(f"{num2} es mayor que {num1}")
#else:
#    print(f"{num1} y {num2} son iguales")

#edad = 16
#tiene_licencia = False
#if edad > 18:
#    print('es mayor')
#    if True == tiene_licencia:
#        print("Puedes conducir")
#else:
#    print("No puedes conducir aún. Debes tener 18 años y contar con una licencia")
habla_ingles = True
sabe_python = False
if habla_ingles == True and sabe_python == True:
    print("Cumples con los requisitos para postularte")
elif habla_ingles == False and sabe_python == False:
    print("Para postularte, necesitas saber programar en Python y tener conocimientos de inglés")
elif habla_ingles == False and sabe_python == True:
    print("Para postularte, necesitas tener conocimientos de inglés")
else:
    print("Para postularte, necesitas saber programar en Python")
