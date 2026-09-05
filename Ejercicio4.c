#include <stdio.h>

void Captura(int *arr1, int *arr2);
void Encontrar(int *arr1, int *arr2);


int main(void){

int arr1[5];
int arr2[5];

    Captura(arr1,arr2);
    Encontrar(arr1,arr2);
    return 0;

}

void Captura(int *arr1, int *arr2){
    
    printf("Captura los valores para el arreglo 1: \n");
    for(int i=0; i<5; i++){
        scanf("%d",&arr1[i]);
    }
        printf("Captura los valores para el arreglo 2: \n");
    for(int i=0; i<5; i++){
        scanf("%d",&arr2[i]);
    }

}
void Encontrar(int *arr1, int *arr2){

    for(int i=0; i<5; i++){
            for(int j=0; j<5; j++){
            if (arr1[i]==arr2[j]){
                printf("Los numeros que se repiten son: \n");
                printf("%d",arr1[i]);
                printf(" ");
            }
    }

    }
}