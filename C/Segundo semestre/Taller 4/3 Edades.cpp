/*Definir las edades de las personas*/
#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL, "");
	int x,dd,mn=0,my=0,my2=0,my3=0;
	do{
	x++;
	printf("Ingrese su edad: ");
	scanf("%d",&dd);
	if (dd<18){
	mn++;}
	else if (dd>18 && dd<=30){
	my++;}
	else if (dd>31 && dd<=60){
	my2++;}
	else if (dd>60){
	my3++;}
	}//Irving Villarreal, 8-1063-2312
	while(x<15);
	printf("\nDel grupo de datos leídos, obtuvimos lo siguiente resultado:\n");
	printf("\n%d personas menores de edad.",mn);
	printf("\n%d personas tienen entre 18 y 30.",my);
	printf("\n%d personas tienen entre 18 y 30.",my2);
	printf("\n%d personas son mayores a 60.",my3);
	return 0;
}	
