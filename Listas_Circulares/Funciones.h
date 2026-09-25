#pragma once

#include <stdbool.h>

typedef struct NodoCircular {
    int valor;
    struct NodoCircular *sig;
} NodoCircular;

typedef struct {
    NodoCircular *cola;
} PilaCircular;

void pila_inicializar(PilaCircular *pila);
bool push(PilaCircular *pila, int valor);
bool pop(PilaCircular *pila, int *valor);
void pila_imprimir(const PilaCircular *pila);
void pila_limpiar(PilaCircular *pila);