#include <stdio.h>
#include <stdlib.h>
#define T 3
#define LEN 20

int main()
{
    int legajo[T];
    char nombre[T][LEN];
    int i;
    int j;
    int auxEnt;
    char auxString[20];

    for(i=0; i<T; i++)
    {
        printf("Ingrese legajo: ");
        scanf("%d", &legajo[i]);

        printf("Ingrese nombre: ");
        fflush(stdin);
        gets(nombre[i]);
    }


// BURBUJEO- ORDENAMIENTO
    for(i=0; i<T-1; i++)
    {
        for(j=i+1; j<T; j++)
        {
            if(legajo[i]>legajo[j])
            {
                auxEnt = legajo[i];
                legajo[i] = legajo[j];
                legajo[j] = auxEnt;

                strcpy(auxString, nombre[i]);
                strcpy(nombre[i], nombre[j]);
                strcpy(nombre[j], auxString);
            }
        }
    }


    for(i=0; i<T; i++)
    {
        printf("%d\t%s\n", legajo[i], nombre[i]);
    }

    return 0;
}
