//Programa de operaciones basica.
#include<stdio.h>
float numero1;
float numero2;
float RSuma;
float RResta;
float RMultiplicacion;
float RDivicion;

int main()
{
	printf("Dame un numero: \n");
	scanf("%f", &numero1);
	printf("Dame otro numero: \n");
	scanf("%f", &numero2);
	RSuma=numero1+numero2;
        RResta=numero1-numero2;
        RMultiplicacion=numero1*numero2;
        RDivicion=numero1/numero2;
	printf("El resultado de la suma es: %f \n", RSuma);
        printf("El resultado de la resta es: %f \n", RResta);
        printf("El resultado de la multiplicacio es: %f \n", RMultiplicacion);
        printf("El resultado de la divicion es: %f \n", RDivicion);
      
}

