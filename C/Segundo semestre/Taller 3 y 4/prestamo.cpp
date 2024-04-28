#include<stdio.h>
main(){
	int pre;
	float tti;
	printf("Ingrese la cantidad del prestamo: ");
	scanf("%d",&pre);
	/*lo mismo que nota, solo que se agrega la tasa de interes*/
	if(pre<=10000){
		printf("La tasa de interes es de: 7%%");
		tti=pre+(pre*0.07);
		printf("\nEl interes anual es de: %.2f",tti);}
	else if(pre>10001 and pre<50000){
		printf("La tasa de interes es de: 10%%");
		tti=pre+(pre*0.10);
		printf("\nEl interes anual es de: %.2f",tti);}
	else if(pre>50000 ){
		printf("La tasa de interes es de: 12%%");
		tti=pre+(pre*0.12);
		printf("\nEl interes anual es de: %.2f",tti);}
		
	return 0;
}
