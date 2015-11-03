#include<stdio.h>

float Cuenta;
int Propina;
float personas;
float totalpersonas;

int main ()
{
	printf("Ingrese la cuenta a pagar:\n");
	scanf("%f", &Cuenta);
	printf("Cuantas personas son: \n");
	scanf("%f", &personas);
	Propina=(int)Cuenta*.10;
	printf("La propina es: %d \n", Propina);
	totalpersonas=(Cuenta+Propina)/personas;
	printf("La cuenta por persona es: %f", totalpersonas);	
}
