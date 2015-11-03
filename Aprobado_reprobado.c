#include<stdio.h>

float calificacion;

int main()
{
    printf("De la caificacion del Alumno:");
    scanf("%f", &calificacion);
    
    if(calificacion>=7 && calificacion<=10)
    {
        printf("el Alumno esta aprobado");
    }
    else
    {
        printf("Alumno Reprobado");
    }
}
