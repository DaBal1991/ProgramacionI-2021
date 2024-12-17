/* Desarrolla un algoritmo que le permita leer un valor cualquiera N y escribir si dicho número
es múltiplo de Z */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, Z;

    printf("Ingrese un valor para N: ");
    scanf("%d", &N);

    printf("Ingrese un valor para Z: ");
    scanf("%d", &Z);

    if (N % Z == 0.0)
        printf("N: %d es multiplo de Z: %d", N, Z);
    else
        printf("N no es multiplico de Z");

    return 0;
}
