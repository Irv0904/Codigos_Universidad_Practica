/*Notas de estudiantes*/
#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "");
	int nota,c=0,ntp=0,rpr=0,cf;
	float pro;

	do{
		printf("Nota: "); scanf("%d",&nota);
		ntp=ntp+nota;
		if(nota==0)
			break;
		else if(nota<61)
			rpr++;
		else
			c++;
	}while(nota!=0);
	cf=c+rpr;
	pro=ntp/cf;
	printf("\nSe registró la nota de %d estudiantes.",cf);
	printf("\nLa nota promedio es %.2f",pro);
	printf("\nReprobaron %d estudiantes",rpr);
	return 0;
}
