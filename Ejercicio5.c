#include <stdio.h>


void Capturar(int n, int m, int matriz[n][m], int matriz2[n][m]);
void Imprimir(int n, int m, int matriz[n][m], int matriz2[n][m]);


int main(void){

int n,m;

    printf("Numero de filas: ");
    scanf("%d", &n);

    printf("Numero de columnas: ");
    scanf("%d", &m);

    int matriz[n][m];
    int matriz2[n][m];

    Capturar(n, m, matriz, matriz2);
    Imprimir(n, m, matriz, matriz2);

    return 0;


}
void Capturar(int n, int m, int matriz[n][m], int matriz2[n][m]){

    printf("Matriz 1:");
    for(int i=0; i<n; i++){
      for(int j=0; j<m; j++){
        scanf("%d",&matriz[i][j]);
    }
 
    }
    printf("Matriz 2:");
        for(int i=0; i<n; i++){
      for(int j=0; j<m; j++){
        scanf("%d",&matriz2[i][j]);
    }  
 
    }
}
void Imprimir(int n, int m, int matriz[n][m], int matriz2[n][m]){

    printf("Matriz 1:\n");
    for(int i=0; i<n; i++){
      for(int j=0; j<m; j++){
        printf("%d",matriz[i][j]);
    }
          printf("\n");   
    }
    printf("Matriz 2:\n");
    for(int i=0; i<n; i++){
      for(int j=0; j<m; j++){
         printf("%d",matriz2[i][j]);
    }
          printf("\n");  
    }
}