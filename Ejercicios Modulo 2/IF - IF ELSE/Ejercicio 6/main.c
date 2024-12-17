/* Ingresados dos números reales, la computadora muestra su cociente. Si el segundo número
es cero, la computadora muestra un mensaje indicando la imposibilidad de la operación. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float A, B, div;

    printf("Se dividira A por B \n");
    printf("Ingrese el valor de A: ");
    scanf("%f", &A);

    fflush(stdin);
    printf("Ingrese el valor de B: ");
    scanf("%f", &B);

    div = A/B;

    if (B == 0)
        printf("No se puede realizar la division por cero");
    else
        printf("El cociente es: %1.2f", div);

    return 0;
}
