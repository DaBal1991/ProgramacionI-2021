/* Desarrolle un algoritmo que le permita realizar la suma a los primeros N números impares.
Análisis: La idea es desarrollar la estructura para N veces y de la variable que lleve la cuenta
generar los números impares buscando la relación entre la cuenta y el número como tal. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, i, div = 2, acumulador = 0;

    printf("Cantidad de numeros deseados: ");
    scanf("%d", &N);
    fflush(stdin);

    for(i = 0; i < N ; i++){

        if (i%div != 0){
            acumulador = acumulador + i;
        }
    }
        printf("%d\n", acumulador);


    return 0;
}
