#include<stdio.h>
main(){
	float p1,p2,p3,p4,pt,plt,ptf;
	printf("Precio del Plato1: ");
	scanf("%f",&p1);
	printf("Precio del Plato2: ");
	scanf("%f",&p2);
	printf("Precio del Plato3: ");
	scanf("%f",&p3);
	printf("Precio del Plato4: ");
	scanf("%f",&p4);
	pt=p1+p2+p3+p4;
	plt=pt*0.12;
	ptf=plt+pt;
	printf("el tototal es de: %.2f",ptf);
}
