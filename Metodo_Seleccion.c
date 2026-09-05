#include <stdio.h>

void seleccion(int *arreglo, int n);
void imprimir(int *arreglo, int n);

int main(void){

    int arreglo[] = {5, 3, 8, 1, 2};
    int n = 5;

    seleccion(arreglo, n);

    imprimir(arreglo, n);

    return 0;
}

void seleccion(int *arreglo, int n){

    int menor, aux;                         // 1

    for(int i = 0; i < n - 1; i++){       // n

        menor = i;                         // n - 1

        for(int j = i + 1; j < n; j++){   // 

            if(arreglo[j] < arreglo[menor]){ // 1
                menor = j;                   // 1
            }
        }

        aux = arreglo[i];                  // 1
        arreglo[i] = arreglo[menor];       // 1
        arreglo[menor] = aux;              // 1
    }
}

void imprimir(int *arreglo, int n){

    for(int i = 0; i < n; i++){
        printf("%d ", arreglo[i]);
    }
}