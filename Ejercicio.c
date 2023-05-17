#include <stdio.h>
#include <stdlib.h>

int main() {
    int filas, columnas;

    // Obtener las dimensiones de la matriz
    printf("Ingrese el número de filas de la matriz: ");
    scanf("%d", &filas);

    printf("Ingrese el número de columnas de la matriz: ");
    scanf("%d", &columnas);

    // Crear la matriz dinámicamente
    int** matriz = (int**)malloc(filas * sizeof(int*));
    for (int i = 0; i < filas; i++) {
        matriz[i] = (int*)malloc(columnas * sizeof(int));
    }

    // Inicializar la matriz con ceros
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matriz[i][j] = 0;
        }
    }

    // Establecer la diagonal principal a 1
    int min_dimension = (filas < columnas) ? filas : columnas;
    for (int i = 0; i < min_dimension; i++) {
        matriz[i][i] = 1;
    }

    // Imprimir la matriz
    printf("Matriz resultante:\n");
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Liberar la memoria asignada a la matriz
    for (int i = 0; i < filas; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}

