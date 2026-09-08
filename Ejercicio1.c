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
int suma = 0; //1
        //ºººº1ºººººnºººººn-1
    for(int i = 1; i <= n; i++){  //2n
        //1      
        suma += pow(i, i);  //2
    }
    return suma;      //1
}
//T(n)= 1+2n(2)+1
//T(n)= 1+2n(2)+1
//T(n)= 4n+2
