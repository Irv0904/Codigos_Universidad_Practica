//IRVING VILLARREAL, 8-1063-2312
#include<stdio.h>
#include<locale.h>

void categoriaU(int can,int cat);

main(){
	setlocale(LC_ALL,"");

	int i, cat,can;
	printf("A cuántas personas desea calcularle el valor a pagar por los estacinamientos?: ");
	scanf("%d",&can);
	for(i=0;i<can;i++){
		printf("\nIngrese su categoría dentro de la Universidad de Panamá:\n");
		printf("1->Estudiantes\t2->Administrativo\t3->Profesor\nRespuesta: ");
		scanf("%d",&cat);
		categoriaU(can, cat);
	}
}

void categoriaU(int can,int cat){
	int i;
		if(cat==1){
			printf("\nUd. debe pagar B/. 6.50 por estacionarse en la Universidad.\n");
		}
		else if(cat==2){
			printf("\nUd. debe pagar B/. 8.00 por estacionarse en la Universidad.\n");
		}
		else{
			printf("\nUd. debe pagar B/. 10.00 por estacionarse en la Universidad.\n");
		}
}
