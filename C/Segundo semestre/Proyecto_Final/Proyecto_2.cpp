/*
	Name: Inventario
	Author: Irving Villarreal, 8-1063-2312
	Date: 29/11/22 20:04
	Description: Hacer un inventario de un almacen
*/

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

void LimpiarPantalla();

main(){
	
	
	setlocale(LC_ALL,"");
	
	struct 	dts{
		
		int 	cd_pdt;
		char  	nom_pdt[60];
		int 	cnt_inv;
		int 	cnt_mn;
		float	prc;
		
	}dts_mcn[2];

	int i,cant; 
	
	printf("Ingrese cantidad de productos: "); scanf("%d",&cant);
	
	for(i=0;i<cant;i++){
		printf("\nIngrese codigo del producto: ");	
		scanf("%d",& dts_mcn[i].cd_pdt);
		
		printf("Ingrese nombre del producto: ");
		scanf("%s",& dts_mcn[i].nom_pdt);

		printf("Ingrese cantidad del inventario: ");
		scanf("%d",& dts_mcn[i].cnt_inv);
		
		printf("Ingrese cantidad minimo: ");
		scanf("%d",& dts_mcn[i].cnt_mn);
		
		printf("Ingrese el precio del producto: B/.");
		scanf("%f",& dts_mcn[i].prc);
		
	}
	
	LimpiarPantalla();
	
	printf("\nInventario de los productos:\n");

	printf("\nCod_Prod\tNombre\tCant.Inv\tCant.Min\tPrecio\n");
	
	for(i=0;i<cant;i++){	
		printf("%d\t\t%s\t%d\t\t%d\t\tB/.%.2f\n",dts_mcn[i].cd_pdt,dts_mcn[i].nom_pdt,dts_mcn[i].cnt_inv,dts_mcn[i].cnt_mn,dts_mcn[i].prc);
	}
		
	printf("\nProductos con inventario bajo:\n");
	printf("\n|Cod_Prod|\t|Nombre|\t|Cant.Inv|\t|Cant.Min|\t|Precio|\n");
	
		
		
		
	for(i=0;i<cant;i++){
		
		if(dts_mcn[i].cnt_inv<dts_mcn[i].cnt_mn)
			printf("|%5d||%5s||%5d||%5d||B/.%.2f|\n",dts_mcn[i].cd_pdt,dts_mcn[i].nom_pdt,dts_mcn[i].cnt_inv,dts_mcn[i].cnt_mn,dts_mcn[i].prc);
		else
			printf("");
	}
	
	
for (int x = 0; x < 300; x += 9) {
  printf("|%5d|\n",x);
}
}

void LimpiarPantalla(){
	if(system("cls") == -1){
		printf("Error al borrar la pantalla.");
	}
}
