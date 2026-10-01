#include "Funciones.h"
#include <stdio.h>

int main(void)
{
    PilaCircular pila;
    int numero;

    pila_inicializar(&pila);

    printf("Ingresa un numero: ");
    scanf("%d", &numero);

    push(&pila, numero);

    printf("Ingresa otro numero: ");
    scanf("%d", &numero);

    push(&pila, numero);

    printf("Ingresa otro numero: ");
    scanf("%d", &numero);

    push(&pila, numero);

    printf("\nPila:\n");
    pila_imprimir(&pila);

    pop(&pila, &numero);

    printf("\nNumero eliminado: %d\n", numero);

    printf("\nPila despues del pop:\n");
    pila_imprimir(&pila);

    pila_limpiar(&pila);

    return 0;
}