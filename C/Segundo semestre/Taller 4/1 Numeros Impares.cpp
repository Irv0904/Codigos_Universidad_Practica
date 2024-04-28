/*Numeros impares*/
#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL, "");
	int a,x=0,z;
	printf("Ingrese un número: ");
	scanf("%d",&a);
	while(x<a){
		z=x%2;
		if(z!=0)
		printf("%d\n",x);
	}
	return 0;
}
/*Irving Villarreal, 8-1063-2312*/
