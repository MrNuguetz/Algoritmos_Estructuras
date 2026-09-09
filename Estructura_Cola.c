#include <stdio.h>
#define max 5

struct Pila
{
    int dato[5];
};

int main()
{
    struct Pila numeros = {{1, 2, 3, 4, 5}};
    int num = 0,opcion;

    while(opcion != 2){ 
        printf("1. Ingresar numero a la cola \n");
        printf("2. salir\n");
        scanf("%d",&opcion);

    switch(opcion){ 
    case 1: 
    printf("Que dato deseas ingresar? ");
    scanf("%d", &num);
    
    for(int i = 4; i > 0; i--)
    {
        numeros.dato[i] = numeros.dato[i - 1];
    }

    numeros.dato[0] = num;

    for(int i = 0; i < 5; i++)
    {
        printf("%d ", numeros.dato[i]);
    }

    printf("\n");

    case 2:
        printf("Adios crack");
        break;
    
    }}
    return 0;
}
    
   