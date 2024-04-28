#include<stdio.h>
#include"CopaDeOro.h" 

int main()
{
    Nodo *listas[3], *copa;
    Equipo *grupoA[4], *grupoB[4],*grupoC[4],*grupoD[4];
    Partido *partidoGA[12], *partidoGB[12], *partidoGC[12], *partidoGD[12];
    Registro *registroA[6], *registroB[6],*registroC[6],*registroD[6];

    //*****************Grupo A*************************

    grupoA[0] = crearEquipo('A', "Estados Unidos");
    grupoA[1] = crearEquipo('A', "Jamaica");
    grupoA[2] = crearEquipo('A', "Trinidad y Tobago");
    grupoA[3] = crearEquipo('A', "San Cristobal y Nieves");
    listas[0] = crearNodo();
    listas[0]->pEquipo  = grupoA[0];
    grupoA[0]->siguiente = grupoA[1];
    grupoA[1]->siguiente = grupoA[2];
    grupoA[2]->siguiente = grupoA[3];
    grupoA[3]->siguiente = NULL;
    //lista1->siguiente = lista2;

    //*****************Grupo B*************************

    grupoB[0] = crearEquipo('B', "Mexico");
    grupoB[1] = crearEquipo('B', "Qatar");
    grupoB[2] = crearEquipo('B', "Honduras");
    grupoB[3] = crearEquipo('B', "Haiti");
    listas[1] = crearNodo();
    listas[1]->pEquipo  = grupoB[0];
    grupoB[0]->siguiente = grupoB[1];
    grupoB[1]->siguiente = grupoB[2];
    grupoB[2]->siguiente = grupoB[3];
    grupoB[3]->siguiente = NULL;

    //*****************Grupo C*************************

    grupoC[0] = crearEquipo('C', "Panama");
    grupoC[1] = crearEquipo('C', "Costa Rica");
    grupoC[2] = crearEquipo('C', "Martinica");
    grupoC[3] = crearEquipo('C', "El Salvador");
    listas[2] = crearNodo();
    listas[2]->pEquipo  = grupoC[0];
    grupoC[0]->siguiente = grupoC[1];
    grupoC[1]->siguiente = grupoC[2];
    grupoC[2]->siguiente = grupoC[3];
    grupoC[3]->siguiente = NULL;

    //*****************Grupo D*************************

    grupoD[0] = crearEquipo('D', "Guatemala");
    grupoD[1] = crearEquipo('D', "Canada");
    grupoD[2] = crearEquipo('D', "Guadalupe");
    grupoD[3] = crearEquipo('D', "Cuba");
    listas[3] = crearNodo();
    listas[3]->pEquipo  = grupoD[0];
    grupoD[0]->siguiente = grupoD[1];
    grupoD[1]->siguiente = grupoD[2];
    grupoD[2]->siguiente = grupoD[3];
    grupoD[3]->siguiente = NULL;

    //****************Unir Los grupos mediante Lista******************
    copa = listas[0];
    listas[0]->siguiente = listas[1];
    listas[1]->siguiente = listas[2];
    listas[2]->siguiente = listas[3];
    listas[3]->siguiente = NULL;

    /*a vs b;
    a vs c;
    a vs d;

    b vs a;
    b vs c;
    b vs d;

    c vs a;
    c vs b;
    c vs d;

    d vs a;
    d vs b;
    d vs c;*/

    //***************Estados Unidos****************
    //*****************Partido 1*******************

    partidoGA[0] = crearPartido();
    partidoGA[0]->numPartido = 1 ;
    strcpy(partidoGA[0]->estadio, "Soldier Field");
    strcpy(partidoGA[0]->fecha, "24 de Junio");
    strcpy(partidoGA[0]->hora, "8:30 PM");
    strcpy(partidoGA[0]->pais[0].nombre, "Estados Unidos");
    strcpy(partidoGA[0]->pais[1].nombre, "Jamaica");

    //*****************Partido 2*******************

    partidoGA[1] = crearPartido();
    partidoGA[1]->numPartido = 2 ;
    strcpy(partidoGA[1]->estadio, "CITY PARK Stadium");
    strcpy(partidoGA[1]->fecha, "28 de Junio");
    strcpy(partidoGA[1]->hora, "8:30 PM");
    strcpy(partidoGA[1]->pais[0].nombre, "Estados Unidos");
    strcpy(partidoGA[1]->pais[1].nombre, "San Cristobal y Nieves");

    //*****************Partido 3*******************

    partidoGA[2] = crearPartido();
    partidoGA[2]->numPartido = 3 ;
    strcpy(partidoGA[2]->estadio, "Bank of America Stadium");
    strcpy(partidoGA[2]->fecha, "2 de Julio");
    strcpy(partidoGA[2]->hora, "6:00 PM");
    strcpy(partidoGA[2]->pais[0].nombre, "Estados Unidos");
    strcpy(partidoGA[2]->pais[1].nombre, "Trinidad y Tobago");

    //***************Jamaica****************
    //*****************Partido 4*******************

    partidoGA[3] = crearPartido();
    partidoGA[3]->numPartido = 4 ;
    strcpy(partidoGA[3]->estadio, "Soldier Field");
    strcpy(partidoGA[3]->fecha, "24 de Junio");
    strcpy(partidoGA[3]->hora, "8:30 PM");
    strcpy(partidoGA[3]->pais[0].nombre, "Jamaica");
    strcpy(partidoGA[3]->pais[1].nombre, "Estados Unidos");

    //*****************Partido 5*******************

    partidoGA[4] = crearPartido();
    partidoGA[4]->numPartido = 5 ;
    strcpy(partidoGA[4]->estadio, "CITY PARK Stadium");
    strcpy(partidoGA[4]->fecha, "28 de Junio");
    strcpy(partidoGA[4]->hora, "6:30 PM");
    strcpy(partidoGA[4]->pais[0].nombre, "Jamaica");
    strcpy(partidoGA[4]->pais[1].nombre, "Trinidad y Tobago");

    //*****************Partido 6*******************

    partidoGA[5] = crearPartido();
    partidoGA[5]->numPartido = 6 ;
    strcpy(partidoGA[5]->estadio, "Levi's Stadium");
    strcpy(partidoGA[5]->fecha, "2 de Julio");
    strcpy(partidoGA[5]->hora, "6:00 PM");
    strcpy(partidoGA[5]->pais[0].nombre, "Jamaica");
    strcpy(partidoGA[5]->pais[1].nombre, "San Cristobal y Nieves");

    //**************Trinidad y Tobago**************
    //*****************Partido 7*******************

    partidoGA[6] = crearPartido();
    partidoGA[6]->numPartido = 7 ;
    strcpy(partidoGA[6]->estadio, "DVR PNK");
    strcpy(partidoGA[6]->fecha, "25 de Junio");
    strcpy(partidoGA[6]->hora, "6:30 PM");
    strcpy(partidoGA[6]->pais[0].nombre, "Trinidad y Tobago");
    strcpy(partidoGA[6]->pais[1].nombre, "San Cristobal y Nieves");

    //*****************Partido 8*******************

    partidoGA[7] = crearPartido();
    partidoGA[7]->numPartido = 8 ;
    strcpy(partidoGA[7]->estadio, "CITY PARK Stadium");
    strcpy(partidoGA[7]->fecha, "28 de Junio");
    strcpy(partidoGA[7]->hora, "6:30 PM");
    strcpy(partidoGA[7]->pais[0].nombre, "Trinidad y Tobago");
    strcpy(partidoGA[7]->pais[1].nombre, "Jamaica");

    //*****************Partido 9*******************

    partidoGA[8] = crearPartido();
    partidoGA[8]->numPartido = 9 ;
    strcpy(partidoGA[8]->estadio, "Bank of America Stadium");
    strcpy(partidoGA[8]->fecha, "2 de Julio");
    strcpy(partidoGA[8]->hora, "6:00 PM");
    strcpy(partidoGA[8]->pais[0].nombre, "Trinidad y Tobago");
    strcpy(partidoGA[8]->pais[1].nombre, "Estados Unidos");

    //************San Cristobal y Nieves***********
    //*****************Partido 10******************

    partidoGA[9] = crearPartido();
    partidoGA[9]->numPartido = 10 ;
    strcpy(partidoGA[9]->estadio, "Soldier Field");
    strcpy(partidoGA[9]->fecha, "25 de Junio");
    strcpy(partidoGA[9]->hora, "6:30 PM");
    strcpy(partidoGA[9]->pais[0].nombre, "San Cristobal y Nieves");
    strcpy(partidoGA[9]->pais[1].nombre, "Trinidad y Tobago");

    //*****************Partido 11******************

    partidoGA[10] = crearPartido();
    partidoGA[10]->numPartido = 11 ;
    strcpy(partidoGA[10]->estadio, "Soldier Field");
    strcpy(partidoGA[10]->fecha, "28 de Junio");
    strcpy(partidoGA[10]->hora, "8:30 PM");
    strcpy(partidoGA[10]->pais[0].nombre, "San Cristobal y Nieves");
    strcpy(partidoGA[10]->pais[1].nombre, "Estados Unidos");

    //*****************Partido 12******************

    partidoGA[11] = crearPartido();
    partidoGA[11]->numPartido = 12 ;
    strcpy(partidoGA[11]->estadio, "Soldier Field");
    strcpy(partidoGA[11]->fecha, "2 de Julio");
    strcpy(partidoGA[11]->hora, "6:00 PM");
    strcpy(partidoGA[11]->pais[0].nombre, "San Cristobal y Nieves");
    strcpy(partidoGA[11]->pais[1].nombre, "Jamaica");
    
    partidoGA[0]->siguiente = partidoGA[1];
    partidoGA[1]->siguiente = partidoGA[2];
    partidoGA[2]->siguiente = NULL;
    partidoGA[3]->siguiente = partidoGA[4];
    partidoGA[4]->siguiente = partidoGA[5];
    partidoGA[5]->siguiente = NULL;
    partidoGA[6]->siguiente = partidoGA[7];
    partidoGA[7]->siguiente = partidoGA[8];
    partidoGA[8]->siguiente = NULL;
    partidoGA[9]->siguiente = partidoGA[10];
    partidoGA[10]->siguiente = partidoGA[11];
    partidoGA[11]->siguiente = NULL;
    //LISTA DE EQUIPOS ENLAZADO
    grupoA[0]->pPartido = partidoGA[0];
    grupoA[1]->pPartido = partidoGA[3];
    grupoA[2]->pPartido = partidoGA[6];
    grupoA[3]->pPartido = partidoGA[9];
    //*****************Impresion******************

    //REGISTRO DE EQUIPOS POR GRUPO A
    //REGISTRO DE EQUIPO POR GRUPO A de Estados Unidos

    grupoA[0]->record = crearRegistro();
    grupoA[0]->record->ganados = 2;
    grupoA[0]->record->empatados = 1;
    grupoA[0]->record->perdidos = 0;
    grupoA[0]->record->golesAfavor = 13;
    grupoA[0]->record->golesEnContra = 1;
    grupoA[0]->record->diferenciaGoles = 12;
    grupoA[0]->record->posicionEnElGrupo = 1;
    grupoA[0]->record->puntos = 7;
    
    //REGISTRO DE EQUIPO POR GRUPO A de Jamaica

    grupoA[1]->record = crearRegistro();
    grupoA[1]->record->ganados = 2;
    grupoA[1]->record->empatados = 1;
    grupoA[1]->record->perdidos = 0;
    grupoA[1]->record->golesAfavor = 10;
    grupoA[1]->record->golesEnContra = 2;
    grupoA[1]->record->diferenciaGoles = 8;
    grupoA[1]->record->posicionEnElGrupo = 2;
    grupoA[1]->record->puntos = 7;

    //REGISTRO DE EQUIPO POR GRUPO A de Trinidad y Tobago

    grupoA[2]->record = crearRegistro();
    grupoA[2]->record->ganados = 1;
    grupoA[2]->record->empatados = 0;
    grupoA[2]->record->perdidos = 2;
    grupoA[2]->record->golesAfavor = 4;
    grupoA[2]->record->golesEnContra = 10;
    grupoA[2]->record->diferenciaGoles = -6;
    grupoA[2]->record->posicionEnElGrupo = 3;
    grupoA[2]->record->puntos = 3;

    //REGISTRO DE EQUIPO POR GRUPO A de San Cristobal y Nieves

    grupoA[3]->record = crearRegistro();
    grupoA[3]->record->ganados = 0;
    grupoA[3]->record->empatados = 0;
    grupoA[3]->record->perdidos = 3;
    grupoA[3]->record->golesAfavor = 0;
    grupoA[3]->record->golesEnContra = 14;
    grupoA[3]->record->diferenciaGoles = -14;
    grupoA[3]->record->posicionEnElGrupo = 4;
    grupoA[3]->record->puntos = 0;
    

    //REGISTRO DE EQUIPOS POR GRUPO B

    //Registro del equipo de Mexico
    partidoGB[0] = crearPartido();
    partidoGB[0]->numPartido = 13 ;
    strcpy(partidoGB[0]->estadio, "NRG Stadium");
    strcpy(partidoGB[0]->fecha, "25 de Junio");
    strcpy(partidoGB[0]->hora, "6:00 PM");
    strcpy(partidoGB[0]->pais[0].nombre, "Mexico");
    strcpy(partidoGB[0]->pais[1].nombre, "Honduras");

    partidoGB[1] = crearPartido();
    partidoGB[1]->numPartido = 14 ;
    strcpy(partidoGB[1]->estadio, "State Farm Stadium");
    strcpy(partidoGB[1]->fecha, "29 de Junio");
    strcpy(partidoGB[1]->hora, "6:00 PM");
    strcpy(partidoGB[1]->pais[0].nombre, "Mexico");
    strcpy(partidoGB[1]->pais[1].nombre, "Haiti");

    partidoGB[2] = crearPartido();
    partidoGB[2]->numPartido = 15 ;
    strcpy(partidoGB[2]->estadio, "Levi's Stadium");
    strcpy(partidoGB[2]->fecha, "2 de Julio");
    strcpy(partidoGB[2]->hora, "6:00 PM");
    strcpy(partidoGB[2]->pais[0].nombre, "Mexico");
    strcpy(partidoGB[2]->pais[1].nombre, "Qatar");

    //Registro del equipop de Qatar

    partidoGB[3] = crearPartido();
    partidoGB[3]->numPartido = 16 ;
    strcpy(partidoGB[3]->estadio, "Levi's Stadium");
    strcpy(partidoGB[3]->fecha, "25 de Junio");
    strcpy(partidoGB[3]->hora, "6:00 PM");
    strcpy(partidoGB[3]->pais[0].nombre, "Qatar");
    strcpy(partidoGB[3]->pais[1].nombre, "Haiti");

    partidoGB[4] = crearPartido();
    partidoGB[4]->numPartido = 17 ;
    strcpy(partidoGB[4]->estadio, "Levi's Stadium");
    strcpy(partidoGB[4]->fecha, "29 de Junio");
    strcpy(partidoGB[4]->hora, "6:00 PM");
    strcpy(partidoGB[4]->pais[0].nombre, "Qatar");
    strcpy(partidoGB[4]->pais[1].nombre, "Honduras");

    partidoGB[5] = crearPartido();
    partidoGB[5]->numPartido = 18 ;
    strcpy(partidoGB[5]->estadio, "Levi's Stadium");
    strcpy(partidoGB[5]->fecha, "2 de Julio");
    strcpy(partidoGB[5]->hora, "6:00 PM");
    strcpy(partidoGB[5]->pais[0].nombre, "Qatar");
    strcpy(partidoGB[5]->pais[1].nombre, "Mexico");

    //Registro del equipop de Honduras

    partidoGB[6] = crearPartido();
    partidoGB[6]->numPartido = 19 ;
    strcpy(partidoGB[6]->estadio, "Levi's Stadium");
    strcpy(partidoGB[6]->fecha, "25 de Junio");
    strcpy(partidoGB[6]->hora, "6:00 PM");
    strcpy(partidoGB[6]->pais[0].nombre, "Honduras");
    strcpy(partidoGB[6]->pais[1].nombre, "Mexico");

    partidoGB[7] = crearPartido();
    partidoGB[7]->numPartido = 20 ;
    strcpy(partidoGB[7]->estadio, "Levi's Stadium");
    strcpy(partidoGB[7]->fecha, "29 de Junio");
    strcpy(partidoGB[7]->hora, "6:00 PM");
    strcpy(partidoGB[7]->pais[0].nombre, "Honduras");
    strcpy(partidoGB[7]->pais[1].nombre, "Qatar");

    partidoGB[8] = crearPartido();
    partidoGB[8]->numPartido = 21 ;
    strcpy(partidoGB[8]->estadio, "Levi's Stadium");
    strcpy(partidoGB[8]->fecha, "2 de Julio");
    strcpy(partidoGB[8]->hora, "6:00 PM");
    strcpy(partidoGB[8]->pais[0].nombre, "Honduras");
    strcpy(partidoGB[8]->pais[1].nombre, "Haiti");

    //Registro del equipop de Haiti

    partidoGB[9] = crearPartido();
    partidoGB[9]->numPartido = 22 ;
    strcpy(partidoGB[9]->estadio, "Levi's Stadium");
    strcpy(partidoGB[9]->fecha, "25 de Junio");
    strcpy(partidoGB[9]->hora, "6:00 PM");
    strcpy(partidoGB[9]->pais[0].nombre, "Haiti");
    strcpy(partidoGB[9]->pais[1].nombre, "Qatar");

    partidoGB[10] = crearPartido();
    partidoGB[10]->numPartido = 23 ;
    strcpy(partidoGB[10]->estadio, "Levi's Stadium");
    strcpy(partidoGB[10]->fecha, "29 de Junio");
    strcpy(partidoGB[10]->hora, "6:00 PM");
    strcpy(partidoGB[10]->pais[0].nombre, "Haiti");
    strcpy(partidoGB[10]->pais[1].nombre, "Mexico");

    partidoGB[11] = crearPartido();
    partidoGB[11]->numPartido = 24 ;
    strcpy(partidoGB[11]->estadio, "Levi's Stadium");
    strcpy(partidoGB[11]->fecha, "2 de Julio");
    strcpy(partidoGB[11]->hora, "6:00 PM");
    strcpy(partidoGB[11]->pais[0].nombre, "Haiti");
    strcpy(partidoGB[11]->pais[1].nombre, "Honduras");


    //REGISTRO DE EQUIPO POR GRUPO B de Mexico

    grupoB[0]->record = crearRegistro();
    grupoB[0]->record->ganados = 2;
    grupoB[0]->record->empatados = 0;
    grupoB[0]->record->perdidos = 1;
    grupoB[0]->record->golesAfavor = 7;
    grupoB[0]->record->golesEnContra = 2;
    grupoB[0]->record->diferenciaGoles = 5;
    grupoB[0]->record->posicionEnElGrupo = 1;
    grupoB[0]->record->puntos = 6;
    
    //REGISTRO DE EQUIPO POR GRUPO B de Qatar

    grupoB[1]->record = crearRegistro();
    grupoB[1]->record->ganados = 1;
    grupoB[1]->record->empatados = 1;
    grupoB[1]->record->perdidos = 1;
    grupoB[1]->record->golesAfavor = 3;
    grupoB[1]->record->golesEnContra = 3;
    grupoB[1]->record->diferenciaGoles = 0;
    grupoB[1]->record->posicionEnElGrupo = 2;
    grupoB[1]->record->puntos = 4;

    //REGISTRO DE EQUIPO POR GRUPO B de Honduras

    grupoB[2]->record = crearRegistro();
    grupoB[2]->record->ganados = 1;
    grupoB[2]->record->empatados = 1;
    grupoB[2]->record->perdidos = 1;
    grupoB[2]->record->golesAfavor = 3;
    grupoB[2]->record->golesEnContra = 6;
    grupoB[2]->record->diferenciaGoles = -3;
    grupoB[2]->record->posicionEnElGrupo = 3;
    grupoB[2]->record->puntos = 4;

    //REGISTRO DE EQUIPO POR GRUPO B de Haiti

    grupoB[3]->record = crearRegistro();
    grupoB[3]->record->ganados = 1;
    grupoB[3]->record->empatados = 0;
    grupoB[3]->record->perdidos = 2;
    grupoB[3]->record->golesAfavor = 4;
    grupoB[3]->record->golesEnContra = 6;
    grupoB[3]->record->diferenciaGoles = -2;
    grupoB[3]->record->posicionEnElGrupo = 4;
    grupoB[3]->record->puntos = 3;

    partidoGB[0]->siguiente = partidoGB[1];
    partidoGB[1]->siguiente = partidoGB[2];
    partidoGB[2]->siguiente = NULL;
    partidoGB[3]->siguiente = partidoGB[4];
    partidoGB[4]->siguiente = partidoGB[5];
    partidoGB[5]->siguiente = NULL;
    partidoGB[6]->siguiente = partidoGB[7];
    partidoGB[7]->siguiente = partidoGB[8];
    partidoGB[8]->siguiente = NULL;
    partidoGB[9]->siguiente = partidoGB[10];
    partidoGB[10]->siguiente = partidoGB[11];
    partidoGB[11]->siguiente = NULL;
    //LISTA DE EQUIPOS ENLAZADO
    grupoB[0]->pPartido = partidoGB[0];
    grupoB[1]->pPartido = partidoGB[3];
    grupoB[2]->pPartido = partidoGB[6];
    grupoB[3]->pPartido = partidoGB[9];


    //REGISTROS DEL GRUPO C

    //Registro del equipo de Panama
    partidoGC[0] = crearPartido();
    partidoGC[0]->numPartido = 25 ;
    strcpy(partidoGC[0]->estadio, "DVR PNK");
    strcpy(partidoGC[0]->fecha, "26 de Junio");
    strcpy(partidoGC[0]->hora, "6:00 PM");
    strcpy(partidoGC[0]->pais[0].nombre, "Panama");
    strcpy(partidoGC[0]->pais[1].nombre, "Costa Rica");

    partidoGC[1] = crearPartido();
    partidoGC[1]->numPartido = 26 ;
    strcpy(partidoGC[1]->estadio, "Red Bull  Arena");
    strcpy(partidoGC[1]->fecha, "30 de Junio");
    strcpy(partidoGC[1]->hora, "6:00 PM");
    strcpy(partidoGC[1]->pais[0].nombre, "Panama");
    strcpy(partidoGC[1]->pais[1].nombre, "Martinica");

    partidoGC[2] = crearPartido();
    partidoGC[2]->numPartido = 27 ;
    strcpy(partidoGC[2]->estadio, "Shell Energy Stadium");
    strcpy(partidoGC[2]->fecha, "4 de Julio");
    strcpy(partidoGC[2]->hora, "6:00 PM");
    strcpy(partidoGC[2]->pais[0].nombre, "Panama");
    strcpy(partidoGC[2]->pais[1].nombre, "El Salvador");

	    //Registro del equipop de Costa Rica

    partidoGC[3] = crearPartido();
    partidoGC[3]->numPartido = 28 ;
    strcpy(partidoGC[3]->estadio, "DVR PNK");
    strcpy(partidoGC[3]->fecha, "26 de Junio");
    strcpy(partidoGC[3]->hora, "6:00 PM");
    strcpy(partidoGC[3]->pais[0].nombre, "Costa Rica");
    strcpy(partidoGC[3]->pais[1].nombre, "Panama");

    partidoGC[4] = crearPartido();
    partidoGC[4]->numPartido = 29 ;
    strcpy(partidoGC[4]->estadio, "Red Bull  Arena");
    strcpy(partidoGC[4]->fecha, "30 de Junio");
    strcpy(partidoGC[4]->hora, "6:00 PM");
    strcpy(partidoGC[4]->pais[0].nombre, "Costa Rica");
    strcpy(partidoGC[4]->pais[1].nombre, "El Salvador");

    partidoGC[5] = crearPartido();
    partidoGC[5]->numPartido = 30 ;
    strcpy(partidoGC[5]->estadio, "Red Bull  Arena");
    strcpy(partidoGC[5]->fecha, "4 de Julio");
    strcpy(partidoGC[5]->hora, "6:00 PM");
    strcpy(partidoGC[5]->pais[0].nombre, "Costa Rica");
    strcpy(partidoGC[5]->pais[1].nombre, "Martinica");

       //Registro del equipop de Martinica

    partidoGC[6] = crearPartido();
    partidoGC[6]->numPartido = 31 ;
    strcpy(partidoGC[6]->estadio, "DVR PNK");
    strcpy(partidoGC[6]->fecha, "26 de Junio");
    strcpy(partidoGC[6]->hora, "6:00 PM");
    strcpy(partidoGC[6]->pais[0].nombre, "Martinica");
    strcpy(partidoGC[6]->pais[1].nombre, "El Salvador");

    partidoGC[7] = crearPartido();
    partidoGC[7]->numPartido = 32 ;
    strcpy(partidoGC[7]->estadio, "Red Bull  Arena");
    strcpy(partidoGC[7]->fecha, "30 de Junio");
    strcpy(partidoGC[7]->hora, "6:00 PM");
    strcpy(partidoGC[7]->pais[0].nombre, "Martinica");
    strcpy(partidoGC[7]->pais[1].nombre, "Panama");

    partidoGC[8] = crearPartido();
    partidoGC[8]->numPartido = 33 ;
    strcpy(partidoGC[8]->estadio, "Red Bull  Arena");
    strcpy(partidoGC[8]->fecha, "4 de Julio");
    strcpy(partidoGC[8]->hora, "6:00 PM");
    strcpy(partidoGC[8]->pais[0].nombre, "Martinica");
    strcpy(partidoGC[8]->pais[1].nombre, "Costa Rica");

    //Registro del equipop de El Salvador

    partidoGC[9] = crearPartido();
    partidoGC[9]->numPartido = 34 ;
    strcpy(partidoGC[9]->estadio, "DVR PNK");
    strcpy(partidoGC[9]->fecha, "26 de Junio");
    strcpy(partidoGC[9]->hora, "6:00 PM");
    strcpy(partidoGC[9]->pais[0].nombre, "El Salvador");
    strcpy(partidoGC[9]->pais[1].nombre, "Martinica");

    partidoGC[10] = crearPartido();
    partidoGC[10]->numPartido = 35 ;
    strcpy(partidoGC[10]->estadio, "Red Bull  Arena");
    strcpy(partidoGC[10]->fecha, "30 de Junio");
    strcpy(partidoGC[10]->hora, "6:00 PM");
    strcpy(partidoGC[10]->pais[0].nombre, "El Salvador");
    strcpy(partidoGC[10]->pais[1].nombre, "Costa Rica");

    partidoGC[11] = crearPartido();
    partidoGC[11]->numPartido = 36 ;
    strcpy(partidoGC[11]->estadio, "Shell Energy Stadium");
    strcpy(partidoGC[11]->fecha, "4 de Julio");
    strcpy(partidoGC[11]->hora, "6:00 PM");
    strcpy(partidoGC[11]->pais[0].nombre, "El Salvador");
    strcpy(partidoGC[11]->pais[1].nombre, "Panama");

 


    //REGISTRO DE EQUIPO POR GRUPO C de Panama

    grupoC[0]->record = crearRegistro();
    grupoC[0]->record->ganados = 2;
    grupoC[0]->record->empatados = 1;
    grupoC[0]->record->perdidos = 0;
    grupoC[0]->record->golesAfavor = 6;
    grupoC[0]->record->golesEnContra = 4;
    grupoC[0]->record->diferenciaGoles = 2;
    grupoC[0]->record->posicionEnElGrupo = 1;
    grupoC[0]->record->puntos = 7;
    
    //REGISTRO DE EQUIPO POR GRUPO C de  Costa Rica

    grupoC[1]->record = crearRegistro();
    grupoC[1]->record->ganados = 1;
    grupoC[1]->record->empatados = 1;
    grupoC[1]->record->perdidos = 1;
    grupoC[1]->record->golesAfavor = 7;
    grupoC[1]->record->golesEnContra = 6;
    grupoC[1]->record->diferenciaGoles = 1;
    grupoC[1]->record->posicionEnElGrupo = 2;
    grupoC[1]->record->puntos = 4;


	//REGISTRO DE EQUIPO POR GRUPO C de Martinica

    grupoC[2]->record = crearRegistro();
    grupoC[2]->record->ganados = 1;
    grupoC[2]->record->empatados = 0;
    grupoC[2]->record->perdidos = 2;
    grupoC[2]->record->golesAfavor = 7;
    grupoC[2]->record->golesEnContra = 9;
    grupoC[2]->record->diferenciaGoles = -2;
    grupoC[2]->record->posicionEnElGrupo = 3;
    grupoC[2]->record->puntos = 3;

    //REGISTRO DE EQUIPO POR GRUPO C de El Salvador

    grupoC[3]->record = crearRegistro();
    grupoC[3]->record->ganados = 0;
    grupoC[3]->record->empatados = 2;
    grupoC[3]->record->perdidos = 1;
    grupoC[3]->record->golesAfavor = 3;
    grupoC[3]->record->golesEnContra = 4;
    grupoC[3]->record->diferenciaGoles = -1;
    grupoC[3]->record->posicionEnElGrupo = 4;
    grupoC[3]->record->puntos = 2;

    partidoGC[0]->siguiente = partidoGC[1];
    partidoGC[1]->siguiente = partidoGC[2];
    partidoGC[2]->siguiente = NULL;
    partidoGC[3]->siguiente = partidoGC[4];
    partidoGC[4]->siguiente = partidoGC[5];
    partidoGC[5]->siguiente = NULL;
    partidoGC[6]->siguiente = partidoGC[7];
    partidoGC[7]->siguiente = partidoGC[8];
    partidoGC[8]->siguiente = NULL;
    partidoGC[9]->siguiente = partidoGC[10];
    partidoGC[10]->siguiente = partidoGC[11];
    partidoGC[11]->siguiente = NULL;
    //LISTA DE EQUIPOS ENLAZADO
    grupoC[0]->pPartido = partidoGC[0];
    grupoC[1]->pPartido = partidoGC[3];
    grupoC[2]->pPartido = partidoGC[6];
    grupoC[3]->pPartido = partidoGC[9];


    //REGISTROS DEL GRUPO D

    //Registro del equipo de Guatemala
    partidoGD[0] = crearPartido();
    partidoGD[0]->numPartido = 37 ;
    strcpy(partidoGD[0]->estadio, "DVR PNK");
    strcpy(partidoGD[0]->fecha, "27 de Junio");
    strcpy(partidoGD[0]->hora, "6:00 PM");
    strcpy(partidoGD[0]->pais[0].nombre, "Guatemala");
    strcpy(partidoGD[0]->pais[1].nombre, "Cuba");

    partidoGD[1] = crearPartido();
    partidoGD[1]->numPartido = 38 ;
    strcpy(partidoGD[1]->estadio, "Red Bull  Arena");
    strcpy(partidoGD[1]->fecha, "1 de Julio");
    strcpy(partidoGD[1]->hora, "6:00 PM");
    strcpy(partidoGD[1]->pais[0].nombre, "Guatemala");
    strcpy(partidoGD[1]->pais[1].nombre, "Canada");

    partidoGD[2] = crearPartido();
    partidoGD[2]->numPartido = 39 ;
    strcpy(partidoGD[2]->estadio, "Shell Energy Stadium");
    strcpy(partidoGD[2]->fecha, "4 de Julio");
    strcpy(partidoGD[2]->hora, "6:00 PM");
    strcpy(partidoGD[2]->pais[0].nombre, "Guatemala");
    strcpy(partidoGD[2]->pais[1].nombre, "Guadalupe");


       //Registro del equipop de Canada

    partidoGD[3] = crearPartido();
    partidoGD[3]->numPartido = 40 ;
    strcpy(partidoGD[3]->estadio, "DVR PNK");
    strcpy(partidoGD[3]->fecha, "27 de Junio");
    strcpy(partidoGD[3]->hora, "6:00 PM");
    strcpy(partidoGD[3]->pais[0].nombre, "Canada");
    strcpy(partidoGD[3]->pais[1].nombre, "Guadalupe");

    partidoGD[4] = crearPartido();
    partidoGD[4]->numPartido = 41 ;
    strcpy(partidoGD[4]->estadio, "Red Bull  Arena");
    strcpy(partidoGD[4]->fecha, "1 de Julio");
    strcpy(partidoGD[4]->hora, "6:00 PM");
    strcpy(partidoGD[4]->pais[0].nombre, "Canada");
    strcpy(partidoGD[4]->pais[1].nombre, "Guatemala");

    partidoGD[5] = crearPartido();
    partidoGD[5]->numPartido = 42 ;
    strcpy(partidoGD[5]->estadio, "Red Bull  Arena");
    strcpy(partidoGD[5]->fecha, "4 de Julio");
    strcpy(partidoGD[5]->hora, "6:00 PM");
    strcpy(partidoGD[5]->pais[0].nombre, "Canada");
    strcpy(partidoGD[5]->pais[1].nombre, "Cuba");

    //Registro del equipop de Guadalupe

    partidoGD[6] = crearPartido();
    partidoGD[6]->numPartido = 43 ;
    strcpy(partidoGD[6]->estadio, "DVR PNK");
    strcpy(partidoGD[6]->fecha, "27 de Junio");
    strcpy(partidoGD[6]->hora, "6:00 PM");
    strcpy(partidoGD[6]->pais[0].nombre, "Guadalupe");
    strcpy(partidoGD[6]->pais[1].nombre, "Canada");

    partidoGD[7] = crearPartido();
    partidoGD[7]->numPartido = 44 ;
    strcpy(partidoGD[7]->estadio, "Red Bull  Arena");
    strcpy(partidoGD[7]->fecha, "1 de Julio");
    strcpy(partidoGD[7]->hora, "6:00 PM");
    strcpy(partidoGD[7]->pais[0].nombre, "Guadalupe");
    strcpy(partidoGD[7]->pais[1].nombre, "Cuba");

    partidoGD[8] = crearPartido();
    partidoGD[8]->numPartido = 45 ;
    strcpy(partidoGD[8]->estadio, "Shell Energy Stadium");
    strcpy(partidoGD[8]->fecha, "4 de Julio");
    strcpy(partidoGD[8]->hora, "6:00 PM");
    strcpy(partidoGD[8]->pais[0].nombre, "Guadalupe");
    strcpy(partidoGD[8]->pais[1].nombre, "Guatemala");

 
	//Registro del equipop de Cuba

    partidoGD[9] = crearPartido();
    partidoGD[9]->numPartido = 46 ;
    strcpy(partidoGD[9]->estadio, "DVR PNK");
    strcpy(partidoGD[9]->fecha, "27 de Junio");
    strcpy(partidoGD[9]->hora, "6:00 PM");
    strcpy(partidoGD[9]->pais[0].nombre, "Cuba");
    strcpy(partidoGD[9]->pais[1].nombre, "Guatemala");

    partidoGD[10] = crearPartido();
    partidoGD[10]->numPartido = 47 ;
    strcpy(partidoGD[10]->estadio, "Red Bull  Arena");
    strcpy(partidoGD[10]->fecha, "1 de Julio");
    strcpy(partidoGD[10]->hora, "6:00 PM");
    strcpy(partidoGD[10]->pais[0].nombre, "Cuba");
    strcpy(partidoGD[10]->pais[1].nombre, "Guadalupe");

    partidoGD[11] = crearPartido();
    partidoGD[11]->numPartido = 48 ;
    strcpy(partidoGD[11]->estadio, "Red Bull  Arena");
    strcpy(partidoGD[11]->fecha, "4 de Julio");
    strcpy(partidoGD[11]->hora, "6:00 PM");
    strcpy(partidoGD[11]->pais[0].nombre, "Cuba");
    strcpy(partidoGD[11]->pais[1].nombre, "Canada");

    //REGISTRO DE EQUIPO POR GRUPO D de Guatemala

    grupoD[0]->record = crearRegistro();
    grupoD[0]->record->ganados = 2;
    grupoD[0]->record->empatados = 1;
    grupoD[0]->record->perdidos = 0;
    grupoD[0]->record->golesAfavor = 4;
    grupoD[0]->record->golesEnContra = 5;
    grupoD[0]->record->diferenciaGoles = 2;
    grupoD[0]->record->posicionEnElGrupo = 1;
    grupoD[0]->record->puntos = 7;
    

	//REGISTRO DE EQUIPO POR GRUPO D de Canada

    grupoD[1]->record = crearRegistro();
    grupoD[1]->record->ganados = 1;
    grupoD[1]->record->empatados = 2;
    grupoD[1]->record->perdidos = 0;
    grupoD[1]->record->golesAfavor = 6;
    grupoD[1]->record->golesEnContra = 4;
    grupoD[1]->record->diferenciaGoles = 2;
    grupoD[1]->record->posicionEnElGrupo = 2;
    grupoD[1]->record->puntos = 5;

    //REGISTRO DE EQUIPO POR GRUPO D de Guadalupe

    grupoD[2]->record = crearRegistro();
    grupoD[2]->record->ganados = 1;
    grupoD[2]->record->empatados = 1;
    grupoD[2]->record->perdidos = 1;
    grupoD[2]->record->golesAfavor = 8;
    grupoD[2]->record->golesEnContra = 6;
    grupoD[2]->record->diferenciaGoles = 2;
    grupoD[2]->record->posicionEnElGrupo = 4;
    grupoD[2]->record->puntos = 3;

	//REGISTRO DE EQUIPO POR GRUPO D de  Cuba

    grupoD[3]->record = crearRegistro();
    grupoD[3]->record->ganados = 0;
    grupoD[3]->record->empatados = 0;
    grupoD[3]->record->perdidos = 3;
    grupoD[3]->record->golesAfavor = 3;
    grupoD[3]->record->golesEnContra = 9;
    grupoD[3]->record->diferenciaGoles = -6;
    grupoD[3]->record->posicionEnElGrupo = 4;
    grupoD[3]->record->puntos = 0;

    partidoGD[0]->siguiente = partidoGD[1];
    partidoGD[1]->siguiente = partidoGD[2];
    partidoGD[2]->siguiente = NULL;
    partidoGD[3]->siguiente = partidoGD[4];
    partidoGD[4]->siguiente = partidoGD[5];
    partidoGD[5]->siguiente = NULL;
    partidoGD[6]->siguiente = partidoGD[7];
    partidoGD[7]->siguiente = partidoGD[8];
    partidoGD[8]->siguiente = NULL;
    partidoGD[9]->siguiente = partidoGD[10];
    partidoGD[10]->siguiente = partidoGD[11];
    partidoGD[11]->siguiente = NULL;
    //LISTA DE EQUIPOS ENLAZADO
    grupoD[0]->pPartido = partidoGD[0];
    grupoD[1]->pPartido = partidoGD[3];
    grupoD[2]->pPartido = partidoGD[6];
    grupoD[3]->pPartido = partidoGD[9];

    //recorre_grupo(copa);
    //printf("\n\n\n");
    //mostrarResultados(copa);
    //printf("\n\n\n");
    mostrarPartidos(partidoGA[0]);
    mostrarPartidos(partidoGA[3]);
    mostrarPartidos(partidoGA[6]);
    mostrarPartidos(partidoGA[9]);

    mostrarPartidos(partidoGB[0]);
    mostrarPartidos(partidoGB[3]);
    mostrarPartidos(partidoGB[6]);
    mostrarPartidos(partidoGB[9]);

    mostrarPartidos(partidoGC[0]);
    mostrarPartidos(partidoGC[3]);
    mostrarPartidos(partidoGC[6]);
    mostrarPartidos(partidoGC[9]);

    mostrarPartidos(partidoG[0]);
    mostrarPartidos(partidoGA[3]);
    mostrarPartidos(partidoGA[6]);
    mostrarPartidos(partidoGA[9]);
}