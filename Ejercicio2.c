#include <stdio.h>
#include <math.h>

double Calculo(int n);

int main(void){
    int n;
    double Resultado;


    printf("Captura un numero: ");
    scanf("%d", &n);
    Resultado = Calculo(n);
    printf("El resultado es: %f", Resultado);

    return 0;
}

double Calculo(int n){
    double suma = 1; //1
    int cambio=0;    //1
        //ºººº1ººººººnººººn-2
    for(int i = 2; i <= n; i++){ //2n-1
        if (cambio){             //1
            suma+=(1.0/i);       //3
            cambio--;            //1
        }
        else {                   
            suma-=(1.0/i);       //3
            cambio++;            //1
        }

    }
    return suma;                 //1
}
//T(n)= 1+1 +2n(3+1+3+1)+1
//T(n)= 2+2n(8)+1
//T(n)=16n +3
