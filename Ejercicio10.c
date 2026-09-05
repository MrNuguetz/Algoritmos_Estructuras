#include <stdio.h>

void Calcular(int *vector, int n, int posicion,
              int *sumaPares, int *sumaImpares, int *cantidadImpares);

int main(void){

    int n;

    printf("Tamaño del vector: ");
    scanf("%d", &n);

    int vector[n];

    for(int i = 0; i < n; i++){
        printf("Numero %d: ", i + 1);
        scanf("%d", &vector[i]);
    }

    int sumaPares = 0;
    int sumaImpares = 0;
    int cantidadImpares = 0;

    Calcular(vector, n, 0, &sumaPares, &sumaImpares, &cantidadImpares);

    printf("\nSuma de pares: %d\n", sumaPares);

    if(cantidadImpares > 0){

        float promedio = (float)sumaImpares / cantidadImpares;

        printf("Promedio de impares: %.2f\n", promedio);
    }
    else{
        printf("No hay numeros impares\n");
    }

    return 0;
}


void Calcular(int *vector, int n, int posicion,
              int *sumaPares, int *sumaImpares, int *cantidadImpares){

    // Caso base
    if(posicion == n){
        return;
    }

    // Si es par
    if(vector[posicion] % 2 == 0){

        *sumaPares = *sumaPares + vector[posicion];
    }

    // Si es impar
    else{

        *sumaImpares = *sumaImpares + vector[posicion];

        *cantidadImpares = *cantidadImpares + 1;
    }

    
    Calcular(vector, n, posicion + 1,
             sumaPares, sumaImpares, cantidadImpares);
}