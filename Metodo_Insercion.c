#include <stdio.h>

void insercion(int *arreglo, int n);
void imprimir(int *arreglo, int n);

int main(void){

    int arreglo[] = {5, 3, 8, 1, 2};
    int n = 5;

    insercion(arreglo, n);

    imprimir(arreglo, n);

    return 0;
}

void insercion(int *arreglo, int n){

    int actual, j;                         // 1

    for(int i = 1; i < n; i++){           // n - 1

        actual = arreglo[i];               // 1
        j = i - 1;                         // 1

        while(j >= 0 && arreglo[j] > actual){ //

            arreglo[j + 1] = arreglo[j];   // 1
            j--;                           // 1
        }

        arreglo[j + 1] = actual;           // 1
    }
}

void imprimir(int *arreglo, int n){

    for(int i = 0; i < n; i++){
        printf("%d ", arreglo[i]);
    }
}