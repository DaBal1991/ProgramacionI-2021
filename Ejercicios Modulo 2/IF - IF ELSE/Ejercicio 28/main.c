/* En un almacén se rebaja 20% del precio al cliente si el valor a pagarse es mayor a $200. Dado
un valor, muestre lo que debe pagar el cliente. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valor;

    printf("Ingrese el monto total de la compra: ");
    scanf("%f", &valor);

    if (valor > 200)
        printf("Se aplica un 20 de descuento y pagara: %1.2f", valor - ((valor*20)/100));
    else
        printf("No aplica descuento del 20: %1.2f", valor);


    return 0;
}
