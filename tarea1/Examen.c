#include <stdio.h>

// Definición de la función que encuentra el número mayor
int encontrarMaximo(int numeros[], int n) {
    int maximo = numeros[0]; // inicializamos el máximo con el primer número del arreglo
    for (int i = 1; i < n; i++) { // iteramos sobre el arreglo a partir del segundo elemento
        if (numeros[i] > maximo) { // si encontramos un número mayor que el actual máximo
            maximo = numeros[i]; // actualizamos el valor del máximo
        }
    }
    return maximo; // devolvemos el máximo encontrado
}

// Función principal que lee los datos de entrada y llama a la función encontrarMaximo
int main() {
    int n; // número de elementos a leer
    printf("Ingrese la cantidad de numeros: ");
    scanf("%d", &n); // leemos el número de elementos

    int numeros[n]; // arreglo para almacenar los números
    printf("Ingrese los %d numeros separados por espacios: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &numeros[i]); // leemos cada número del arreglo
    }

    int maximo = encontrarMaximo(numeros, n); // llamamos a la función encontrarMaximo
    printf("El numero mayor es: %d\n", maximo); // imprimimos el número mayor

    return 0; // indicamos que el programa terminó sin errores
}