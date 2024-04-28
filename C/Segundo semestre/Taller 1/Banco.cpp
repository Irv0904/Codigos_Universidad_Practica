#include<stdio.h>
main(){
	float mini;
	float mdep;
	float mret;
	printf("Ingrese el monto incial de la cuenta: ");
	scanf("%f",&mini);/*Ingresara el monto inicial*/
	printf("Ingrese el monto de retiro que ha realizado: ");
	scanf("%f",&mret);/* ingresa la cantidad de retiro de dinero que realizo*/
	printf("Ingrese el monto de deposito que ha realizado: ");
	scanf("%f",&mdep);/*Ingresa la cantidad de deposito de dinero que realizo*/
	printf("El monto final de su cuenta de ahorros es de: %.2f",mini-mret+mdep);
}
