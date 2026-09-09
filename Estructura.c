# include <stdio.h>
# define max 5

struct Pila
{
int tope ;
int dato [ max ];
};

int main ()
{
struct Pila numeros ={0};
int num =0;
printf (" Que dato deseas ingresar ?\n");
scanf (" %d", & num );

numeros.dato[ numeros . tope ++]= num ;

printf ("El dato introducido es %d \n", numeros . dato [ numeros .tope -1]) ;
printf (" Sacar un dato de la pila \n");
printf ("El dato que se saca es %d \n", numeros . dato [-- numeros . tope ]);
return 0;
}