/* La población actual de una colonia de insectos “A” es de 55 millones y crece
a una tasa del 7 % anual. La población de otra colonia “B” es de 250 millones y crece a razón
de un 2% anual. Si estas dos colonias mantuvieran su ritmo de crecimiento actual; ¿en
cuántos años la población “A” será la mitad de la población “B”? */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int coloniA = 55000000, coloniB = 250000000, tasaCA = 7, tasaCB = 2, crecimientoA = 0, crecimientoB = 0, contador = 0;

    do{
        crecimientoA = (coloniA*tasaCA)/100;
        coloniA = coloniA + crecimientoA;

        crecimientoB = (coloniB*tasaCB)/100;
        coloniB = coloniB + crecimientoB;

        contador++;

    }while(coloniA <= (coloniB/2));

    printf("Años totales para que la poblacion de A sea aproximadamente igual a la poblacion B: %d \n", contador);
    printf("Poblacion de A: %d \n", coloniA);
    printf("Poblacion de B: %d \n", coloniB);

    return 0;
}
