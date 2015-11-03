#include <stdio.h>
 
 int main()
 {
	 int numero, a, b, c, d;
 
	 printf("Escribe un numero entero con 4 digitos: ");
	 scanf("%d", &numero);
 
	 if (numero >= 1000)
    {
		 if (numero <= 9999)
        {
			 a = numero / 1000;
			 b = (numero % 1000) / 100;
			 c = (numero % 1000) % 100 / 10;
			 d = ((numero % 1000) % 100) % 10 / 1;
			 
 
			 printf("%d\n", a);
                         printf("%d\n", b);
                         printf("%d\n", c);
                         printf("%d\n", d);
		 }
		 else
		 {
		 	printf("Digito muy grande");
		 }
	 }
	  else
		 {
		 	printf("Digito pequeño");
		 }
	 return 0;
}
