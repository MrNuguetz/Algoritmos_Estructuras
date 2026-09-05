#include <stdio.h>

int EsPrimo(int numero, int divisor);
void Primos(int n, int numero, int encontrados);

int main(void){

    int n;

    printf("Cuantos numeros primos quieres: ");
    scanf("%d", &n);

    Primos(n, 2, 0);

    return 0;
}

int EsPrimo(int numero, int divisor){

    if(divisor == numero){              //1
        return 1;                       //1
    }

    if(numero % divisor == 0){          //1
        return 0;                       //1
    }

    return EsPrimo(numero, divisor + 1); 
}

void Primos(int n, int numero, int encontrados){

    if(encontrados == n){               //1
        return;                         //1
    }

    if(EsPrimo(numero, 2)){             //1
        printf("%d ", numero);          //1
        encontrados++;                  //1
    }

    Primos(n, numero + 1, encontrados);
}