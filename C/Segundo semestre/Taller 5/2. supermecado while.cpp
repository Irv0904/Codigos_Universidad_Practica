/*supermecado*/
#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "");
	int ctd,res;
	float pre,sbt,ttl=0;

	do{
		printf("\nIngrese el precio: ");scanf("%f",&pre);
		printf("Ingrese la cantidad: "); scanf("%d",&ctd);
			sbt=pre*ctd;
			ttl=ttl+sbt;
		printf("Quieres seguir más comprando: 1->si\t2->No\nRespuesta: ");
		scanf("%d",&res);
	}while(res!=2);
	printf("\nel total es: %.2f",ttl);
	return 0;
}
