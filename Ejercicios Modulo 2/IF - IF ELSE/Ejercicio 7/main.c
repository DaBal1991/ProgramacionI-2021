/* Desarrolla un algoritmo que le permita leer tres valores enteros e indique
cuál es el mayor. */

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

    if ((A > B) && (A > C))
        printf("A: %d es el mayor numero ingresado", A);
    else if ((B > A) && (B > C))
        printf("B: %d es el mayor numero ingresado", B);
    else
        printf("C: %d es el mayor numero ingresado", C);

    return 0;
}
