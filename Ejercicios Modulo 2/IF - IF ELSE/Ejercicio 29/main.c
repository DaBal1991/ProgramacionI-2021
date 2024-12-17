#include <stdio.h>
#include <stdlib.h>

int main()
{
    float precio = 1.0, kiloManzanas, precioFinal;

    printf("Ingrese kilos comprados de manzanas: ");
    scanf("%f", &kiloManzanas);

    precioFinal = kiloManzanas*precio;

    if (kiloManzanas <=2)
        printf("No aplica descuento");
    else if (kiloManzanas <= 5)
        printf("Aplica un 5 de descuento: %1.1f", precioFinal - (((precioFinal)*5)/100) );
    else if (kiloManzanas <= 10)
        printf(" Aplica un 10 de descuento: %1.1f", precioFinal - (((precioFinal)*10)/100));
    else if (kiloManzanas >= 10.01)
        printf("Se aplica un 20 de descuento: %1.1f", precioFinal - (((precioFinal)*20)/100) );


    return 0;
}
