#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// Definición de la estructura de un nodo de la lista enlazada
typedef struct Nodo {
    char dato;
    struct Nodo* siguiente;
} Nodo;

// Función para insertar un nuevo nodo al final de la lista enlazada
void insertarNodo(Nodo* cabeza, char dato) {
    Nodo* nuevoNodo = (Nodo*)malloc(sizeof(Nodo));
    nuevoNodo->dato = dato;
    nuevoNodo->siguiente = NULL;

    if (cabeza == NULL) {
        cabeza = nuevoNodo;
    } else {
        Nodo* temp = cabeza;
        while (temp->siguiente != NULL) {
            temp = temp->siguiente;
        }
        temp->siguiente = nuevoNodo;
    }
}

// Función para verificar si una lista enlazada es un palíndromo
bool esPalindromo(Nodo* cabeza) {
    Nodo* actual = cabeza;
    int longitud = 0;
    char caracteres[100];

    // Almacenar los caracteres de la lista enlazada en un arreglo
    while (actual != NULL) {
        caracteres[longitud] = actual->dato;
        longitud++;
        actual = actual->siguiente;
    }

    // Verificar si el arreglo es un palíndromo
    int inicio = 0;
    int fin = longitud - 1;
    while (inicio < fin) {
        if (caracteres[inicio] != caracteres[fin]) {
            return false;
        }
        inicio++;
        fin--;
    }

    return true;
}

// Función para liberar la memoria utilizada por la lista enlazada
void liberarLista(Nodo* cabeza) {
    Nodo* actual = cabeza;
    while (actual != NULL) {
        Nodo* siguiente = actual->siguiente;
        free(actual);
        actual = siguiente;
    }
    cabeza = NULL;
}

int main() {
    Nodo* cabeza = NULL;
    char palabra[100];

    printf("Ingrese una palabra o frase: ");
    fgets(palabra, sizeof(palabra), stdin);

    // Eliminar el salto de línea generado por fgets
    palabra[strcspn(palabra, "\n")] = '\0';

    // Insertar cada carácter en la lista enlazada
    for (int i = 0; i < strlen(palabra); i++) {
        insertarNodo(cabeza, palabra[i]);
    }

    // Verificar si la lista enlazada es un palíndromo
    if (esPalindromo(cabeza)) {
        printf("La palabra/frase es un palíndromo.\n");
    } else {
        printf("La palabra/frase no es un palíndromo.\n");
    }

    // Liberar la memoria utilizada por la lista enlazada
    liberarLista(cabeza);

    return 0;
}

