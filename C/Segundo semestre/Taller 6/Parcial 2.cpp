#include<stdio.h>
#include<locale.h>
#define st 10
int main(){
	setlocale(LC_ALL, "");
	int x=0,cde,ac;
	char nom[10];
	float mt,mn,tt,pgf;
	printf("Ingrese cantidad de estudiante: ");
	scanf("%d", &cde);
	while(x!=cde){
		x++;
		printf("\nIngrese el nombre del estudiante: ");
		scanf("%s",&nom);
		printf("Ingrese elaño académico: ");
		scanf("%d", &ac);
		if(ac<=6){
			mt=280.00;
		}
		else{
			mt=420.00;
		}
		if(ac<=9){
			mn=st*170.00;
		}
		else{
			mn=st*250.00;
		}	
		tt=mt+mn;
		pgf=pgf+tt;
		
		printf("El total a pagar es de: %.2f",mt+mn);			
	}
	printf("El total a generar a pagar es B/%.2f",pgf);
}
//Irving_Villarreal_8-1063-2312
