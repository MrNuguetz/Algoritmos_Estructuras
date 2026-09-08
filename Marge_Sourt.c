#include <stdio.h>

void Ordenamiento(int *arreglo, int n);
void mergeSort(int arreglo[], int inicio, int fin);
void merge(int arreglo[], int inicio, int medio, int fin);

int main(void){

    int n;

    printf("Cuantos numero deseas capturar:\n");
    scanf("%d", &n);

    int arreglo[n];

    for(int i = 0; i < n; i++){
        printf("Captura el valor [%d]: ", i + 1);
        scanf("%d", &arreglo[i]);
    }

    Ordenamiento(arreglo, n);

    printf("\nArreglo ordenado:\n");

    for(int i = 0; i < n; i++){
        printf("%d ", arreglo[i]);
    }

    return 0;
}


void Ordenamiento(int *arreglo, int n){

    mergeSort(arreglo, 0, n - 1);

}


void mergeSort(int *arreglo, int inicio, int fin){

    if(inicio < fin){

        int medio = (inicio + fin) / 2;

        // Ordena la mitad izquierda
        mergeSort(arreglo, inicio, medio);

        // Ordena la mitad derecha
        mergeSort(arreglo, medio + 1, fin);

        // Une las dos mitades
        merge(arreglo, inicio, medio, fin);
    }
}


void merge(int *arreglo, int inicio, int medio, int fin){

    int n1 = medio - inicio + 1;
    int n2 = fin - medio;

    int izquierda[n1];
    int derecha[n2];

    // Copiar mitad izquierda
    for(int i = 0; i < n1; i++){
        izquierda[i] = arreglo[inicio + i];
    }

    // Copiar mitad derecha
    for(int j = 0; j < n2; j++){
        derecha[j] = arreglo[medio + 1 + j];
    }

    int i = 0;
    int j = 0;
    int k = inicio;

    // Comparar ambas mitades
    while(i < n1 && j < n2){

        if(izquierda[i] <= derecha[j]){
            arreglo[k] = izquierda[i];
            i++;
        }
        else{
            arreglo[k] = derecha[j];
            j++;
        }

        k++;
    }

    // Copiar lo que falte de la izquierda
    while(i < n1){
        arreglo[k] = izquierda[i];
        i++;
        k++;
    }

    // Copiar lo que falte de la derecha
    while(j < n2){
        arreglo[k] = derecha[j];
        j++;
        k++;
    }
}