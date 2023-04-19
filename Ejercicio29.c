//Ejercicio_29
//Leer un número entero y determinar a cuánto es igual el primero de sus dígitos.
#include <stdio.h>

int main()
{
    //Primer digito 
    int numero; //Variable del tipo entero a utilizar 
    
    printf ("Ingrese un numero : "); //Con printf solicito al usuario ingresar un numero 
    scanf ("%d", &numero); //Con la funcion scanf leo los datos ingresados por el usuario
    
            numero = numero / 10; //Asigno el resultado de dividir el numero ingresado para 10
    while (numero > 10) {
}

printf("El numero es %d", numero); //Inprimo un numero donde se evidencia el numero ingresado y 
                                   //el primer digito de dicho numero 
}
