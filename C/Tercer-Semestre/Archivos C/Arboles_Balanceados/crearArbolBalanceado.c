/*
	Name:Crear Arbol con dintistos recorrido
	Author: Irving Jhon Villarreal Lasso
	Date: 23/05/23 14:24
	Description: Este codigo se usa para hacer un arbol con distinto recorridos
	Calificacion:
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct datos
{
    int info;
    int fe;
    struct datos *ligader;
    struct datos *ligaizq;
}Arbol;

typedef enum{false, true} bool;

void *crearMemoria(int n);
Arbol *creaNodo();

void preOrden(Arbol *apNodo);
void inOrden(Arbol *apNodo);
void posOrden(Arbol *apNodo);

Arbol *insertaBalanceado(Arbol *nodo,bool bo, int info);

int main()
{
    
}

void *crearMemoria(int n)
{
    void *p = (int *)malloc(n);
    if(p == NULL)
    {
        printf("NO HAY MEMORIA, PARA CREAR NODO");
        getchar();
        exit(1);
    }
    return p;
}

Arbol *creaNodo()
{
    return(Arbol *)crearMemoria(sizeof(Arbol));
}

void preOrden(Arbol *apNodo)
{
    if(apNodo != NULL)
    {
        printf("%5d ",apNodo->info);
        preOrden(apNodo->ligaizq);
        preOrden(apNodo->ligader);
    }
}

void inOrden(Arbol *apNodo)
{
    if(apNodo != NULL)
    {
        inOrden(apNodo->ligaizq);
        printf("%5d ",apNodo->info);
        inOrden(apNodo->ligader);
    }
}

void posOrden(Arbol *apNodo)
{
    if(apNodo != NULL)
    {
        posOrden(apNodo->ligaizq);
        posOrden(apNodo->ligader);
        printf("%5d ",apNodo->info);
    }
}

Arbol *insertaBalanceado(Arbol *nodo, bool bo, int info)
{
    Arbol *ramaAux, *ramaAux2, *ramaAux3;
    if(nodo != NULL)
    {
        if(info < nodo->info)
        {
            insertaBalanceado(nodo->ligaizq,info,bo);
            if(bo == true)
            {
                if(nodo->fe == 1)
                {
                    nodo->fe=0;
                    bo = false;
                }
                else if(nodo->fe == 0)
                    nodo->fe = -1;
                else if(nodo->fe == -1)
                {
                    ramaAux=nodo->ligaizq;
                }
                    if(ramaAux->fe <= 0)
                    {
                        nodo->ligaizq=ramaAux->ligader;
                        ramaAux->ligader = nodo;
                        nodo->fe = 0;
                        nodo = ramaAux;
                    }
                    else
                    {
                        ramaAux2 = ramaAux->ligader;
                        nodo->ligaizq = ramaAux2->ligader;
                        ramaAux2->ligader = nodo;
                        ramaAux->ligader = ramaAux2->ligaizq;
                        ramaAux2->ligaizq = ramaAux; 
                    }
            }
        }
    }
}
