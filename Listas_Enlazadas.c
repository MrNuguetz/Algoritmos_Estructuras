#include <stdio.h>
#include <stdlib.h>

struct Nodo {
    int dato;
    struct Nodo *ant;
};

int vacia(struct Nodo *tope) {
    return tope == NULL;
}

struct Nodo *crearNodo(int n) {
    struct Nodo *nuevo_nodo = malloc(sizeof(struct Nodo));

    if (nuevo_nodo == NULL) {
        printf("Error: no se pudo reservar memoria.\n");
        exit(EXIT_FAILURE);
    }

    nuevo_nodo->dato = n;
    nuevo_nodo->ant = NULL;

    return nuevo_nodo;
}

struct Nodo *push(struct Nodo *tope, int n) {
    struct Nodo *nuevo = crearNodo(n);

    nuevo->ant = tope;
    return nuevo;
}

struct Nodo *pop(struct Nodo *tope) {
    if (tope == NULL) {
        return NULL;
    }

    struct Nodo *aux = tope;
    tope = tope->ant;
    free(aux);

    return tope;
}

void mostrar(struct Nodo *tope) {
    if (vacia(tope)) {
        printf("La pila esta vacia.\n");
        return;
    }

    printf("Elementos de la pila:\n");

    while (tope != NULL) {
        printf("%d ", tope->dato);
        tope = tope->ant;
    }

    printf("\n");
}

void liberarPila(struct Nodo *tope) {
    while (tope != NULL) {
        tope = pop(tope);
    }
}

int main(void) {
    struct Nodo *tope = NULL;
    int dato, op;

    do {
        printf("\nPROGRAMA QUE IMPLEMENTA PILAS CON LISTAS ENLAZADAS\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Mostrar\n");
        printf("4. Salir\n");
        printf("Opcion: ");

        if (scanf("%d", &op) != 1) {
            printf("Opcion invalida.\n");
            while (getchar() != '\n');
            continue;
        }

        switch (op) {
            case 1:
                printf("Introduce un numero: ");
                scanf("%d", &dato);
                tope = push(tope, dato);
                break;

            case 2:
                if (!vacia(tope)) {
                    printf("El dato eliminado es: %d\n", tope->dato);
                    tope = pop(tope);
                } else {
                    printf("Pila vacia.\n");
                }
                break;

            case 3:
                mostrar(tope);
                break;

            case 4:
                printf("Saliendo...\n");
                break;

            default:
                printf("Opcion invalida.\n");
        }

    } while (op != 4);

    liberarPila(tope);
    return 0;
}