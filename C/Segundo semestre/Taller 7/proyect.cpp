#include<iostream>
#include<time.h>
#include<stdlib.h>

using namespace std;

void jugar2();

char eleccion;

string palabras[]={"raton","iguana","edificio","escalera","computadora","manzana","ojo","agua","soda","lombriz"};
string palabra;
int na,vida;
main(){
	while(true){
		vida=6;
		cout<<"\t:::MENU:::"<<endl;
		cout<<"1) 2 personas"<<endl;
		cout<<"2) 1 persona y computadora"<<endl;
		cout<<"3) Salir"<<endl;
		cout<<"Elegir: "<<endl;
		cin>>eleccion;
		
		switch(eleccion){
			case '1':
				break;
			case '2':
				jugar2();
			case '3':
				return 0;
				break;	
		}
	}
}
void jugar2(){
	srand((int)time(NULL));
	na=rand()%10;
	cout<<na;
	
	for(int )
	
	while(vida>0){
		cout<<"\t::AHORCADO:::"<<endl;
	}
}

