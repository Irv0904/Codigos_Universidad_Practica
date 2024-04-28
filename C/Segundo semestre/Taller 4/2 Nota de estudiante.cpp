/*Notas de esstudianetes*/
#include<stdio.h>
main(){
	int n1,n2,nf,x,f,j;
	printf("Ingrese la cantidad de estudiante: ");
	scanf("%d",&f);
	while(x<f){
		x=x+1;
		printf("\nEstudiante %d \n",x);
		printf("Ingrese la nota 1: ");
		scanf("%d",&n1);
		printf("Ingrese la nota 2: ");
		scanf("%d",&n2);
		nf=(n1+n2)/2;
		if(nf<60){
			printf("La nota final del estudiante es: %d y corresponde a F\n",nf);}
		else if(nf>61 && nf<70){
			printf("La nota final del estudiante es: %d y corresponde a D\n",nf);}
		else if(nf>71 && nf<80){
			printf("La nota final del estudiante es: %d y corresponde a C\n",nf);}
		else if(nf>81 && nf<90){
			printf("La nota final del estudiante es: %d y corresponde a B\n",nf);}
		else if(nf>91 && nf<=100){
			printf("La nota final del estudiante es: %d y corresponde a A\n",nf);}
	}		
	return 0;
}
/*Irving Villarreal, 8-1063-2312*/
