#include<stdio.h>
int i,final,inicio;

int main()
 {
 	printf("Ingrese un numero: \n");
	 scanf("%d", & inicio);
 	printf("Ingrese un numero: \n");
	 scanf("%d", & final);
 	i=inicio;
  	if(i<final)
  	{
  			while (i<=final)
 			{
 				printf("%d\n", i);
 		
                i=i+1;
  			}  
  	}
  	else
  	{
  			while (final<=i)
 			{
 				printf("%d\n", i);
 		
                i=i-1;
  			}  
  	}
   
        
}