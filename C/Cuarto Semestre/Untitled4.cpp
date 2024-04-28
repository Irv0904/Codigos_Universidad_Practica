#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int num1;
	printf("Introduzca numero 1:");
	scanf("%d",&num1);
	if (num1>0)
	{
		printf("Es positivo\n");
	}
	else if (num1<0
	){
		printf("Es negativo\n");
	}
	else
	{
		printf("Es cero\n");
	}
	system("PAUSE");
	return 0;
}
