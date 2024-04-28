#include<stdio.h> 
main()
{
	int i,n,valor; 
	printf("introduzca valor: ");
	scanf("%d",&valor);
	for(i=1;i<=valor;i++){
		for(n=1;i>=n;n++)
			printf("*");
			printf("\n");
	}
}
