#include<stdio.h>
main(){
	int a,arr[12],np=0,nn=0,nc=0;
	for(a=0;a<12;a++){
		printf("Ingrese los digitos: ");
		scanf("%d",&arr[a]);
		
		if(arr[a]>0)
			np++;
		else if(arr[a]<0)
			nn++;
		else
			nc++;	
	}	
	printf("n%cmeros positivos: %d\n",151,np);
	printf("n%cmeros negativos: %d\n",151,nn);
	printf("n%cmeros con cero: %d",151,nc);
}
