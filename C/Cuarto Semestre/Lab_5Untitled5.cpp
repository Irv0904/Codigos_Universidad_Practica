#include<stdio.h>
#include<conio.h>
int main()
	{
	int valor1,valor2;
	char operacion;
	int resultado;
	printf("Ingrese primer valor:");
	scanf("%i",&valor1);
	printf("Ingrese segundo valor:");
	scanf("%i",&valor2);
	printf("Ingrese la operacion quiere hacer: +,-,*,/ :");
	scanf(" %c",&operacion);
		switch (operacion) {
		case '+':
			resultado=valor1+valor2;
			printf("La suma es:%i",resultado);
			break;
		case '-':
			resultado=valor1-valor2;
			printf("La resta es:%i",resultado);
			break;
		case '*':
			resultado=valor1*valor2;
			printf("El producto es:%i",resultado);
			break;
		case '/':
			resultado=valor1/valor2;
			printf("La division es:%i",resultado);
			break;
		}
	getch();
	return 0;
}
