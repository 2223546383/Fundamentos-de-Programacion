#include<stdio.h>
int mes;
int main()
{
    printf("De el numero del mes que quiere saber:");
    scanf("%d", &mes);
    
    if(mes>=1 && mes<=12)
    {
        if(mes>=1 && mes<11)
        {
            if(mes>=1 && mes<=10)
            {
                if(mes>=1 && mes<=9)
                {
                    if(mes>=1 && mes<=8)
                    {
                       if(mes>=1 && mes<=7)
                       {
                           if(mes>=1 && mes<=6)
                           {
                               if(mes>=1 && mes<=5)
                               {
                                  if(mes>=1 && mes<=4)
                                  {
                                      if(mes>=1 && mes<=3)
                                      {
                                          if(mes>=1 && mes<=2)
                                          {
                                              if(mes>=1 && mes<2)
                                              {
                                                  printf("Mes Enero");
                                              }
                                              else
                                              {
                                                  printf("Mes Febrero");
                                              }
                                          }
                                          else
                                          {
                                              printf("Mes Marzo");
                                          }
                                      }
                                      else
                                      {
                                          printf("Mes Abril");
                                      }
                                  }
                                  else
                                  {
                                      printf("Mes Mayo");
                                  }
                               }
                               else
                               {
                                   printf("Mes Junio");
                               }
                           }
                           else
                           {
                               printf("Mes Julio");
                           }
                       }
                       else
                       {
                           printf("Mes Agosto");
                       }
                    }
                    else
                    {
                        printf("Mes Septiembre");
                    }
                }
                else
                {
                    printf("Mes Octubre");
                }
            }
            else
            {
                printf("Mes noviembre");
            }
        }
        else
        {
            printf("Mes Diciembre");
        }
        
    }
    else
    {
        printf("Numero de mes incorrecto");
    }
}
