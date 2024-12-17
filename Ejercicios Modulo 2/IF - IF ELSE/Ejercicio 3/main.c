/*Desarrolla un algoritmo que le permita leer dos valores (A y B) y que escriba cuál de los dos
valores leídos es el mayor.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float A, B;

    printf("Ingrese el valor de A: ");
    scanf("%f", &A);

    fflush(stdin);
    printf("Ingrese el valor de B: ");
    scanf("%f", &B);

    if (A > B)
        printf("A: %1.1f es mayor que B: %1.1f ", A, B);
    else
        printf("B: %1.1f es mayor que A: %1.1f", B, A);

    return 0;
}
