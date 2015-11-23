#include<stdio.h>

int main()
{
    int x;
    int i;
    int aux;
    int j;
    
    
    printf("¿De cuanto numeros sera el Arreglo?:\n");
    scanf("%i", &x);
    
    int a[x];
    
    for(i=0;i<x;i++)
    {
        printf("Da el %i numero:\n",i+1);
        scanf("%i", &a[i]);    
    }
    
    for(i=0;i<x-1;i++)
    {
        for(j=i;j<x;j++)
        {
            if(a[i]<a[j])
            {
                aux=a[i];
                a[i]=a[j];
                a[j]=aux;
            }
        }
    }
    for (i=x-1;i>=0;i--)
    {
      printf("\nlos numeros ordenados de forma ascendente es:%d\n",a[i]);
    }  
}
