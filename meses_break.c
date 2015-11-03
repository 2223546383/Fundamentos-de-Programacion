#include<stdio.h>
int mes;
int main()
{
    printf("De el numero del mes que quiere saber:");
    scanf("%d", &mes);
    switch(mes)
    {
        case 1:
            printf("Mes Enero");
            break;
         case 2:
            printf("Mes Febrero");
            break;
        case 3:
            printf("Mes Marzo");
            break;
        case 4:
            printf("Mes Abril");
            break;
        case 5:
            printf("Mes Mayo");
            break;
        case 6:
            printf("Mes Junio");
            break;
        case 7:
            printf("Mes Julio");
            break;
        case 8:
            printf("Mes Agosto");
            break;
        case 9:
            printf("Mes Septiembre");
            break;
        case 10:
            printf("Mes Octubre");
            break;
        case 11:
            printf("Mes Noviembre");
            break;
        case 12:
            printf("Mes Diciembre");
            break;
        default:
            printf("Numero Incorrecto");
           
            
            
    }
    
   
}
    
