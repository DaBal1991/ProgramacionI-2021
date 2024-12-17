/* Desarrolla un algoritmo que le permita leer dos valores A y B e indicar si la
suma de los dos números es par. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A, B, sum;

    printf("Ingrese el valor de A: ");
    scanf("%d", &A);

    fflush(stdin);
    printf("Ingrese el valor de B: ");
    scanf("%d", &B);

    sum = A + B;

    if (sum%2 == 0)
        printf("La suma de A y B es par");
    else
        printf("La suma de A y B es impar");

    return 0;
}
