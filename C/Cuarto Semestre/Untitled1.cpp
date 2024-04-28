#include <stdio.h>
int main(void)
{
	short D, d;
	printf("Programa para dividir dos enteros...\n");
	printf("Dividendo ... ");
	scanf(" %hd",&D);
	printf("Divisor......");
	scanf(" %hd",&d);
	if(d != 0)
	{
		printf(" %hu / %hu = %hu\n", D, d, D / d);
	}
	else
	{
		printf("ERROR: division por cero!\n");
	}
	return 0;
}
