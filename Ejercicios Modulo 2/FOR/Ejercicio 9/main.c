/* Escribe un programa que calcule y muestre la suma: 1 + 1/2 + 1/3 + 1/4 + .... + 1/50 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float i, acum = 0, frac = 0;

    for (i = 1; i <= 50; i++){

        frac = 1/i;
        acum = acum + frac;

        printf("%f\n", frac);

    }

    printf("Suma total de 1 a 1/50: %f", acum);

    return 0;
}
