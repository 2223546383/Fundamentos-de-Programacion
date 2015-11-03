#include<stdio.h>
int edad;

int main()
{
    printf("Escriba una edad:");
    scanf("%d", &edad);
    
    if(edad>=0 && edad<=59)
    { 
        if(edad>=0 && edad<=32)
        {
            if(edad>=0 && edad<=19)
            {
                if(edad>=0 && edad<=12)
                {
                    printf("Es un niño");
                }
                else
                {
                    printf("Es un adoleceente");
                }
            }
            else
            {
                printf("Es un joven");
            }
        }
        else
        {
            printf("Es una adulto");
        }
    
    }
    else 
    {
        printf ("Es Adulto Mayor");
    }
}