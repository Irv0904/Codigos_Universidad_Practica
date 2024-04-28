#include <iostream>
#include<locale.h>
using namespace std;

main(){
	setlocale(LC_ALL,"");
	int a, Parciales[3][2], Promedio[3],i;
	string nombre[3];

    for (a=0;a<=2;a++) /*Ciclo que solicita las 3 notas parciales de cada estudiante.*/
    {
    	cout<<"Ingrese el nombre del estudiante: "<<endl;
    	cin>>nombre[a];
        cout<<"Ingrese la nota 1 del estudiante "<<nombre[a]<<endl;
        cin>>Parciales[a][0];
        cout<<"Ingrese la nota 2 del estudiante "<<nombre[a]<<endl;
        cin>>Parciales[a][1];
 		cout<<"\n"<<endl;
    }
    for(a=0;a<=2;a++) /*Se calcula y asigna el promedio de cada estudiante al arreglo.*/
    {
        Promedio[a]=(Parciales[a][0]+Parciales[a][1])/2;
    }
    printf("A continuación mostramos las notas y el promedio de cada estudiante\n");
    cout<<"\nNombre\tNota 1\tNota 2\t Promedio "<<endl;
    for (a=0;a<=2;a++)
    {
        cout<<nombre[a]<<"\t"<<Parciales[a][0]<<"\t"<<Parciales[a][1]<<"\t"<<Promedio[a]<<endl;
    }
}
