#include<stdio.h>
int main(){
	int ccnl;
	printf("Ingrese la cantidad de canales: "); scanf("%d",&ccnl);

	if(ccnl<700){
         printf("Su aumente es de 125\n");
         printf("su nuevo salario es: %d",ccnl+125);
	}
	else if((ccnl>=700)&&(ccnl<=1800)){
		printf("Su aumente es de 200\n");
        printf("su nuevo salario es: %d",ccnl+200);
	}
	else if((ccnl>=1801)&&(ccnl<3000)){
		printf("Su aumente es de 250\n");
        printf("su nuevo salario es: %d",ccnl+250);
	}
	else if(ccnl>3000){
		printf("Su aumente es de 300\n");
        printf("su nuevo salario es: %d",ccnl+300);
	}
}
