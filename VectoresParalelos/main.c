#include <stdio.h>
#include <stdlib.h>
#include <string.h> // Funciones de cadenas

/*int main()
{
    char palabra[10];

    printf("Ingrese una palabra: ");
    fflush(stdin);
    //gets(palabra);// Permite leer la cadena de caracteres con espacio de por medio.
    scanf("%[^\n]", palabra); // Otra manera de tomar datos.
    // GETS(PALABRA) y scanf("%[^\n]", PALABRA), es la misma funcion, diferente manera para escribirlo.

    printf("%s", palabra);

    return 0;
}
*/
/*
int main()
{
    char palabra[10];
    int largo;

    printf("Ingrese una palabra: ");
    fflush(stdin);
    scanf("%[^\n]", palabra);
    printf("%s", palabra);

    largo = strlen(palabra); //Recibe una constante al puntero *char. Dice lo que se guardo
    palabra[largo-1] = '\0'; //Mostrar solo lo utilizado
    printf("\nEl largo es: %d", largo);


    return 0;
}
*/
//strcpy = guardar datos para usuarlos luego
/*int main()
{
    char palabra[10];
    char otraPalabra[10]="Chau";
    int largo;

    //strcpy(palabra, "Hola"); //Guardar dentro de la variable un valor. 1ºvalor el destino de los datos, 2ºvalor el origen
    strcpy(palabra, otraPalabra);

    printf("%s", palabra);

    return 0;
}
*/
/*
int main()
{
    char palabra[10];
    char otraPalabra[10]="CHAU";
    int comp;

    printf("Ingrese una palabra: ");
    fflush(stdin);
    scanf("%[^\n]", palabra);

    //strupr(palabra); //CAMBIAR LA PALABRA INGRESADA A MAYUSCULAS
    //strlwr(palabra); //CAMBIAR LA PALABRA INGRESADA A MINUSCULAS

    printf("%s", palabra);


    comp = strcmp(palabra, otraPalabra); // Compara que las palabras tengan el mismo largo
    //Cuando haya una coincidencia de las dos  palabras va a dar resultado 0

    //  FUNCION DE MAYUSCULAS/MINISCULAS
    //STRICMP = no discrimina entre mayusculas y minusculas
    printf("\nCompara: %d", comp);

    return 0;
}
*/
//CONCATENAR  DATOS
/*int main()
{
    char palabra[10];
    char otraPalabra[100];

    printf("Ingrese una palabra: ");
    fflush(stdin);
    scanf("%[^\n]", otraPalabra);

    strcpy(palabra, otraPalabra);
    strcat(palabra, otraPalabra); // CONCATENAR LAS PALABRAS INGRESADAS

    printf("%s", palabra);
    return 0;
}*/


// Se debe ingresar nombre, apellido, luego mostrar los dos datos
// mostrando el nombre y el apellido con la iniciales en mayusculas, y separados con una como y espacio

int main()
{
    char nombre[15];
    char apellido[15];
    char apellidoNombre[100];
    char auxString[1000];
    char i;
    char len;

    printf("Ingrese nombre: ");
    fflush(stdin);
    gets(auxString);
    while (strlen(auxString)>14)
    {
        printf("REINGRESE nombre: ");
        fflush(stdin);
        gets(auxString);
    }

    strcpy(nombre, auxString);

    printf("Ingrese apellido: ");
    fflush(stdin);
    gets(auxString);
    while (strlen(auxString)>14)
    {
        printf("REINGRESE apellido: ");
        fflush(stdin);
        gets(auxString);
    }
    strcpy(apellido, auxString);

    printf("Su nombre es %s, y su apellido es %s.",nombre , apellido );

    return 0;
}


