
#include <stdlib.h>
#include "vectores.h"
#define T 10     // int vectorDeNumeros[T]; eligo desde ahi el vector
// se define desde un principio, sin poder modificar luego.



// TODO EN LA FUNCION MAIN
/*int main()
{
    int vectorDeNumeros[T];
    int i;
    int contadorDePositivos = 0;
    int sumaDePositivos = 0;
    float promedioPositivos;
    int maximo;
    int minimo;
    int flag = 0;
    int opcion;


    do
    {
        printf("1. Cargar numeros. \n");
        printf("2. Mostrar todos.  \n");
        printf("3. Mostrar negativos.  \n");
        printf("4. Mostrar promedio de los positivos.  \n");
        printf("5. Mostrar maximo.  \n");
        printf("6. Mostrar minimo.  \n");
        printf("7. Salir.  \n");
        printf("Elija una opcion. \n");
        scanf("%d", &opcion);

        switch (opcion)
        {
        case 1:
            printf("\n CARGA DE DATOS\n");
                for(i=0; i<10; i++)
                    {
                        printf("Ingrese un numero: ");
                        scanf("%d", &vectorDeNumeros[i]);
                    }
            break;
        case 2:
            printf("\n MUESTRO EL VECTOR\n");
            for(i=0; i<10; i++)
                    {
                        printf("%d\n", vectorDeNumeros[i]);
                    }

             break;
        case 3:
            printf("\n\n MUESTRO SOLO LOS NEGATIVOS\n");
            for(i=0; i<10; i++)
                    {
                        if(vectorDeNumeros[i]<0)
                        {
                            printf("%d\n", vectorDeNumeros[i]);
                        }

                    }
            break;
        case 4:
            for(i=0; i<10; i++)
                {
                    if(vectorDeNumeros[i]>=0)
                        {
                            sumaDePositivos += vectorDeNumeros[i];
                            contadorDePositivos++;
                        }
                    }
            promedioPositivos = (float)sumaDePositivos/contadorDePositivos;
            printf("Suma: %d -- Cantidad %d\n\n", sumaDePositivos, contadorDePositivos);
            printf("\n\n PROMEDIO DE POSITIVOS: %f\n\n", promedioPositivos);
            break;
        case 5:
            for (i=0; i<10; i++)
            {
                if (maximo < vectorDeNumeros[i] || flag == 0)
                {
                    maximo = vectorDeNumeros[i];
                    flag = 1;
                }
            }
            printf("\n\n Numero maximo: %d \n\n", maximo);
            break;
        case 6:
            flag = 0;
            for (i=0; i<10; i++)
            {
                if (minimo > vectorDeNumeros[i] || flag == 0)
                {
                    minimo = vectorDeNumeros[i];
                    flag = 1;
                }
            }
            printf("\n\n Numero minimo: %d \n\n", minimo);
            break;
        case 7:
            break;

        }

  system ("pause");
  system ("cls");
    } while (opcion !=7);



    return 0;

}*/

/*void cargarVector(int[], int );
void mostrarMaximo(int[], int );
int calcularMaximo (int[], int );
*/ //BICLOTECA VECTORES.H

int main()
{
    int vectorDeNumeros[T];
    int i;
    int contadorDePositivos = 0;
    int sumaDePositivos = 0;
    float promedioPositivos;
    int maximo;
    int minimo;
    int flag = 0;
    int opcion;


    do
    {
        printf("1. Cargar numeros. \n");
        printf("2. Mostrar todos.  \n");
        printf("3. Mostrar negativos.  \n");
        printf("4. Mostrar promedio de los positivos.  \n");
        printf("5. Mostrar maximo.  \n");
        printf("6. Mostrar minimo.  \n");
        printf("7. Salir.  \n");
        printf("Elija una opcion. \n");
        scanf("%d", &opcion);

        switch (opcion)
        {
        case 1:
            cargarVector(vectorDeNumeros, T);
            break;
        case 2:
            printf("\n MUESTRO EL VECTOR\n");
            for(i=0; i<10; i++)
                    {
                        printf("%d\n", vectorDeNumeros[i]);
                    }

             break;
        case 3:
            printf("\n\n MUESTRO SOLO LOS NEGATIVOS\n");
            for(i=0; i<10; i++)
                    {
                        if(vectorDeNumeros[i]<0)
                        {
                            printf("%d\n", vectorDeNumeros[i]);
                        }

                    }
            break;
        case 4:
            for(i=0; i<10; i++)
                {
                    if(vectorDeNumeros[i]>=0)
                        {
                            sumaDePositivos += vectorDeNumeros[i];
                            contadorDePositivos++;
                        }
                    }
            promedioPositivos = (float)sumaDePositivos/contadorDePositivos;
            printf("Suma: %d -- Cantidad %d\n\n", sumaDePositivos, contadorDePositivos);
            printf("\n\n PROMEDIO DE POSITIVOS: %f\n\n", promedioPositivos);
            break;
        case 5:
            printf("\n\n Numero maximo: %d \n\n", maximo);
            break;
        case 6:
            flag = 0;
            for (i=0; i<10; i++)
            {
                if (minimo > vectorDeNumeros[i] || flag == 0)
                {
                    minimo = vectorDeNumeros[i];
                    flag = 1;
                }
            }
            printf("\n\n Numero minimo: %d \n\n", minimo);
            break;
        case 7:
            break;

        }

  system ("pause");
  system ("cls");
    } while (opcion !=7);



    return 0;

}

/*void cargarVector(int vector[], int tam)
{
    int i
    printf("\n CARGA DE DATOS\n");
        for(i=0; i<tam; i++)
            {
                printf("Ingrese un numero: ");
                scanf("%d", &vector[i]);
            }
}

void mostrarMaximo(int vector[], int tam )
{
        int flag=0;
        int i;
        maximo = calcularMaximo(vector, tam);

        printf("\n\n El maximo: %d \n\n", maximo);
        for (i=0; i<tam; i++)
        {
            if (vector[i]== maximo)
            {
                printf("%d", i)
            }
        }

}
int calcularMaximo (int vector[], int tam)
{
        int flag=0;
        int i;
        maximo = calcularMaximo(vector, tam);
        for (i=0; i<tam; i++)
            {
                if (maximo < vector[i] || flag == 0)
                {
                    maximo = vector[i];
                    flag = 1;
                }
            }
            printf("\n\n Numero maximo: %d \n\n", maximo);
}
*/ //BIBLOTECA VECTORES.C

