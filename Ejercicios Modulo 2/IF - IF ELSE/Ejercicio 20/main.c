/* Se lee un n�mero entero correspondiente a un a�o, y se muestra un mensaje indicando si
es a�o bisiesto. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int anual;

    printf("Ingrese un a�o: ");
    scanf("%d", &anual);

    if (((anual%4 == 0) && (anual%400 == 0)) && (!anual%100 == 0))
        printf("Es bisiesto");
    else
        printf("No es bisiesto");

    return 0;
}
