/*
	Name: Salario de un trabajador 
	Author: Irving Villarreal, 8-1063-2312
	Date: 29/11/22 20:02
	Description: Ingresar el salrio del trabajador, las deduciones y trabajos extras
*/

#include<stdio.h>
#include<locale.h>

main(){
	setlocale(LC_ALL,"");
	struct datos{
		char 	nom[20];
		float 	sal_bas;
		float 	deduc;
		int 	hr_ex_tr;
		float	pg_hr_ex;
	}dts_prs;

	float sn;
	
		printf("Ingrese el nombre del empleado: ");
		gets(dts_prs.nom);
		
		printf("\nIngrese salario base: B/.");
		scanf("%f",&dts_prs.sal_bas);
		
		printf("Ingrese las deducciones: B/.");
		scanf("%f",&dts_prs.deduc);
		
		printf("Ingrese las horas extras trabajadas: ");
		scanf("%d",&dts_prs.hr_ex_tr);
		
		printf("Ingrese el pago por hora extra trabajadas: B/.");
		scanf("%f",&dts_prs.pg_hr_ex);
		
		sn=dts_prs.sal_bas-dts_prs.deduc+(dts_prs.hr_ex_tr*dts_prs.pg_hr_ex);
		
		printf("\nEl salario neto del empleado %s es:B/.%.2f\n\n",dts_prs.nom,sn);
		
		return 0;
}
