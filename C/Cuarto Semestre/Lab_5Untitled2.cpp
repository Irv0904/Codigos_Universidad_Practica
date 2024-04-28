#include <stdio.h>
int main()
	{
	int numero;
	printf( "\n Listado de signos del zodiaco:" );
	printf( "\n\n 1. Aries" );
	printf( "\n 2. Tauro" );
	printf( "\n 3. Geminis" );
	printf( "\n 4. Cancer" );
	printf( "\n 5. Leo" );
	printf( "\n 6. Virgo" );
	printf( "\n 7. Libra" );
	printf( "\n 8. Escorpio" );
	printf( "\n 9. Sagitario" );
	printf( "\n 10. Capricornio" );
	printf( "\n 11. Acuario" );
	printf( "\n 12. Piscis" );
	printf( "\n\n Introduzca numero de signo: " );
	scanf( "%d", &numero );
	switch ( numero )
		{
		case 1 :
		case 5 :
		case 9 : 
			printf( "\n Es un signo de Fuego." );
			break;
		case 2 :
		case 6 :
		case 10 : 
			printf( "\n Es un signo de Tierra." );
			break;
		case 3 :
		case 7 :
		case 11 : 
			printf( "\n Es un signo de Aire." );
			break;
		case 4 :
		case 8 :
		case 12 : 
			printf( "\n Es un signo de Agua." );
			break;
		default : printf( "\n ERROR: %d no esta asociado a ningun signo.",numero );
	}
	return 0;
}
