#include<stdio.h>
main(){
	int num1,num2,opr;
	printf("Ingrese el primer valor numerico: ");
	scanf("%d",&num1);	
	printf("Ingrese el segundo valor numerico: ");
	scanf("%d",&num2);
	printf("que operacion quiere realizar:\n1--> Suma\t2--> Resta\t3--> Multiplicacion\t4--> Division\nRespuesta: ");
	scanf("%d",&opr);
	/*lo mismo que la gasolina, solo se usa 
	int por que no hay decimales, puede ser en la division pero no es obligacion, seria float div;*/
	switch(opr){
		case 1:
			printf("\nEl resultado de la suma es de: %d",num1+num2);
			break;
		case 2:
			printf("\nEl resultado de la resta es de: %d",num1-num2);
			break;
		case 3:
			printf("\nEl resultado de la multiplicacion es de: %d",num1*num2);
			break;
		case 4:
			printf("\nEl resultado de la division es de: %d",num1/num2);
			break;	
		default:
			printf("\nEl numero que ingreso es incorrecto");
	}
	return 0;
}
