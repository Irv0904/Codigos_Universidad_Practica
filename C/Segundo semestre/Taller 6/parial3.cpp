#include<stdio.h>
main (){
	int can,t=0,tc,cl;
	float st,im,tt,ttl=0;
	char nom [10];
	
	printf("cantida de clientes: "); 
	scanf("%d",&can);
	printf("\ntipos de combustible:\n1->Gasolina de 91\t(precio B/2.15)\n2->Gasolina de 95\t(Precio B/2.80)\n3-> Gasolina maxima\t(Precio B/2.30)\n");

	while(t!=can){
		t++;
		printf("\ncliente %d\n",t);
		
		printf("Nombre: ");
		scanf("%s",&nom);
		printf("Ingrese tipo de combustible: ");
		scanf("%d",&tc);
		printf("Cantidad de litros: ");
		scanf("%d",&cl);
		
		if(tc==1){
			st=cl*2.15;
			im=st*0.05;
			tt=st+im;
		}
		else if(tc==2){
			st=cl*2.80;
			im=st*0.05;
			tt=st+im;
		}
		else{
			st=cl*2.30;
			im=st*0.05;
			tt=st+im;
		}
		ttl=ttl+tt;
		printf("\nSub total: %.2f\nImpuesto: %.2f\nTotal: %.2f\n",st,im,tt);
		
	}
	printf("total de venta es:%.2f",ttl);
}
