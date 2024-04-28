/*notas finales*/
#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "");
	int can,nota,x=0;
	int a=0,b=0,c=0,d=0,f=0;
	printf("Ingrese la cantidad de notas: ");
	scanf("%d",&can);
	while(x<can){
		x++;
		printf("Ingrese la nota: ");
		scanf("%d",&nota);
		if(nota>90){
		a++;}
		else if(nota>81 && nota<=90){
		b++;}
		else if(nota>71 && nota<=80){
		c++;}
		else if(nota>61 && nota<=70){
		d++;}
		else{
		f++;}
	}
	printf("\nDe las notas ingresadas se obtuvo lo siguiente:\n");
	printf("%d A\n%d B\n%d C\n%d D\n%d F",a,b,c,d,f);
}/*Irving_Villarreal, 8-1063-2312*/
