/* Desarrolle un algoritmo que le permita realizar la suma a los primeros N números impares */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, acumulador = 0;

    printf("Ingrese un numero impar para sumar: \n");
    scanf("%d", &N);

    while ((N%2) != 0){
        acumulador = N + acumulador;
        scanf("%d", &N);
    }

    printf("Suma total: %d \n", acumulador);


    return 0;
}
