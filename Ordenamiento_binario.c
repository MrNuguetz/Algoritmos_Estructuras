#include <stdio.h>


void Captura(int *arr,int n);
int busqueda(int *arr, int liminf, int limsup, int valor);

int main (void){

    int n,valor;
    printf("Cuantos numero deseas capturar: \n");
    scanf("%d", &n);
    int arr[n];
    int limsup=n-1;
    int liminf=0;
    printf("Que valor buscas: \n");
    scanf("%d", &valor);
    Captura(arr,n);
 

    int resultado=busqueda(arr,liminf,limsup,valor);
    if (resultado !=0){
        printf("Resultado encontrado: %d\n",resultado);
        for(int i = 0; i < n; i++){
        printf("[%d]",arr[i]);
        printf(" ");
        }
        printf("\n");
    }
    else{
        printf("No se encontro el resultado\n");
        for(int i = 0; i < n; i++){
        printf("[%d]",arr[i]);
        printf(" ");
        }
        printf("\n");
    }


    return 0;

}

void Captura(int *arr,int n){
        printf("Captura el arreglo: ");
        for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        }
}
int busqueda(int *arr, int liminf, int limsup, int valor){

    int centro;                             // 1

    if(liminf > limsup)                     // 1
        return 0;                           // 1

    centro = (liminf + limsup) / 2;         // 3

    if(valor == arr[centro])                // 1
        return arr[centro];                 // 1

    if(valor > arr[centro]){                // 1

        return busqueda(arr, centro + 1, limsup, valor);// 1 + T(n/2^k) 

    }

    if(valor < arr[centro]){                // 1

        return busqueda(arr, liminf, centro - 1, valor); // 1 + T(n/2^k)

    }
    return 0;                               //1
}
//Complejidad         (Solo entra a una recurcion por ciclo)
//1+1+1+3+1+1+1+(1+T(n/2^k))
//10+T(n/2^k)=1
//10+log2(n)=klog2(2)
//10+log2(n)=k(1)
//10+log2(n)=k
//log2(n)=k


