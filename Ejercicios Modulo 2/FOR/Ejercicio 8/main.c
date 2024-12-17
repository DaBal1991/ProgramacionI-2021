/* Generar un programa que ingresar N naturales y que muestre la suma, el promedio, el valor
máximo y el mínimo. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, acum = 0, max = 0, min = 0, N = 0, M = 0, valor = 0;
    int promedio;

    printf("Cantidad de numeros a generar: ");
    scanf("%d", &N);
    fflush(stdin);


    for(i = 0; i < N; i++){

        printf("Ingrese un numero: ");
        scanf("%d", &M);

        if (M > max)
            max = M;

            //NI IDEA COMO SACAR EL MINIMO, IGNORA LA CONDICION Y SIEMPRE TOMA EL ULTIMO VALOR DE M COMO REFERENCIA

        acum = acum + M;
        }
            promedio = acum/N;

                printf("Suma total: %d\n", acum);
                printf("Valor maximo: %d\n", max);
                printf("Valor minimo: %d\n", min);
                printf("Promedio en integer: %d\n", promedio);

    return 0;



}



