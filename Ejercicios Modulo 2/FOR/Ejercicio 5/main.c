/* Desarrolle un algoritmo que le permita realizar la suma a los primeros N n�meros impares.
An�lisis: La idea es desarrollar la estructura para N veces y de la variable que lleve la cuenta
generar los n�meros impares buscando la relaci�n entre la cuenta y el n�mero como tal. */

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
