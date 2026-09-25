#include <stdio.h>
#include <stdlib.h>


struct Nodo {
    int dato;
    struct Nodo *ant;
    struct Nodo *sig;
};




int Insertar(struct Nodo * , int dato){ 

  struct Nodo *nuevo = crearNodo(dato);

    if (nuevo == NULL) {
        return 0;
    }

}


struct Nodo *crearNodo(int dato) {
    struct Nodo *nuevo_nodo = malloc(sizeof(struct Nodo));

    if (nuevo_nodo == NULL) {
        return NULL;
    }

    nuevo_nodo->dato = dato;
    nuevo_nodo->ant = NULL;
    nuevo_nodo->sig = NULL;

    return nuevo_nodo;
}






