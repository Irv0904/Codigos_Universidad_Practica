#include <stdio.h>
#include <stdlib.h>
int main() {
	int Num; int Res;
	printf("Programa para determinar naturaleza par o impar de un numero\n\n");
	printf ("Introduzca un numero entero: ");
	scanf ("%d", &Num);
	Res = Num%2;
	if (Res==0) 
	{
		printf ("El numero es par\n");
	} 
	else 
	{
		printf ("El numero es impar\n");
	}
	return 0;
}
