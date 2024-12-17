#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota;

    printf ("Introduzca la nota del 0 al 10: ");
    scanf ("%f", &nota);

    if (nota <= 5)
        printf("Suspende");
    else if (nota <= 7)
        printf("Aprobado");
    else if (nota <= 9)
        printf("Notable");
    else
        printf("Sobresaliente");

return 0;
}

