#include <stdio.h>

int main() {
    int filas, columnas, i, j;
    printf("Ingrese el número de filas de las matrices: ");
    scanf("%d", &filas);
    printf("Ingrese el número de columnas de las matrices: ");
    scanf("%d", &columnas);

    int matriz1[filas][columnas], matriz2[filas][columnas], resultado[filas][columnas];

    printf("\nIngrese los elementos de la primera matriz: \n");
    for(i = 0; i < filas; i++) {
        for(j = 0; j < columnas; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz1[i][j]);
        }
    }

    printf("\nIngrese los elementos de la segunda matriz: \n");
    for(i = 0; i < filas; i++) {
        for(j = 0; j < columnas; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz2[i][j]);
        }
    }

    // Suma de matrices
    for(i = 0; i < filas; i++) {
        for(j = 0; j < columnas; j++) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

    // Imprimir resultado
    printf("\nLa suma de las matrices es: \n");
    for(i = 0; i < filas; i++) {
        for(j = 0; j < columnas; j++) {
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}