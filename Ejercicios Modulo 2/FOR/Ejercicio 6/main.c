/* Escribe un programa para encontrar la suma de los primeros 50 n�meros. C�rrelo varias
veces, debe en cada caso mostrar la misma salida. Ahora elimina la inicializaci�n: sum=0; y
corre el programa dos veces m�s. Si las salidas fueron incorrectas explica por qu�. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, acum = 0;

    for(i = 0; i <= 50; i++){

        acum = acum + i;

    }

    printf("Suma total del 1 al 50: %d", acum);

    return 0;
}
