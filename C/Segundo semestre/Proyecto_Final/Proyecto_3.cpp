/*
	Name: Precios de los automoviles
	Author: Irving Villarreal, 8-1063-2312
	Date: 29/11/22 20:12
	Description: Ingresar el costo de los automoviles, de dos años diferente
*/

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

void LimpiarPantalla();

main(){
	
	setlocale(LC_ALL,"");
	struct 	dts{
		int 	cd_aut;
		char  	descrip[60];
		float 	prec_18;
		float 	prec_22;
	}dts_mcn[19];

	int i,cant; 
	printf("Ingrese cantidad del automovil: "); scanf("%d",&cant);
	for(i=0;i<cant;i++){
		printf("\nIngrese codigo del automovil: "); 
		scanf("%d",& dts_mcn[i].cd_aut);
		
		printf("Ingrese nombre del automovil: ");
		scanf("%s",& dts_mcn[i].descrip);

		printf("Ingrese el precio del automovil del año 2018: B/.");
		scanf("%f",& dts_mcn[i].prec_18);
		
		printf("Ingrese el precio del automovil del año 2022: B/.");
		scanf("%f",& dts_mcn[i].prec_22);	
	}
	
	LimpiarPantalla();
	
	printf("\nAuto\tDescripcion\tprec_2018\tprec_2022\n\n");
	for(i=0;i<cant;i++){
		printf("%d\t%s\t\t%.2f\t%.2f\n",dts_mcn[i].cd_aut,dts_mcn[i].descrip,dts_mcn[i].prec_18,dts_mcn[i].prec_22);
	}
		
	for(i=0;i<cant;i++){
		if(dts_mcn[i].prec_18>dts_mcn[i].prec_22)
			printf("\n%s con código %d bajó B/.%.2f\n",dts_mcn[i].descrip,dts_mcn[i].cd_aut,dts_mcn[i].prec_18-dts_mcn[i].prec_22);
		else{
		printf("\n%s con código %d subio B/.%.2f\n",dts_mcn[i].descrip,dts_mcn[i].cd_aut,dts_mcn[i].prec_22-dts_mcn[i].prec_18);

		}
	}
	
}
void LimpiarPantalla(){
	if(system("cls") == -1){
		printf("Error al borrar la pantalla.");
	}
}
