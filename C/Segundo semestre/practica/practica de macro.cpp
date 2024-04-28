#include<stdio.h>

#define min(x,y)((x>y)?x:y)
int main(){
	
	int x, y;
	printf("Ingrese un numero para la letra x:");
	scanf("%d",&x);
	printf("Ingrese un numero para la letra y:");
	scanf("%d",&y);
	
	if(min(x,y)){
		printf("La letra x es la mayor es el %d",min(x,y));}
	else{
		printf("La letra y es la mayor es el %d",min(x,y));}
	
}
