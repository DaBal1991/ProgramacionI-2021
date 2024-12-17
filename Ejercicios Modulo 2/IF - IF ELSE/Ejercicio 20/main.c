/* Se lee un número entero correspondiente a un año, y se muestra un mensaje indicando si
es año bisiesto. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int anual;

    printf("Ingrese un año: ");
    scanf("%d", &anual);

    if (((anual%4 == 0) && (anual%400 == 0)) && (!anual%100 == 0))
        printf("Es bisiesto");
    else
        printf("No es bisiesto");

    return 0;
}
