#include<stdio.h>
#include"CopaDeOro.h" 

int main()
{
    Nodo *lista1;
    Equipo *grupoA[4];
    grupoA[0] = crearEquipo('A', "Estados Unidos");
    grupoA[1] = crearEquipo('A', "Jamaica");
    grupoA[2] = crearEquipo('A', "Trinidad y Tobago");
    grupoA[3] = crearEquipo('A', "San Cristobal y Nieves");
    lista1 = crearNodo();
    lista1->pEquipo  = grupoA[0];
    grupoA[0]->siguiente = grupoA[1];
    grupoA[1]->siguiente = grupoA[2];
    grupoA[2]->siguiente = grupoA[3];
    grupoA[3]->siguiente = NULL;
    lista1->siguiente = NULL;
    recorre_grupo(lista1);
}
