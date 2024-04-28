#include<stdio.h>
main(){
	int p1[6],p2[6],pa[6],a;
	
	for(a=0;a<6;a++){
		printf("Ingrese la nota del parcial 1: ");
		scanf("%d",&p1[a]);
		printf("Ingrese la nota del parcial 2: ");
		scanf("%d",&p2[a]);
		if(p1[a]>p2[a])
			pa[a]=p1[a];
		else
			pa[a]=p2[a];	
	}
	printf("\nLas notas son: \n");
	printf("Parcial 1\tParcial 2\tParcial mas alto\n");
	
	for(a=0;a<6;a++){
		printf("%d\t\t%d\t\t%d\n",p1[a],p2[a],pa[a]);
	}

}
