/* Ingresados 3 números enteros, la computadora indica si están desordenados u ordenados
en forma creciente o decreciente */

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

    if ((A < B) && (B < C))
        printf("Los valores estan ordenados");
    else
        printf("Los valores ingresados estan desordenados");

    return 0;

}
