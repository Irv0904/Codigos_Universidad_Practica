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
    struct datos *ligader;
    struct datos *ligaizq;
}Arbol;

typedef enum{false, true} bool;

void *crearMemoria(int n);
Arbol *creaNodo();

Arbol *creaArbol(Arbol *APNnodo);

void preOrden(Arbol *APNnodo);
void inOrden(Arbol *APNnodo);
void posOrden(Arbol *APNnodo);

Arbol *busqueda_ABB(Arbol *APNnodo, int info);
Arbol *busqueda_v1_ABB(Arbol *APNnodo, int info);

Arbol *insercion_ABB(Arbol *APNnodo, int info);
Arbol *insercion_v1_ABB(Arbol *APNnodo, int info);

Arbol *eliminacion_ABB(Arbol **APNnodo, int info);


int main()
{
    Arbol *APNnodo = NULL;
    int info , resp, subdato;
    do
    {
        system("CLS");
        printf("\t\t\t*****************\n\t\t\t*Menu de Arboles*\n\t\t\t*****************\n");
        printf("\t\t\t1->Crear\n\t\t\t2->Ingresar\n\t\t\t3->Eliminar\n\t\t\t4->Busqueda\n\t\t\t5->Salir\n\t\t\tRespuesta: ");
        scanf("%d", & resp);
        fflush(stdin);
        switch (resp)
        {
            case 1:
                system("CLS");
                APNnodo = creaNodo();
                printf("Ingrese La raiz principal: ");
                APNnodo=creaArbol(APNnodo);
                printf("\nArbol en PreOrden\n\n");
                preOrden(APNnodo);
                printf("\n\nArbol en InOrden\n\n");
                inOrden(APNnodo);
                printf("\n\nArbol en PosOrden\n\n");
                posOrden(APNnodo);
                printf("\n");
                system("PAUSE");
                break;
            case 2:
                system("CLS");
                printf("Insercion en un arbol, elija una opcion");
                printf("\n1->Insercion\n2->Insercion v1\n3->Salir\nRespuesta: ");
                scanf("%d",&subdato);
                fflush(stdin);
                switch (subdato)
                {
                    do
                    {
                        case 1:
                            printf("\n\nIngrese la informacion a ingresar: ");
                            scanf("%d", &info);
                            fflush(stdin);
                            APNnodo = insercion_ABB(APNnodo, info);
                            printf("\nArbol en PreOrden\n\n");
                            preOrden(APNnodo);
                            printf("\n\nArbol en InOrden\n\n");
                            inOrden(APNnodo);
                            printf("\n\nArbol en PosOrden\n\n");
                            posOrden(APNnodo);
                            printf("\n");
                            system("PAUSE");
                            break;
                        case 2:
                            printf("\n\nIngrese la informacion a ingresar: ");
                            scanf("%d", &info);
                            fflush(stdin);
                            APNnodo = insercion_v1_ABB(APNnodo, info); 
                            printf("\nArbol en PreOrden\n\n");
                            preOrden(APNnodo);
                            printf("\n\nArbol en InOrden\n\n");
                            inOrden(APNnodo);
                            printf("\n\nArbol en PosOrden\n\n");
                            posOrden(APNnodo); 
                            printf("\n");
                            system("PAUSE");
                            break;
                        case 3:
                            break;
                        default:
                            printf("ERROR, el dato ingresado es incorrecto");
                            break;
                    }while(subdato != 3);
                    break;
                }
                break;
            case 3:
                system("CLS");
                printf("\n\nIngrese la informacion a eliminar: ");
                scanf("%d", &info);
                fflush(stdin);
                eliminacion_ABB(&APNnodo, info);
                printf("\nArbol en PreOrden\n\n");
                preOrden(APNnodo);
                printf("\n\nArbol en InOrden\n\n");
                inOrden(APNnodo);
                printf("\n\nArbol en PosOrden\n\n");
                posOrden(APNnodo);  
                printf("\n");
                system("PAUSE");
                break;
            case 4:
                system("CLS");
                printf("Busqueda en arbol, elija una opcion");
                printf("\n1->Busqueda\n2->Busqueda v1\n3->Salir\nRespuesta: ");
                scanf("%d",&subdato);
                fflush(stdin);
                switch (subdato)
                {
                    do
                    
                    {
                        case 1:
                            printf("\n\nIngrese la informacion a buscar: ");
                            scanf("%d", &info);
                            fflush(stdin);
                            APNnodo = busqueda_ABB(APNnodo,info);
                            system("PAUSE");
                            break;
                        case 2:
                            printf("\n\nIngrese la informacion a buscar: ");
                            scanf("%d", &info);
                            fflush(stdin);
                            APNnodo = busqueda_v1_ABB(APNnodo,info);
                            system("PAUSE");
                            break;
                        case 3:
                            break;
                        default:
                            printf("ERROR, el dato ingresado es incorrecto");
                            break;
                    }while(subdato != 3);
                    break;
                }
                break;
            case 5:
                break;
            default:
                break;
        }
    }while(resp != 5);
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

void preOrden(Arbol *APNnodo)
{
    if(APNnodo != NULL)
    {
        printf("%5d ",APNnodo->info);
        preOrden(APNnodo->ligaizq);
        preOrden(APNnodo->ligader);
    }
}

void inOrden(Arbol *APNnodo)
{
    if(APNnodo != NULL)
    {
        inOrden(APNnodo->ligaizq);
        printf("%5d ",APNnodo->info);
        inOrden(APNnodo->ligader);
    }
}

void posOrden(Arbol *APNnodo)
{
    if(APNnodo != NULL)
    {
        posOrden(APNnodo->ligaizq);
        posOrden(APNnodo->ligader);
        printf("%5d ",APNnodo->info);
    }
}

Arbol *creaArbol(Arbol *APNnodo)
{
    Arbol *otroArbol;
    int resp;

    scanf("%d", &(APNnodo->info));

    printf("\nExiste nodo por izquierda de %d?\n1->Si \t 2->No: ",APNnodo->info);
    scanf("%d", &resp);
    fflush(stdin);
    if (resp == 1) 
    {
        otroArbol = creaNodo();
        printf("\nIngrese la informacion del nodo: ");
        APNnodo->ligaizq =otroArbol;
        creaArbol(APNnodo->ligaizq);
    } 
    else 
    {
        APNnodo->ligaizq = NULL;
    }

    printf("\nExiste nodo por derecha de %d?\n1->Si \t 2->No: ", APNnodo->info);
    scanf("%d", &resp);
    fflush(stdin);
    if (resp == 1) 
    {
        otroArbol = creaNodo();
        printf("\nIngrese la informacion del nodo: ");
        APNnodo->ligader = otroArbol;
        creaArbol(APNnodo->ligader);
    } 
    else
    {
        APNnodo->ligader = NULL;
    }

    return APNnodo;
}

Arbol *busqueda_ABB(Arbol *APNnodo, int info)
{
    if(info < APNnodo->info)
    {
        if(APNnodo->ligaizq == NULL)
            printf("\nLa informacion dada no se encuentra en el arbol\n");
        else
            busqueda_ABB(APNnodo->ligaizq, info);
    }
    else
    {
        if(info > APNnodo->info)
        {
            if(APNnodo->ligader == NULL)
            printf("\nLa informacion dada no se encuentra en el arbol\n");
            else
            busqueda_ABB(APNnodo->ligader, info);
        }
        else
            printf("\nLa informacion dada si esta en el arbol\n");
    }
    return APNnodo;
}

Arbol *busqueda_v1_ABB(Arbol *APNnodo, int info)
{
    if(APNnodo != NULL)
    {
        if(info < APNnodo->info)
            busqueda_v1_ABB(APNnodo->ligaizq, info);
        else
        {
            if(info > APNnodo->info)
            busqueda_v1_ABB(APNnodo->ligader, info);
            else
            printf("\nLa inforamacion dada si se encuentra en el arbol\n");
        }
    }
    else
        printf("\nLa informacion dada no se encuentra en el Arbol\n");

    return APNnodo;
}

Arbol *insercion_ABB(Arbol *APNnodo, int info)
{
    if(info < APNnodo->info)
    {
        if(APNnodo->ligaizq == NULL)
        {
         Arbol *otroArbol = creaNodo();
            otroArbol->ligaizq = NULL;
            otroArbol->ligader = NULL;
            otroArbol->info = info;
            APNnodo->ligaizq = otroArbol;
        }
        else
            insercion_ABB(APNnodo->ligaizq, info);
    }
    else
    {
        if(info > APNnodo->info)
        {
            if(APNnodo->ligader == NULL)
            {
                Arbol *otroArbol = creaNodo();
                otroArbol->ligaizq = NULL;
                otroArbol->ligader = NULL;
                otroArbol->info = info;
                APNnodo->ligader = otroArbol;
            }
            else
            insercion_ABB(APNnodo->ligader, info);
        }
        else
            printf("\nLa informacion dada ya se encuentra en el Arbol\n");
    }
    return APNnodo;
}

Arbol* insercion_v1_ABB(Arbol* APNnodo, int info)
{
    if (APNnodo != NULL)
    {
        if (info < APNnodo->info)
            APNnodo->ligaizq = insercion_v1_ABB(APNnodo->ligaizq, info);
        else if (info > APNnodo->info)
            APNnodo->ligader = insercion_v1_ABB(APNnodo->ligader, info);
        else
            printf("La informacion dada ya se encuentra en el arbol\n");
    }
    else
    {
        Arbol* otroArbol = creaNodo();
        otroArbol->ligaizq = NULL;
        otroArbol->ligader = NULL;
        otroArbol->info = info;
        APNnodo = otroArbol;
    }
    return APNnodo;
}
Arbol* eliminacion_ABB(Arbol **APNnodo, int info)
{
    if (*APNnodo == NULL)
    {
        printf("La información dada para eliminar no se encuentra en el árbol");
        return NULL;
    }

    if (info < (*APNnodo)->info)
        (*APNnodo)->ligaizq = eliminacion_ABB(&((*APNnodo)->ligaizq), info);
    else
    {
        if (info > (*APNnodo)->info)
            (*APNnodo)->ligader = eliminacion_ABB(&((*APNnodo)->ligader), info);
        else
        {
            Arbol *otroArbol = *APNnodo;
            if (otroArbol->ligader == NULL)
                *APNnodo = otroArbol->ligaizq;
            else
            {
                if (otroArbol->ligaizq == NULL)
                    *APNnodo = otroArbol->ligader;
                else
                {
                    Arbol *arbolAux = otroArbol->ligaizq;
                    Arbol *arbolAux_1 = NULL;
                    bool bo = false;
                    while (arbolAux->ligader != NULL)
                    {
                        arbolAux_1 = arbolAux;
                        arbolAux = arbolAux->ligader;
                        bo = true;
                    }
                    if (bo)
                        arbolAux_1->ligader = arbolAux->ligaizq;
                    else
                        (*APNnodo)->ligaizq = arbolAux->ligaizq;
                }
            }
            free(otroArbol);
        }
    }
    return *APNnodo;
}