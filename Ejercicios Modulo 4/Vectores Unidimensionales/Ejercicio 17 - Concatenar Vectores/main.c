/* Construye una función tal que dados dos vectores de 5 elementos cada uno, los concatene en
un tercer un vector de 10 elementos. Ej:
V1= 2-56-7-8-30; V2= 7-80-2-4-13; V3= 2-56-7-8-30-7-80-2-4-13; */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int base[5] = {2, 56, 7, 8, 30};
    int base2[5] = {7, 80, 2, 4, 13};
    int total[10];
    int i, j, k = 5;

    for(i = 0; i < 5; i++){

        total[i] = base[i];
    }

    for(i = 0; i < 5; i++){

        total[k] = base2[i]; // parte desde donde el vector final dejo al anterior, es decir, la mitad y lo completa.
        k++;

    }

    for(i = 0; i < 10; i++){
        printf("Array final posicion %d: %d \n", i+1, total[i]);
    }

    return 0;
}
