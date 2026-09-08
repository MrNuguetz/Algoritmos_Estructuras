#include <stdio.h>

void Ordenamiento(int *arreglo, int n);
void heapify(int *arreglo, int n, int i);

int main(void){

    int n;

    printf("Cuantos numero deseas capturar: \n");
    scanf("%d",&n);

    int arreglo[n];

    for(int i = 0; i < n; i++){
        printf("Captura el valor [%d]: ", i + 1);
        scanf("%d",&arreglo[i]);
    }

    Ordenamiento(arreglo,n);

    printf("\nArreglo ordenado:\n");

    for(int i = 0; i < n; i++){
        printf("%d ", arreglo[i]);
    }

    return 0;
}

void Ordenamiento(int *arreglo, int n){

    // Crear el Max Heap
    for(int i = n / 2 - 1; i >= 0; i--){
        heapify(arreglo, n, i);
    }

    // Sacar el elemento mayor y colocarlo al final
    for(int i = n - 1; i > 0; i--){

        // Intercambiar el primero con el ultimo
        int aux = arreglo[0];
        arreglo[0] = arreglo[i];
        arreglo[i] = aux;

        // Volver a acomodar el Heap
        heapify(arreglo, i, 0);
    }
}

void heapify(int *arreglo, int n, int i){

    int mayor = i;

    int izquierdo = 2 * i + 1;
    int derecho = 2 * i + 2;

    // Revisar hijo izquierdo
    if(izquierdo < n && arreglo[izquierdo] > arreglo[mayor]){
        mayor = izquierdo;
    }

    // Revisar hijo derecho
    if(derecho < n && arreglo[derecho] > arreglo[mayor]){
        mayor = derecho;
    }

    // Si alguno de los hijos es mayor
    if(mayor != i){

        int aux = arreglo[i];
        arreglo[i] = arreglo[mayor];
        arreglo[mayor] = aux;

        // Revisar nuevamente hacia abajo
        heapify(arreglo, n, mayor);
    }
}