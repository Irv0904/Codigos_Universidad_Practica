#include <iostream>
#include<locale.h>
#include<math.h>
using namespace std;

void mip(); 

main (){
	setlocale(LC_ALL,"");
    int N;
	cout<<"Vamos a ver las Raiz cuadrada de los numeros 5 al 30\n"<<endl;
    mip();
}

void mip() {
    int a;
	float raiz;
	cout<<"Numeros\tRaiz Cuadrada\n"<<endl;
	for(a=5;a<30;a+=3) {
		raiz=sqrt(a);
		cout<<a<<"\t"<<raiz<<endl;
	}
}
