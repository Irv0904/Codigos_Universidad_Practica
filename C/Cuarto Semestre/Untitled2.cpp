#include <stdio.h>
int main(void)
{
	float nota;
	printf("Introduzca la nota del examen ... ");
	scanf(" %f",&nota);
	if(nota < 0 || nota > 10)
		printf("Nota incorrecta.");
	else if(nota < 5)
	{
		printf("Suspenso."); 
		if (nota < 7)
			printf("Aprobado."); 
		else if (nota < 9)
			printf("Notable."); 
		else if (nota < 10)
			printf("Sobresaliente.");
	}
	else
		printf("Matricula de honor.");
	return 0;
}
