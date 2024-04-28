#include<stdio.h>
main(){
	char a[10];
	int gsln,cgsln;
	float tl;
	printf("Ingrese su nombre: ");
	scanf("%s",&a);
	printf("\nIngrese el tipo de gasolina quiere: \n1--> 95 octanos\t2--> 91 octanos\t3-->Diesel\nRespuesta: ");
	scanf("%d",&gsln);
	switch(gsln){
		case 1:
			printf("\nIngrese la cantidad de gasolina: "); scanf("%d",&cgsln);
			printf("El cliente %s debe pagar un monto de:%.2f",a,cgsln*1.50);
			break;
		case 2:
			printf("\nIngrese la cantidad de gasolina: "); scanf("%d",&cgsln);
			printf("\nEl cliente %s debe pagar un monto de:%.2f",a,cgsln*1.36);
			break;
		case 3:
			printf("\nIngrese la cantidad de gasolina: "); scanf("%d",&cgsln);
			printf("\nEl cliente %s debe pagar un monto de:%.2f",a,cgsln*1.27);
			break;
		default: printf("El numero escogido es incorecto");
	}
}
