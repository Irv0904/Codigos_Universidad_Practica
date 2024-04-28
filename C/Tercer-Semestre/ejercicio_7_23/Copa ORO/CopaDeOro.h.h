#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAXEQ 16
#define MAXGRP 4
#define MAXEQPG 4
#define MAXJUEGOS 40

typedef struct CopaDeOro
{
    struct CopaDeOro *siguienteFase;
    struct CopaDeOro *siguiente;
    struct Equipos *pEquipo;
} Nodo;

typedef struct Equipos
{
    char grupo;
    char nombre[25];
    struct Equipos *siguiente;
    struct Partido *pPartido;
    struct Registro *record;
} Equipo;

typedef struct Partido
{
    int numPartido;
    char fecha[30];
    char estadio[30];
    struct Equipos pais[2];
    char hora[8];
    struct Partido *siguiente;
} Partido;

typedef struct Registro
{
    int ganados;
    int perdidos;
    int empatados;
    int golesAfavor;
    int golesEnContra;
    int puntos;
    int posicionEnElGrupo;
} Registro;

Nodo *crearNodo()
{
    Nodo *p = (Nodo *)malloc(sizeof(Nodo));
    p->siguiente = NULL;
    return p;
}

Equipo *crearEquipo(char grupo, char nombre[])
{
    Equipo *p = (Equipo *)malloc(sizeof(Equipo));
    p->grupo = grupo; 
    strcpy(p->nombre, nombre);
    p->siguiente = NULL;
    p->pPartido = NULL;
    return p;
}

Partido *crearPartido()
{
    Partido *p = (Partido *)malloc(sizeof(Partido));
    p->siguiente = NULL;
    return p;
}

Registro *crearRegistro()
{
    Registro *p = (Registro *)malloc(sizeof(Registro));
    return p;
}

Nodo *insertarInfo()
{
    Nodo *copa = NULL;
    Nodo *q = NULL;
    Nodo *r = NULL; // aux
    Equipo *paises = NULL;
    Equipo *t = NULL; // aux1
    Equipo *k = NULL; // aux2
    char nombre[25];
    char grupos[] = {'A', 'B', 'C', 'D'};
    int cont = 0, cont2 = 0;

    do
    {
        cont2 = 0;
        q = crearNodo(); 
        paises = NULL;
        do
        {
            printf("\nIngrese el equipo #%d del grupo %c: ", cont2 + 1, grupos[cont]);
            gets(nombre);
            t = crearEquipo(grupos[cont], nombre);
            // t->pPartido = insertarPartidos(t->nombre);
            if (paises == NULL)
            {
                paises = t;
                k = t;
            }
            else
            {
                k->siguiente = t;
                k = t;
            }
            cont2++;
        } while (cont2 != 4);

        q->pEquipo = paises;
        if (copa == NULL)
        {
            copa = q;
            r = q;
        }
        else
        {
            r->siguiente = q;
            r = q;
        }
        cont++;
    } while (cont != 4);

    // q = crearNodo();
    // pide la letra del grupo y el nombre del equipo.
    // crear ciclo con un contador de 4. Para los nodos puente
    // r es tipo Nodo y tomará la dirección de q. Es un auxiliar.
    /*un segundo ciclo para crear a los equipos.Con contador de 4.
     */
    // q->pEquipo = crearEquipo(grupo, nombre);
    // q->pEquipo->pPartido = insertarPartidos();

    return copa;
}

Partido *insertarPartidos(Equipo *pais1) // De Elkins
{
    Partido *partidos = NULL;
    Partido *q = NULL;
    Partido *r = NULL;
    char fecha[30], hora[8], estadio[30];
    char pais2[25];
    int cont = 0;

    do
    {
        q = crearPartido();
        printf("Partido #%d: ", cont);
        printf("Fecha del partido: ");
        gets(fecha);
        printf("Hora del partido: ");
        gets(hora);
        printf("Nombre del estadio: ");
        gets(estadio);
        printf("Pais con el que que compitio %s: ", pais1->nombre);
        gets(pais2);
        q->numPartido = cont;
        strcpy(q->fecha, fecha);
        strcpy(q->hora, hora);
        strcpy(q->estadio, estadio);
        strcpy(q->pais[0].nombre, pais1->nombre);
        strcpy(q->pais[1].nombre, pais2);
        // q->pResultado = insertarResultado(cont);

        if (partidos == NULL)
        {
            partidos = q;
            r = q;
        }
        else
        {
            r->siguiente = q;
            r = q;
        }
        cont++;
    } while (cont != 3);

    // Conectar los resultados de cada partido
    return partidos;
}

Registro *insertarResultado(int numpartido) // De Irving
{
    Registro *p = NULL;
    int ganados;
    int perdidos;
    int empatados;
    int golesAfavor;
    int golesEnContra;
    int puntos;
    int posicionEnElGrupo;

    p = crearRegistro();
    printf("Registro del partido #%d", numpartido);
    printf("1. Ganados: ");
    scanf("%d", &ganados);
    printf("2. Perdidos: ");
    scanf("%d", &perdidos);
    printf("3. Empatados: ");
    scanf("%d", &empatados);
    printf("4. Goles a Favor: ");
    scanf("%d", &golesAfavor);
    printf("5. Goles en contra: ");
    scanf("%d", &golesEnContra);
    printf("6. Puntos: ");
    scanf("%d", &puntos);
    printf("7. Posicion en el grupo: ");
    scanf("%d", &posicionEnElGrupo);

    p->ganados = ganados;
    p->perdidos = perdidos;
    p->empatados = empatados;
    p->golesAfavor = golesAfavor;
    p->golesEnContra = golesEnContra;
    p->puntos = puntos;
    p->posicionEnElGrupo = posicionEnElGrupo;
    // Continuar y devolver los resultados.

    return p;
}

/*Funcion para recorrer la fase de grupos*/
void recorre_grupo(Nodo *copa)
{
    Nodo *q = copa;
    Equipo *grupos = NULL;
    int cont = 1;
    while (q != NULL)
    {
        grupos = q->pEquipo;
        printf("\n\n");
        printf("\nGrupo %c", grupos->grupo);
        while (grupos != NULL)
        {
            printf("\n\t %s", grupos->nombre);
            grupos = grupos->siguiente;
            cont++;
        }
        cont = 1;
        q = q->siguiente;
    }
}

