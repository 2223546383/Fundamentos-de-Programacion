#include<stdio.h>
int i,final,suma;
int main()
 {
 	printf("Ingrese un numero: \n");
	 scanf("%d", & final);
 	i=1;
  	while (i<=final)
 	{
 		printf("%d\n", i);
 		suma=suma+i;
                i=i+1;
  	}     
        printf("\nLa suma de sus numeros es %d\n", suma);
}
 
