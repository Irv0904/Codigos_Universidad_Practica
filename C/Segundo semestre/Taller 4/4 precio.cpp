/*Precio de Supermecado*/
#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL, "");
	int x,cnt;
	float pr,prt;
	printf("Ingrese la cantidad de productos: ");
	scanf("%d",&cnt);
	printf("\n");
	while(x<cnt){
		x=x+1;
		printf("Ingrese el precio del producto: ");
		scanf("%f",&pr);
		prt=prt+pr;
	}
	printf("\nLa suma de los productos a pagar es: %.2f\n",prt);
	printf("\n2El total a pagar es: %.2f",prt+(prt*0.07));
	return 0;

}
/*Irving Villarreal,8-1063-2312*/
