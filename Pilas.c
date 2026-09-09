#include <stdio.h>

int main(void){
    int pila[5]={0},tope=-1,opcion=0;

    while(opcion !=3){
        printf ("1) Push \n");
        printf ("2) Pop \n");
        printf ("3) Salir \n");
        printf (" Elige la operacion a ejecutar : ");
        scanf (" %d", & opcion );
        switch ( opcion ){
            case 1: //% push
                if(tope <4){
                tope ++;
                printf (" Introduce un numero a la pila : ");
                scanf (" %d" ,& pila [ tope ]);
                }
                else{
                printf ("La pila esta llena .\n");
                }
                break ;
                case 2: //% pop
                if(tope >=0)
                {
                printf ("El elemento que sale de la pila es: %d.\n", pila [ tope ]);
                pila [ tope ]=0;
                tope --;
                }
                else
                {
                printf ("La pila esta vacia .\n");
                }
                break ;
                }
        }
}
      

    