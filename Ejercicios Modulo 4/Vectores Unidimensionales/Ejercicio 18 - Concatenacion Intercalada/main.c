/* Ídem anterior, pero los elementos de los dos vectores deben concatenarse intercalados. Ej:
V4= 2-7-56-80-7-2-8-4-30-13; */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int base[5] = {2,56,7,8,30};
    int base2[5] = {7,80,2,4,13};
    int total[10];
    int i, j, k = 5, indice;

    indice = 0; // el indice es la base de la intercalacion, este parte de 0 y el otro de 1

    for(i = 0; i < 5; i++){
        total[indice] = base[i];
        indice = indice + 2;

    }

    indice = 1;

    for(i = 0; i < 5; i++){
        total[indice] = base2[i];
        indice = indice + 2;

    }

    for(i = 0; i < 10; i++){
        printf("Array final posicion %d: %d \n", i+1, total[i]);
    }



    return 0;
}
