#include<stdio.h>

char palabra[50],buscar,remplazar;
int i;

int main()
{
    printf(">De una palabra: \n");
    scanf("%s", palabra);
    printf("Teclee la letra a cambiar: ");
    scanf(" %c", &buscar);
    printf("Teclee la nueva letra: ");
    scanf(" %c", &remplazar);
        
    for(i=0;i<50;i++)
    {
        if( palabra[i]==buscar)
        {
            palabra[i]=remplazar;
        }
    }

    printf("%s",  palabra);
}