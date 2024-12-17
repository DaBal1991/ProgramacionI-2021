/* Desarrolla un algoritmo que le permita leer tres valores A, B y C e indicar si uno de los tres
divide a los otros dos exactamente. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A, B, C;

    printf("Ingrese el valor de A: ");
    scanf("%d", &A);

    fflush(stdin);
    printf("Ingrese el valor de B: ");
    scanf("%d", &B);

    fflush(stdin);
    printf("Ingrese el valor de C: ");
    scanf("%d", &C);

    if ((B%A == 0) && (C%A == 0))
        printf("A: %d divide a los otros dos de forma exacta", A);
    else if ((A%B == 0) && (C%B == 0))
        printf("B: %d edivide a los otros dos de forma exacta", B);
    else
        printf("C: %d divide a los otros dos de forma exacta", C);

    return 0;
}
