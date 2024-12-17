/* Desarrolla un algoritmo que le permita leer tres valores N, M y P y decir si N es múltiplo de
M y P. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, M, P;

    printf("Ingrese el valor de N: ");
    scanf("%d", &N);

    fflush(stdin);
    printf("Ingrese el valor de M: ");
    scanf("%d", &M);

    fflush(stdin);
    printf("Ingrese el valor de P: ");
    scanf("%d", &P);

    if ((P%N == 0) && (M%N == 0))
        printf("N es multiplo de ambos");
    else if (M%N == 0)
        printf("N es multiplo de M");
    else if (P%N == 0)
        printf("N es multiplo de P");
    else
        printf("N no es multiplo de ninguno");



    return 0;
}
