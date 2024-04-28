#include<stdio.h>


 main( )
{
    struct Notas {
        char Nombre[20];
        int Nota1;
        int Nota2;
        int Nota3;
        int Nota_Final;
    } Notas_P;

    printf("Introduzca el nombre del estudiante");
    scanf("%s", Notas_P.Nombre);
    printf("Ingrese la nota del Parcial 1");
    scanf("%d", &Notas_P.Nota1);
    printf("Ingrese la nota del Parcial 2");
    scanf("%d", &Notas_P.Nota2);
    printf("Ingrese la nota del Parcial 3");
    scanf("%d", &Notas_P.Nota3);
    Notas_P.Nota_Final = (Notas_P.Nota1 + Notas_P.Nota2 + Notas_P.Nota3)/3;
    printf("El estudiante %s tiene un Promedio Final de %d", Notas_P.Nombre, Notas_P.Nota_Final);
}
