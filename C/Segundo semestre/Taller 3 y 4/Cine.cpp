#include<stdio.h>
main(){
	int ed;
	printf("Ingrese su edad: ");
	scanf("d%",&ed);
	
	if(ed<12){
		printf("2.25");}
	else if(ed>=12 && ed<=18){
		printf("3.25");}
	else if(ed>18 && ed<=55){
		printf("4.25");}
	else if(ed>55){
		printf("3.00");}
}
