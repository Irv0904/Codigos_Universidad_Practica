/* Programa que muestra los números pares entre 0 y N. 

#include <stdio.h>
#include<locale.h>

void muestra_pares(int N ); /* Prototipo de la función. 

main ( )
{
	setlocale (LC_ALL,"");
    int N;
    printf("Ingrese un número: ");
    scanf("%d", &N);
    muestra_pares(N); /*Llamado a la función muestra_pares.
}

void muestra_pares(int N) /*En la declaración de la función no va ; 
{
    int a = 0;
    do
    {
        printf("El número par es %d \n", a);
        a = a + 2;
    } while (a<=N);
    return; /*El return aparece solo, ya que no se retorna nada a la función main( ) }*/

/* Programa que limpia la pantalla y escribe Buenos Días. //

#include <stdio.h>

 void limpia_pantalla(); // Prototipo de la función. //

 main()

{
    limpia_pantalla(); /* Llamado a la función limpia_pantalla //
}

void limpia_pantalla() /*En la declaración de la función no va ; //
{
    printf("Buenos Días");
    return; /*Función que no retorna nada a la función que la llamó/
//}*/
	
