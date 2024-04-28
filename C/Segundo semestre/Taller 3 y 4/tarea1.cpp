#include<stdio.h>
main(){
 int a,b,c;
 	printf("Ingrese el primer digito: "); scanf("%d",&a);
 	printf("Ingrese el segundo digito: "); scanf("%d",&b);
	printf("\nQue quiere hacer con los digitos?\n1--> La suma de las variables\n2-->impresion de dos variables\n3--> El mayor de las dos variables\n4--> Salir\nSeleccione su opcion: ");
	scanf("%d",&c);
	if(c==1){
		printf("La suma de las dos variables es:%d ",a+b);}
	else if(c==2){
		printf("La primera variable vale: %d y la segunda vale:%d",a,b);}
	else if(c==3){
		if(a>b){
			printf("El mayor es: %d y el menor es: %d",a,b);}
		else;{
			printf("El mayor es: %d y el menor es: %d",b,a);}}
	else;{
		printf("Adios");}		
}
