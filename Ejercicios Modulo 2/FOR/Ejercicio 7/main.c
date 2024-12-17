/* Escribe un programa en el que se pida al usuario que ingrese 10 enteros impares para
sumarlos, el programa debe validar el número de manera que actúe correctamente cuando
el usuario introduce, por error, un número par, imprimirá la suma y debe finalizar sólo
cuando se hayan ingresado diez enteros impares. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, acum = 0, N;

    for(i = 0; i < 10; i++){

        printf("Ingrese un valor impar: ");
        scanf("%d", &N);
        fflush(stdin);

        acum = acum + N;

        if (N%2 == 0){
            i--;
            acum = acum - N;
            printf("Valor ingresado es par, por favor, vuelva a intentar con un valor impar: \n");
            }

    }

    printf("Suma total de impares: %d", acum);


    return 0;
}
