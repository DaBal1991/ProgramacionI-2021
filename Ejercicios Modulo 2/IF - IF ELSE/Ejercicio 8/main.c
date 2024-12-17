/* Desarrolla un algoritmo que le permita leer tres valores A, B y C e indique cuál es valor del
centro (análogo al ejercicio 7). */

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

    if ((A > B) && (A < C))
        printf("A: %d es el numero del medio", A);
    else if ((B > A) && (B < C))
        printf("B: %d es el numero del medio", B);
    else
        printf("C: %d es el numero del medio", C);

    return 0;
}
