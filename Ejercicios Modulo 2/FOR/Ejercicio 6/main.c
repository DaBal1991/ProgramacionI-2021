/* Escribe un programa para encontrar la suma de los primeros 50 números. Córrelo varias
veces, debe en cada caso mostrar la misma salida. Ahora elimina la inicialización: sum=0; y
corre el programa dos veces más. Si las salidas fueron incorrectas explica por qué. */

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
