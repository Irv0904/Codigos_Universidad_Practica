#include<stdio.h>
main(){
	int arr[10],arr1[10],arr2[10],a;
	
	for(a=0;a<10;a++){
		printf("Introduzca los datos: ");
		scanf("%d",&arr[a]);
	}
	for(a=0;a<10;a++){
		arr1[a]=arr[a]*arr[a];
		arr2[a]=arr[a]*arr[a]*arr[a];
	}
	printf("Los arreglos son: ");
	printf("\nArreglo 1\t Arreglo 2\tArreglo 3\n");
	for(a=0;a<10;a++){
		printf("%d\t\t%d\t\t%d\n",arr[a],arr1[a],arr2[a]);
	}
}
