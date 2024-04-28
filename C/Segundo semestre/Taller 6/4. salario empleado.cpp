/*supermecado*/
#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "");
	int cante,cde,ale,x;
	float sle ,sl;
	printf("Ingrese la cantidad de empleados a procesar: ");
	scanf("%d",&cante);
	for(x=1;x<=cante;x++){
		printf("\nCódigo de Empleado: ");
		scanf("%d",&cde);
		printf("Salario Mensual: ");
		scanf("%f",&sle);
		printf("Años de labor:");
		scanf("%d",&ale);
		if(ale<5)
		sl=sle+150.00;
		else if(ale>=5 && ale<=15)
		sl=sle+300.00;
		else{ 
		sl=sle+420.00;}
		printf("\nEl nuevo salario del empleado es de: B/%.2f\n\n",sl);	
	}

}
