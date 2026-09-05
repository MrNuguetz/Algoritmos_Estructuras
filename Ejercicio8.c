#include <stdio.h>

int Comprobar(char *cadena,int inicio, int fin,int tam);
int main(void){

    int tam;
    char cadena[30];
    int sum=0;

    printf("Captura la palabra\n");
        scanf("%s",cadena);

    int i=0;
    while(cadena[i] != '\0'){
        sum++;
     
        i++;
    }
    tam=sum;

    int polindromo=Comprobar(cadena,0,tam-1,tam);
    if (polindromo)
        printf("Es polindromo");
    else
       printf("No es polindromo"); 

    return 0;
}


int Comprobar(char *cadena,int inicio, int fin,int tam){

    if(inicio == tam-1 && fin==0){     //2
        return 1;                      //1
    }

    if(cadena[inicio]!=cadena[fin]){   //1
        return 0;                      //1
    }
    else                                //1
        return   Comprobar(cadena,inicio+1,fin-1,tam);  
        
}