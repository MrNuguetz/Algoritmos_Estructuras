#include <stdio.h>
#include <string.h>
#include "Prototipos.h"


int particion(struct Usuario usuarios[], int n)
{
    struct Usuario pivote = usuarios[n - 1];
    struct Usuario aux;

    int i = 0;

    for(int j = 0; j < n - 1; j++)
    {
        if(strcmp(usuarios[j].nombre, pivote.nombre) < 0)
        {
            aux = usuarios[i];
            usuarios[i] = usuarios[j];
            usuarios[j] = aux;

            i++;
        }
    }

    aux = usuarios[i];
    usuarios[i] = usuarios[n - 1];
    usuarios[n - 1] = aux;

    return i;
}

void quickSort(struct Usuario usuarios[], int n)
{
    if(n <= 1)
    {
        return;
    }

    int pivote = particion(usuarios, n);

    quickSort(usuarios, pivote);

    quickSort(usuarios + pivote + 1, n - pivote - 1);
}

void mostrarUsuarios(struct Usuario usuarios[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%s | %s | %s\n",
               usuarios[i].nombre,
               usuarios[i].disciplina,
               usuarios[i].fecha);
    }
}

// Funcion Busqueda binaria                             
int busqueda(struct Usuario *usuarios, int liminf, int limsup, char *nombre){

    int centro;                                                     //complejidad ---> 1   

    // Si se cruzan el limite inferior y superior, se termino la busqueda
    if(liminf > limsup){                                            //complejidad ---> 1
        return -1;                                                  //complejidad ---> 1
    }

    // Calculamos centro
    centro = (liminf + limsup) / 2;                                 //complejidad ---> 3

    // Comparamos el nombre a buscar con el nombre[centro]
    int comparacion = strcmp(nombre, usuarios[centro].nombre);      //complejidad ---> 2 

    // Si son iguales encontramos al usuario
    if(comparacion == 0){                                           //complejidad ---> 1
    
        return centro;                                              //complejidad ---> 1
    }

    // Si el nombre buscado va alfabeticamente despues
    // buscamos en la mitad derecha
    if(comparacion > 0){                                             //complejidad ---> 1
        //Recursividad
        return busqueda(usuarios, centro + 1, limsup, nombre);       
    }

    // Si el nombre buscado va alfabeticamente antes
    // buscamos en la mitad izquierda
    if(comparacion < 0){                                             //complejidad ---> 1
       //Recursividad
        return busqueda(usuarios, liminf, centro - 1, nombre);      //complejidad ---> T(mitad izquierda)
    }

    return -1;                                                      //complejidad ---> 1
}

