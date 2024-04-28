//IRVING VILLARREAL, 8-1063-2312
#include<stdio.h>
#include<locale.h>

void cantidadtotal(float prect);

main(){	
	setlocale(LC_ALL,"");

	float precio,prect=0,pre;int cant,a;
	do{
		printf("Ingrese el precio del producto:  ");
		scanf("%f",&precio);
		printf("Ingrese la cantidad: ");
		scanf("%d",&cant);
		pre=precio*cant;
		prect=prect+pre;
		
		printf("\nDesea comprar mas producto: 1->Si\t2->No?\nRespuesta: ");
		scanf("%d",&a);
		printf("\n");
	}while(a!=2);
	cantidadtotal(prect);	

}

void cantidadtotal(float prect){
	printf("El total a pagar es de: %.2f\n",prect);
	printf("El impuesto es de: %.2f\n",prect*0.15);
	printf("El totala pagar con impuesto es de: %.2f",prect+(prect*0.15));
}

nodo *comienzo(nodo *p)
{
	int num,j;
	nodo *v;
	p = creaNodo();
	printf("Ingrese un número, para salir ingrese una letra: ");
	j=scanf("%d",&num);
	//fflush(stdin);
	if(j == 1)
	{
		p ->num = num;
		p -> liga=NULL;	
		
		do
		{
		v= creaNodo();
		printf("Ingrese un número, para salir ingrese una letra: ");
		j=scanf("%d", &num);
		fflush(stdin);
		if (j == 1)
		{
			v->num = num;
			v->liga=p;
			p=v;
		}
		else
		{
			free(v);
			break;
		}
		}while(j ==1);
		printf("\n*****creando Listas enlazada...*****\n");
		printf("\n");
		v=p;
		return p;
	}
	else
	{
		free(p);
		return (NULL);
	}	
}
