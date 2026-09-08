#include <stdio.h>

void Ordenamiento(int *arreglo, int n);

int main(void){

int n;

    printf("Cuantos numero deseas capturar: \n");
    scanf("%d",&n);
int arreglo[n];

    for(int i=0;i<n;i++){
    printf("Captura el valor [%d]: ",i+1);
    scanf("%d",&arreglo[i]);
    }
    Ordenamiento(arreglo,n);

    return 0;

}
void Ordenamiento(int *arreglo, int n)
{
    int k = n / 2;
    int aux;
    int cambio;

    while(k > 0){
        do{
            cambio = 0;
            for(int i = 0; i + k < n; i++){
                if(arreglo[i] > arreglo[i + k]){
                    aux = arreglo[i];
                    arreglo[i] = arreglo[i + k];
                    arreglo[i + k] = aux;
                    cambio = 1;
                }
            }

        } while(cambio == 1);

        k = k / 2;
    }

    for(int i = 0; i < n; i++)
    {
        printf("[%d]", arreglo[i]);
    }
}