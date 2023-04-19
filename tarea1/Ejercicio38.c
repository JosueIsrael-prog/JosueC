//Ejercicio_38
//Leer un número entero y mostrar en pantalla su tabla de multiplicar.

int main()
{
    
//Tabla de multiplicacion 
int numero; //Variables de tipo entero a utilizar

printf("Ingrese un numero : "); //Con la ayuda de la funcion printf solicito al usuario
                               //un numero entero

scanf("%d", &numero); //Con la funcion scanf leo los datos que el usuario ingresa por teclado


for (int i = 1; i <= 10; i++) { //con el bucle for recorro los numero hasta el numero 10
    
    
    printf("\n%d * %d = %d", numero,i,numero*i); //Imprimo un comentario donde se le indique al 
                                                //usuario la tabla de multiplicar del numero ingresado 
}

     }

