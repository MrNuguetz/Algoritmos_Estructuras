#include <stdio.h>

int busqueda(int *arr,int n);

int main (void){

    int arr[]={7,4,1,8,3,6};

    int resultado= busqueda(arr,6);
    if(resultado){
        printf("Valor encontrado");
    }
    else{
        printf("Valor no encontrado");
    }
        return 0;
}
int busqueda(int *arr,int n){

        for(int i=0;i<n;i++){ //2n+2
            if(arr[i]==3){      //1
            return 1;           //1
        }
        }
        return 0;               //1
}

//Complejidad  T(n)= 2n+2(1)(1)+1
//T(n)=2n+3
//T(n)=n
