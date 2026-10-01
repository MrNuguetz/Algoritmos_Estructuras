#include <stdio.h>
#include <string.h>

//Estructura
struct Usuario
{
    char nombre[30];
    char disciplina[30];
    char fecha[11];
};

// Prototipos de las funciones
void intercambiar(struct Usuario *a, struct Usuario *b);
int particion(struct Usuario usuarios[], int inicio, int fin);
void quickSort(struct Usuario usuarios[], int inicio, int fin);
void mostrarUsuarios(struct Usuario usuarios[], int n);
int busqueda(struct Usuario *usuarios, int liminf, int limsup, char *nombre);

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
    quickSort(usuarios, 0, n - 1);


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



// Funcion que intercambia de posicion dos usuarios
void intercambiar(struct Usuario *a, struct Usuario *b)
{
    struct Usuario auxiliar;

    auxiliar = *a;
    *a = *b;
    *b = auxiliar;
}


// Funcion que realiza la particion de QuickSort
int particion(struct Usuario usuarios[], int inicio, int fin)
{
    struct Usuario pivote = usuarios[fin];

    int i = inicio - 1;

    for(int j = inicio; j < fin; j++)
    {
        if(strcmp(usuarios[j].nombre, pivote.nombre) < 0)
        {
            i++;

            intercambiar(&usuarios[i], &usuarios[j]);
        }
    }

    intercambiar(&usuarios[i + 1], &usuarios[fin]);

    return i + 1;
}


// Funcion principal de QuickSort
void quickSort(struct Usuario usuarios[], int inicio, int fin)
{
    if(inicio < fin)
    {
        int posicionPivote;

        posicionPivote = particion(usuarios, inicio, fin);

        quickSort(usuarios, inicio, posicionPivote - 1);

        quickSort(usuarios, posicionPivote + 1, fin);
    }
}


// Funcion para mostrar todos los usuarios
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
int busqueda(struct Usuario *usuarios, int liminf, int limsup, char *nombre)
{
    int centro;

    // Si los limites se cruzan significa que no se encontro
    if(liminf > limsup)
    {
        return -1;
    }

    // Calculamos la posicion de en medio
    centro = (liminf + limsup) / 2;


    // Comparamos el nombre buscado con el nombre del centro
    int comparacion = strcmp(nombre, usuarios[centro].nombre);


    // Si son iguales encontramos al usuario
    if(comparacion == 0)
    {
        return centro;
    }


    // Si el nombre buscado va alfabeticamente despues
    // buscamos en la mitad derecha
    if(comparacion > 0)
    {
        return busqueda(usuarios, centro + 1, limsup, nombre);
    }


    // Si el nombre buscado va alfabeticamente antes
    // buscamos en la mitad izquierda
    if(comparacion < 0)
    {
        return busqueda(usuarios, liminf, centro - 1, nombre);
    }


    return -1;
}