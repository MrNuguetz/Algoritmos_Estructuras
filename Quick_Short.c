#include <stdio.h>


void Ordenamiento(int *arreglo, int n);

int main(void){

int n;

    printf("Captura el tamaño del arreglo \n");
    scanf("%d",&n);
int arreglo[n];

    for(int i=0;i<n;i++){
    printf("Captura el valor [%d]: ",i+1);
    scanf("%d",&arreglo[i]);
    }
    Ordenamiento(arreglo,n);

    return 0;

}

void Ordenamiento(int *arreglo, int n){


    
}

