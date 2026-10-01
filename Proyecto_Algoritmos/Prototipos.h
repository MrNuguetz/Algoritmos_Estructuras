#pragma once

//Estructura
struct Usuario
{
    char nombre[30];
    char disciplina[30];
    char fecha[11];
};

// Prototipos de las funciones
int particion(struct Usuario usuarios[], int n);
void quickSort(struct Usuario usuarios[], int n);
void mostrarUsuarios(struct Usuario usuarios[], int n);
int busqueda(struct Usuario *usuarios, int liminf, int limsup, char *nombre);