void cargarVector(int vector[], int tam)
{
    int i;
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
        int maximo;
        maximo = calcularMaximo(vector, tam);

        printf("\n\n El maximo: %d \n\n", maximo);
        for (i=0; i<tam; i++)
        {
            if (vector[i]== maximo)
            {
                printf("%d", i);
            }
        }

}
int calcularMaximo (int vector[], int tam)
{
        int flag=0;
        int i;
        int maximo;
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

