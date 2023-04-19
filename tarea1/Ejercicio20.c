//Ejercicio_20
//Leer un número entero y determinar cuántos dígitos tiene.
#include <stdio.h>

int main()

{
    //Cuantos digitos tiene un numero
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
