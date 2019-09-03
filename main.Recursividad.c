#include <stdio.h>
#include <stdlib.h>


// Recursividad = una funcion que se llama a si misma.

//Ejercicio normalemente
/*int main()
{
    int numero=5;
    int factorial=1;
    int i;

    for (i=numero; i>=1; i--)
    {
        factorial = factorial * i;
    }

    printf("%d", factorial);

    return 0;
}*/

/*
\brief Calcula el factorial de un numero
\param int El numero sobre el que se calcula
\ return int El factorial
*/

//FUNCION CON RECURSIVIDAD. Solo cuando no  hay otra opcion para resolver el problema
unsigned int factorial(int);

int main()
{
    int numero=5;
    unsigned int resultado;
    resultado = factorial(numero);

    printf("\n El factorial del numero 5 es: %d \n", resultado);

    return 0;
}

unsigned int factorial(int numero)
{
    unsigned int resultado;

    if(numero == 0)
    {
        resultado = 1;
    }
    else
    {
        resultado= numero*factorial(numero-1);
    }
    return resultado;
}


