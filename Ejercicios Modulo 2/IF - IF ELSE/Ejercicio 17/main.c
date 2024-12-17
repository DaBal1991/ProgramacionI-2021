/* Ingresados tres caracteres, la computadora los muestra ordenados alfabéticamente. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char A, B, C;

    printf("Ingrese el primer caracter: ");
    scanf("%c", &A);

    fflush(stdin);
    printf("Ingrese el segundo caracter: ");
    scanf("%c", &B);

    fflush(stdin);
    printf("Ingrese el tercer caracter: ");
    scanf("%c", &C);

    if ((A < B) && (B < C))
        printf("Los caracteres ordenados alfabeticamente son: %c %c %c", A, B, C);
    else if ((B < A) && (A < C))
        printf("Los caracter ordenados son: %c %c %c", B, A, C);
    else if ((C < A) && (A < B))
        printf("Los caracteres ordenados son: %c %c %c", C, A, B);
    else if ((C < B) && (B < A))
        printf("Los caracteres ordenados son: %c %c %c", C, B, A);
    else if ((A < C) && (C < B))
        printf("Los caracteres ordenados son: %c %c %c", A, C, B);
    else if ((B < C) && (C < A))
        printf("Los caracteres ordenados son: %c %c %c", B, C, A);

    return 0;
}
