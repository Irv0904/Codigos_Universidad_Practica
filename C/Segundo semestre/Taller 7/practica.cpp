/* Programa que muestra los n�meros pares entre 0 y N. 

#include <stdio.h>
#include<locale.h>

void muestra_pares(int N ); /* Prototipo de la funci�n. 

main ( )
{
	setlocale (LC_ALL,"");
    int N;
    printf("Ingrese un n�mero: ");
    scanf("%d", &N);
    muestra_pares(N); /*Llamado a la funci�n muestra_pares.
}

void muestra_pares(int N) /*En la declaraci�n de la funci�n no va ; 
{
    int a = 0;
    do
    {
        printf("El n�mero par es %d \n", a);
        a = a + 2;
    } while (a<=N);
    return; /*El return aparece solo, ya que no se retorna nada a la funci�n main( ) }*/

/* Programa que limpia la pantalla y escribe Buenos D�as. //

#include <stdio.h>

 void limpia_pantalla(); // Prototipo de la funci�n. //

 main()

{
    limpia_pantalla(); /* Llamado a la funci�n limpia_pantalla //
}

void limpia_pantalla() /*En la declaraci�n de la funci�n no va ; //
{
    printf("Buenos D�as");
    return; /*Funci�n que no retorna nada a la funci�n que la llam�/
//}*/
	
