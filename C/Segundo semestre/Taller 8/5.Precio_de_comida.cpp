//IRVING VILLARREAL, 8-1063-2312
#include<stdio.h>
#include<locale.h>

main(){
	setlocale(LC_ALL,"");
	float pre1,pre2,pre3,pre4;
	float *P_pre1, *P_pre2,*P_pre3,*P_pre4;
	float prom;
	printf("Ingrese el precio 1: ");
	scanf("%f",&pre1);
	printf("Ingrese el precio 2: ");
	scanf("%f",&pre2);
	printf("Ingrese el precio 3: ");
	scanf("%f",&pre3);
	printf("Ingrese el precio 4: ");
	scanf("%f",&pre4);


	P_pre1=&pre1;
	P_pre2=&pre2;
	P_pre3=&pre3;
	P_pre4=&pre4;

	prom=*P_pre1+*P_pre2+*P_pre3+*P_pre4;
	 
	printf("\nEl subtotal es de: %.2f", prom);
	printf("\nEl total de impuesto a de: %.2f", prom*0.05);
	printf("\nEl total a pagar es de: %.2f", prom+(prom*0.05));
}
