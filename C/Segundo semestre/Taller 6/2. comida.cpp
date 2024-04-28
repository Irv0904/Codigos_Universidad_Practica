#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL, "");
	int dd,yn;
	float mp,des,mpc,desc;
	do{
		printf("Ingrese la edad del cliente: ");
		scanf("%d",&dd);
		printf("Monto del plato: ")	;
		scanf("%f",&mp);
		if(dd>45){
			des=mp-(mp*0.25);
			desc=desc+des;
			printf("El cliente debe pagar B/%.2f\n",des);}
		else{
			mpc=mpc+mp;
			printf("El cliente debe pagar B/%.2f\n",mp);}
		printf("\nDesea calcular el total a pagar de otro cliente:\n1->Sí\t2->No\nRespuesta: ");
		scanf("%d",&yn);
	}while(yn!=2);
		printf("\nEl total general que deben pagar es:%.2f",desc+mpc);
}
