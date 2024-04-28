#include<stdio.h>
main(){
	float sp,sn,sb,snn,sbb;
	char nom [10];
	int hs,hx;
	printf("Ingrese su nombre de empleado: ");
	scanf("%s",&nom);
	printf("Ingrese su salario base por hora: ");
	scanf("%f",&sp);
	printf("Ingrese las horas trabajadas semanales: ");
	scanf("%d",&hs);
	/*este es el problema 2, lo mismo*/
	if(hs<=48){
		sn=hs*sp;
		printf("Sr(a) %s su salario es de: %.2f",nom,sn);}
	else;{
		snn=48*sp;
		hx=hs-48;
		sb=hx+(hx*0.25);
		sbb=sb*sp;
		sn=sbb+snn;
		printf("Sr(a) %s su salario es de: %.2f",nom,sn);
	}
	return 0;
	/*Alguna duda me dices para explicarte*/
}
