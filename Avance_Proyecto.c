#include <stdio.h>


int Capturar_nombre(char *arreglo);

int main(void){

    char arreglo[100];

}

int Capturar_nombre(char *arreglo){ 
int longitud=0;

    int i=0;
    while(arreglo[i] != '\0' ){
        scanf("%s",arreglo);
        i++;
        longitud++;

    } 
    return longitud; 

 }