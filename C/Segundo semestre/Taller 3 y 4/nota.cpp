#include<stdio.h>
main(){
	int nta;
	/*es lo mismo del cine*/
	printf("ingrese su nota final: "); scanf("%d",&nta);

	 if(nta<61){
	 	printf("Su nota es: F\nNo aprobo el curso");}
	 else if(nta>=61 and nta<70){
	 	printf("su nota es una: D\nNo aprobo el curso");
	 }
	 else if(nta>71 and nta<80){
	 	printf("su nota es una: C\nAprobo el curso");
	 }
	 else if(nta>81 and nta<90){
	 	printf("su nota es una: B\nAprobo el curso");
	 }
	else if(nta>91 and nta<100){
	 	printf("su nota es una: A\nAprobo el curso");
	 }
}
