#include <stdio.h>

int main()
{
    int bancosAula, cantidadAlumnos, falta, sobran;
    
    printf ("Ingrese cantidad de bancas en el aula: ");
    scanf ("%d", &bancosAula);
    
    printf("Ingrese cantidad de alumnos inscritos: ");
    scanf("%d", &cantidadAlumnos);
    
    if (cantidadAlumnos<= bancosAula) {
        printf("Los bancos del aula si alcanza para los estudiantes inscritos\n");
        sobran = bancosAula-cantidadAlumnos;
        printf("SBancos sin ocupar: %d",sobran);
    } else if (cantidadAlumnos!= bancosAula) {
        printf("No hay bancos suficientes\n");
        falta= cantidadAlumnos-bancosAula;
        printf("Bancos que faltan : %d",falta);
    }
    return 0;
}

