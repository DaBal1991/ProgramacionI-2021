/* Desarrolle un algoritmo que le permita realizar la escritura de los primeros
100 números naturales. Análisis: Para poder escribir los primeros 100 números primero hay
que generar dichos valores. Una forma de generar los valores es con las estructuras cíclicas.
Hacer una variable que se inicie en 1 que sería el primer valor a escribir y finalice en 100 que
sería el último número necesitado incrementando de uno en uno dicha variable. */

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n, i;

    for(i = 1 ; i <= 100 ; i++){
    printf("%d\n", i);
    }

    return 0;
}
