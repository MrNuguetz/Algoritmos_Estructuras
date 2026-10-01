#include "Funciones.h"
#include <stdio.h>
#include <stdlib.h>

void pila_inicializar(PilaCircular *pila) {
    pila->cola = NULL;
}

bool push(PilaCircular *pila, int valor) {
    NodoCircular *nuevo = malloc(sizeof(NodoCircular));

    if (nuevo == NULL) {
        return false;
    }

    nuevo->valor = valor;

    if (pila->cola == NULL) {
        nuevo->sig = nuevo;
        pila->cola = nuevo;
    } else {
        nuevo->sig = pila->cola->sig;
        pila->cola->sig = nuevo;
    }

    return true;
}

bool pop(PilaCircular *pila, int *valor) {
    if (pila->cola == NULL) {
        return false;
    }

    NodoCircular *tope = pila->cola->sig;
    *valor = tope->valor;

    if (tope == pila->cola) {
        pila->cola = NULL;
    } else {
        pila->cola->sig = tope->sig;
    }

    free(tope);
    return true;
}

void pila_imprimir(const PilaCircular *pila) {
    if (pila->cola == NULL) {
        printf("Pila vacia\n");
        return;
    }

    const NodoCircular *inicio = pila->cola->sig;
    const NodoCircular *reco = inicio;

    printf("TOPE -> ");

    do {
        printf("%d -> ", reco->valor);
        reco = reco->sig;
    } while (reco != inicio);

    printf("(regresa al TOPE)\n");
}

void pila_limpiar(PilaCircular *pila) {
    int valor;

    while (pop(pila, &valor)) {
    }
}
