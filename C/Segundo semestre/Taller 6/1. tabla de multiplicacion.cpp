/*supermecado*/
#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "");
	int tabla,x;
	printf("Ingrese un número: "); 
	scanf("%d",&tabla);
	for(x=1;x<=12;x++){
	printf("%dx%d= %d\n",tabla,x,tabla*x);
	}
}
