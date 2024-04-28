#include<stdio.h>
int main(){
	int ccnl;
	printf("Ingrese la cantidad de canales: "); 
	scanf("%d",&ccnl);
	if(ccnl<50){
		printf("Usted debe pagar:B/.30.00");
	}
	else if((ccnl>=50)&&(ccnl<=100)){
		printf("Usted debe pagar:B/.42.50");
	}
	else if((ccnl>=101)&&(ccnl<200)){
		printf("Usted debe pagar:B/.60.00");
	}
	else if(ccnl>200){
		printf("Usted debe pagar: B/.75.90");
	}
}
