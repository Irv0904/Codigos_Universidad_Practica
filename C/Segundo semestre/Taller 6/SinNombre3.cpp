#include<stdio.h>
#include<locale.h>
#define st 10
int main(){
	setlocale(LC_ALL, "");
	int x,cde,ac,ctd;
	char nom[10];
	float mt,mn,tt,pgf;
	printf("ingrese la cantidad de clientes: ");
	scanf("%d",cde);
	
	printf("Modelos de celulares disponibles:");
	printf("1->Galaxy S15\t (precio B/430.80)\n2->iPhone 10 \t(Precio B/.650.00)\n3-> Galaxy A31 \t(Precio B/.395.50)\n4-> Xiaomi 9 \t(Precio B/.520.10)");
	
	for(x=0;x<cde;x++){
		printf("Nombre del cliente: ");
		scanf("%s",&nom);
		printf("ingrese el modelo de celular a comprar: ");
		scanf("%d",ac);
		printf("ingrese la cantidad a comprar: ");
		scanf("%d",&ctd);
	 }
	
	
}
//Irving_Villarreal_8-1063-2312
