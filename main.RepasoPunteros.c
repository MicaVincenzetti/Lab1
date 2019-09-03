#include <stdio.h>
#include <stdlib.h>
// RECIBE Y DA UN NUMERO ENTRERO
/*
int funcion( );

int main()
{
    int numero = 4;
    printf("\n El numero antes de modificar es: %d \n", numero);
    numero = funcion();
        printf("\n El numero despues  de modificar es: %d \n", numero);
    return 0;
}

int funcion( )
{
    int numero;
    numero = 100;
    return numero;
}
*/

// USO DE PUNTEROS

/*void funcion(int*  );

int main()
{
    int numero = 4;
    printf("\n El numero antes de modificar es: %d \n", numero);
    funcion(&numero);
        printf("\n El numero despues  de modificar es: %d \n", numero);
    return 0;
}

void funcion(int* numero)
{
    *numero = 100;
}
*/

//USUARIO INGRESA UN NUMERO Y SE MUESTRA MODIFICADO
void funcion(int*  );

int main()
{
    int numero = 4;
    printf("\nEl numero antes de modificar es: %d \n", numero);
    funcion(&numero);
        printf("\nEl numero despues  de modificar es: %d \n", numero);
    return 0;
}

void funcion(int* numero)
{
        printf("\nIngrese un numero: \n");
        scanf("%d", numero);
}
