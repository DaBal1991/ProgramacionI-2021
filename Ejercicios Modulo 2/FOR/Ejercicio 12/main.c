/* Supone que se lanza la pelota con una velocidad inicial Vo = 96 m/s. Se
necesita un programa para producir una tabla que presente la altura de la pelota para cada
valor de t de 1 a 8 segundos. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i, vinicial = 96, h = 0;

    printf("Tiempo (segundos)\t\tAltura (metros)\n", i, h);

    for (i = 0; i <= 8; i++){

        h = (h +  (vinicial*i) - (4.9*pow(i,2)));

        printf("%d\t\t\t\t%d\n", i, h);

    }

    return 0;
}
