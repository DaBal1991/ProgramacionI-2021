/* Recomendado: Desarrolla un algoritmo que le permita leer tres valores A, B y C e indicar si
la suma de dos de ellos cualquiera es igual al tercero */

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

    if (A + B == C)
        printf("La suma de A y B es igual a C");
    else if (B + C == A)
        printf("La suma de B y C es igual a A");
    else if (A + C == B)
        printf("La suma de A y C es igual a B");
    else
        printf("Son numeros distintos");

    return 0;

}
