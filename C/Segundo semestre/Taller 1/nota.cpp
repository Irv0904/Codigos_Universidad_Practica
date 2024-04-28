#include<stdio.h>
#define ex 5
int  main(){
	int n1,n2,n3,n4,n5,sd,rf;
    printf("Ingrese la Primera nota: "); scanf("%d",&n1);
    printf("Ingrese la Segunda nota: "); scanf("%d",&n2);
    printf("Ingrese la Tercera nota: "); scanf("%d",&n3);
    printf("Ingrese la Cuarta nota: "); scanf("%d",&n4);
    printf("Ingrese la Quinta nota: "); scanf("%d",&n5);
    sd=(n1+n2+n3+n4+n5)/ex;
    rf=sd+ex;
    printf("La nota final es de:%d",rf);
    
}
