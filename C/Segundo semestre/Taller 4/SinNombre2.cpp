#include<stdlib.h>
#include<time.h>
#include<stdio.h> 
int main(){
	srand(time(NULL));
	int intentos=3,numi;
    int num=rand()% (10+1);
    while(intentos!=0){
    	printf("Ingrese un numero: ");
    	scanf("%d",&numi);
    	if(numi==num){
		printf("FELICIDADES ACERTASTE AL NUMERO");
		break;}
		else if(numi<num){
		printf("El numero que incertaste esta cerca\n");
		intentos--;
		printf("te quedan %d intentos\n\n",intentos);}
		else if(numi>num){
		printf("El numero que incertaste esta lejos\n");
		intentos--;
		printf("te quedan %d intentos\n\n",intentos);}
	}
}
