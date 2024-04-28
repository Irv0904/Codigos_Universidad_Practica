#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "");
	int res,cdes,ccl,cns,cdt,cte,h;
	float rdt,rns,rte,tvl; 
	
	printf("Ingrese el vuelo que quiere\n1-> Costa Rica\t2->Miami\t3->Brasil\nRespuesta: ");
	scanf("%d", &res);
	printf("\nCódigo de destino: "); scanf("%d",&cdes);
	printf("Código de cliente: "); scanf("%d",&ccl);
	printf("Cantidad de niños: "); scanf("%d",&cns);
	printf("Cantidad de adultos : "); scanf("%d",&cdt);
	printf("Cantidad de personas de tercera de edad : "); scanf("%d",&cte);
	
	if(res==1){
		rdt=cdt*390.00;
		if(cns!=0)
			rns=cns*390.00-(390.00*0.25);
		else{
			printf("\n");
		}
		if(cte!=0)
			rte=cte*390.00-(390.00*0.25);
		else{
			printf("\n");
		}
		tvl=rdt+rns+rte;	
	}
	else if(res==2){
		rdt=cdt*470.00;
		if(cns!=0)
			rns=cns*470.00-(470.00*0.25);
		else{
			printf("\n");
		}
		if(cte!=0)
			rte=cte*470.00-(470.00*0.25);
		else{
			printf("\n");
		}	
		tvl=rdt+rns+rte;
	}
	else{
		rdt=cdt*550.00;
		if(cns!=0)
			rns=cns*550.00-(550.00*0.25);
		else{
			printf("\n");
		}
		if(cte!=0)
			rte=cte*550.00-(550.00*0.25);
		else{
			printf("\n");
		}
		tvl=rdt+rns+rte;	
	}
	printf("\nEl cliente %d debe pagar %.2f",ccl,tvl);
}
