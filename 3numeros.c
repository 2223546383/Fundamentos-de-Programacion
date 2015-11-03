#include<stdio.h>
int a,b,c,x;
int main()
{
    printf ("de un valor (A=)");
    scanf ("%d", &a);
     printf ("de un valor (B=)");
    scanf ("%d", &b);
     printf ("de un valor (C=)");
    scanf ("%d", &c);
    
    if (a<b)
    {
   	x=a;
	a=b;
	b=x;	
    }

    if (b<c)
    {
	x=b;
	b=c;
	c=x;
    }

    if (a<b)
    {
   	x=a;
	a=b;
	b=x;	
    }

    if (b<c)
    {
	x=b;
	b=c;
	c=x;
    }

printf ("%d %d %d", a,b,c);
    
    
}
