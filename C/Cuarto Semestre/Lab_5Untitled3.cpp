#include <stdio.h>
int main(){
char op = '\0';
printf("\tMen�\n\n");
printf("Elegir la opci�n deseada\n");
printf("a) Ingresar\n");
printf("b) Registrarse\n");
printf("c) Salir\n");
scanf("%c",&op);
switch(op) {
default:
printf("Opci�n no v�lida.\n");
break;
case 'a':
printf("Se seleccion� 'Ingresar'.\n");
break;
case 'b':
printf("Se seleccion� 'Registrarse'.\n");
break;
case 'c':
printf("Se seleccion� 'Salir'.\n");
break;
}
}
