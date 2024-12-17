/* Ingresa dos números enteros, la computadora indica si el mayor es divisible por el menor. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A, B;

    printf("Ingrese el valor de A: ");
    scanf("%d", &A);

    fflush(stdin);
    printf("Ingrese el valor de B: ");
    scanf("%d", &B);

    if ((A > B) && (A%B == 0))
        printf("A: %d es divisible por B: %d", A, B);
    else if ((B > A) && (B%A == 0))
        printf("B: %d es divisible por A: %d", B, A);
    else
        printf("No son divisibles");


    return 0;
}
