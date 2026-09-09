#include <stdio.h>

void Ordenamiento(int *arreglo, int inicio, int fin);

int main(void){

    int n;

    printf("Cuantos numero deseas capturar: \n");
    scanf("%d", &n);

    int arreglo[n];

    for(int i = 0; i < n; i++){
        printf("Captura el valor [%d]: ", i + 1);
        scanf("%d", &arreglo[i]);
    }

    
    Ordenamiento(arreglo, 0, n - 1);

    printf("\nArreglo ordenado:\n");

    for(int i = 0; i < n; i++){
        printf("%d ", arreglo[i]);
    }

    return 0;
}


void Ordenamiento(int *arreglo, int inicio, int fin){

    if(inicio < fin){

        int pivote = arreglo[fin];
        int i = inicio - 1;
        int aux;

      
        for(int j = inicio; j < fin; j++){

            if(arreglo[j] <= pivote){

                i++;

                aux = arreglo[i];
                arreglo[i] = arreglo[j];
                arreglo[j] = aux;
            }
        }

       
        aux = arreglo[i + 1];
        arreglo[i + 1] = arreglo[fin];
        arreglo[fin] = aux;

        int posicionPivote = i + 1;

        
        Ordenamiento(arreglo, inicio, posicionPivote - 1);

        
        Ordenamiento(arreglo, posicionPivote + 1, fin);
    }
}