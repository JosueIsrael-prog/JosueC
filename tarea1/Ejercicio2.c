//Ejecrcicio_2
//Leer un número entero y mostrar todos los pares comprendidos entre 1 y el número leído.

#include <stdio.h>

int main()
{
        //numeros pares
        int numero; //variables de tipo entero a utilizar 
    printf("Ingrese un numero : "); //con la ayuda de la funcion printf solicito al usuario
                                   //el numero hasta el cual se va a mostrar los numeros pares
                                    
    scanf("%d", &numero); //con la funcion scanf leo los datos que ingrese el usuario por teclado
    
    for (int i = 1; i <= numero; i++) { //con el bucle for recorro los numeros hasta el numero ingresado por el usuario
        if (i % 2 == 0) {
            
             printf("\n %d", i);     //si el residuo de la division es igual a cero, entonces es un numero par
                                    //con la ayuda de la funcion printf inprimo los numeros pares hasta el
                                    //numero que se haya ingresa
             
              i++;
        }  
    
    }
}
    
  