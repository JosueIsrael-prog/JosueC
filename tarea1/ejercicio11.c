//Ejercicio_11
//Leer un número entero de dos dígitos y mostrar en pantalla todos los enteros comprendidos entre un dígito y otro.
#include <stdio.h>

int main()

{
    //Cuantos digitos tiene un numero abc
    int contador = 0; //Variables de tipo entero a utilizar
    int numero; 
    
    printf ("Ingrese un numero : "); //Con la ayuda del printf solicito al usuario un numero
    scanf ("%d", &numero); //Con la ayuda de scanf leo los datos que ingreso el usuario
    
    while (numero > 0) {
        numero = numero/10; //Asigno la parte entera del resultado de la division para el entero
        contador++;                   //Cuento las veces que se repite el bucle 
    }
    printf("Cantidad de digitos : %d", contador); //Imprimo un comentario donde se le indique al usuario 
                                                 //la cantidad de digitos que tiene el numero ingresado
}
