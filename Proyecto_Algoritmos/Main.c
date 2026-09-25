#include <stdio.h>
#include <string.h>
#include "Prototipos.h"


//Funcion Principal
int main()
{
    // Arreglo de usuarios de prueba
    struct Usuario usuarios[6] =
    {
        {"Luis", "Programacion", "2026-03-10"},
        {"Ana", "Diseno", "2026-01-15"},
        {"Carlos", "Redes", "2026-05-20"},
        {"Brenda", "Idiomas", "2026-02-08"},
        {"Marco", "Electronica", "2026-04-12"},
        {"Karen", "Programacion", "2026-01-25"}
    };

    int n = 6;

    printf("USUARIOS SIN ORDENAR\n\n");

    mostrarUsuarios(usuarios, n);


    // Ordenamos los usuarios por nombre
    quickSort(usuarios, n);



    printf("\nUSUARIOS ORDENADOS POR NOMBRE\n\n");

    mostrarUsuarios(usuarios, n);


    // Nombre que queremos buscar
    char nombre[30];

    printf("\nIngresa el nombre del usuario que deseas buscar: ");
    scanf("%29s", nombre);


    // Aplicamos busqueda binaria
    int posicion = busqueda(usuarios, 0, n - 1, nombre);


    // Si posicion es diferente de -1, se encontro
    if(posicion != -1)
    {
        printf("\nUsuario encontrado:\n");

        printf("%s | %s | %s\n",
               usuarios[posicion].nombre,
               usuarios[posicion].disciplina,
               usuarios[posicion].fecha);
    }
    else
    {
        printf("\nUsuario no encontrado.\n");
    }


    return 0;
}