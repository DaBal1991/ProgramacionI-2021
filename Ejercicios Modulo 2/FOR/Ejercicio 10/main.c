/*  Escribe un programa que muestre una tabla con los cuadrados y cubos de
los números de 1 a 15 y luego presente en pantalla:
a) La suma de los cuadrados.
b) La suma de los cubos
c) Cuántos cubos son mayores a 500
d) Un mensaje que diga si la suma de los cuadrados fue o no mayor a 2000.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i, cuadrados = 0, cubos = 0, acum1 = 0, acum2 = 0, c = 0;

    printf("Base\tCuadrados\tCubos\n");
    for (i = 1; i <= 15; i++ ){

        cuadrados = pow(i,2);
        cubos = pow(i,3);
        printf("%d\t%d\t\t%d\n", i, cuadrados, cubos);

        acum1 = acum1 + cuadrados;
        acum2 = acum2 + cubos;

        if (cubos > 500){
            c++;
        }
    }

    printf("\nTotal: %d\t\t%d\n", acum1, acum2);
    printf("Hay un total de %d cubos superiores a 500", c);

    if (acum1 > 2000)
        printf("\nLa suma de cuadrados es superior a 2000");
    else
        printf("\nLa suma de cuadrados no es superior a 2000");

    return 0;
}
