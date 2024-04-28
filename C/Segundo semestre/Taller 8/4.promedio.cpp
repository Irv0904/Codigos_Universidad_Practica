//IRVING VILLARREAL, 8-1063-2312
#include<stdio.h>
#include<locale.h>

main(){
	setlocale(LC_ALL,"");
	int a,b,c;
	int *P_a, *P_b,*P_c;
	float prom;
	printf("Ingrese el número 1: ");
	scanf("%d",&a);
	printf("Ingrese el número 2: ");
	scanf("%d",&b);
	printf("Ingrese el número 3: ");
	scanf("%d",&c);

	P_a=&a;
	P_b=&b;
	P_c=&c;

	prom=(*P_a+*P_b+*P_c)/3; 
	printf("\nEl promedio de las notas ingresadas es: %.2f", prom);
}
