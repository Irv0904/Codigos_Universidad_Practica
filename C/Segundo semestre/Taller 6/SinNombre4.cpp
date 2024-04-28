#include<stdio.h>
main (){
	int cdc,x=0,mo,can;
	char nom[10];
	float pre,pt,tt;
	float c1=0,c2=0,c3=0,c4=0,ct;
	printf("ingrese la cantidad de clientes: ");
	scanf("%d",&cdc);
	
	printf("\nModelos de celular disponibles:\n1->Galaxy S15\t(precio B/430.80\n2->iPhone 10\t(Precio B/650.00)\n3-> Galaxy A31\t(Precio B/395.50)\n4->Xiaomi 9\t(Precio B/520.10) \n");
	
	while(x!=cdc){
		x++;
		printf("\nCliente %d\n",x);
		printf("Nombre del cliente: "); scanf("%s",&nom);
		printf("Ingrese el modelo: "); scanf("%d",&mo);
		printf("ingrese la cantidad: "); scanf("%d",can);
		
		if(mo==1){
			pt=can*430.80;
			if(pt>10000){
				tt=pt-1000;
				c1=c1+pt;}	
			else
				c1=c1+pt;	
		}
		else if(mo==2){
			pt=can*650.00;
			if(pt>10000){
				tt=pt-1000;
				c2=c2+tt;}
			else
				c2=c2+pt;	
		}
		else if(mo==3){
			pt=can*395.50;
			if(pt>10000){
				tt=pt-1000;
				c3=c3+tt;}
			else	
				c3=c3+pt;
		}
		else{
			pt=can*520.10;
			if(pt>=10000){
				tt=pt-1000;
				c4=c4+tt;}
			else
				c4=c4+pt;
		}
		if(pt<10000)
			printf("El total es %.2f",pt);
		else
			printf("El total es %.2f",tt);	
	}
	ct=c1+c2+c3+c4;
	printf("\ntotal diario es %.2f",ct);
}
