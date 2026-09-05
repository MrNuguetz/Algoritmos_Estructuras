#include <stdio.h>
#include <math.h>

int Mayor(int *arr,int n);
int Menor(int *arr,int n);
void Captura(int *arr,int n);
void Despliegue(int *arr,int n);

int main(void){
    int n;
    int mayor,menor;
    printf("Cuantos numero deseas capturar: ");
    scanf("%d", &n);
    int arr[n];

    Captura(arr,n);
    Despliegue(arr,n);
    mayor=Mayor(arr,n);
    menor=Menor(arr,n);

    printf("El mayor es: %d\n",mayor);
    printf("El menor es: %d \n",menor);
    return 0;


}
void Captura(int *arr,int n){

        for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        }
}
void Despliegue(int *arr,int n){

        for(int i = 0; i < n; i++){
        printf("%d",arr[i]);
        printf(" ");
        }
        printf("\n");
}


int Mayor(int *arr,int n){
    int mayor=arr[0]; //1

     for(int i = 0; i < n; i++){   //2n+2
     if(arr[i]> mayor)  //1
     mayor=arr[i]; // 2
    }
    return mayor; //1

}
int Menor(int *arr,int n){
    int menor=arr[0];

     for(int i = 0; i < n; i++){
     if(arr[i]< menor)
     menor=arr[i];
    }
    return menor;

}


