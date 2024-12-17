/* Pedro invierte u$s 100 a una tasa del 8% anual. Jorge invierte u$s 150 al 5% anual. ¿Después
de cuántos años la cuenta de Pedro rebasará a la de Jorge? */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float dolarINIPedro = 100, dolarINIJorge = 150, interesJorge = 0, interesPedro = 0;
    int contador = 0;

    do{
        interesPedro = (dolarINIPedro*8)/100;

        dolarINIPedro = dolarINIPedro + interesPedro;

        interesJorge = (dolarINIJorge*5)/100;

        dolarINIJorge = dolarINIJorge + interesJorge;

        contador = contador + 1;

    }while (dolarINIJorge > dolarINIPedro);

    printf("Pedro superara a Jorge en %d años \n", contador);
    printf("Acumulado por Pedro: %f \n", dolarINIPedro);
    printf("Acumulado por Jorge: %f \n", dolarINIJorge);

    return 0;
}
