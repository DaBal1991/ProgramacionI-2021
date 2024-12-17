/* Desarrolle una función que reciba una cadena por parámetro y devuelva la cantidad de
consonantes. No puede usar funciones de cadenas en el desarrollo. */

#include <stdio.h>
#include <stdlib.h>

void cantVocales (char* cadena){

    int i = 0, j = 0, k = 0, l = 0, m = 0, n = 0, o = 0;

    for(i = 0; cadena[i] != '\0'; i++){
        if (cadena[i] == 'a')
            j++;
        if (cadena[i] == 'e')
            k++;
        if (cadena[i] == 'i')
            l++;
        if (cadena[i] == 'o')
            m++;
        if (cadena[i] == 'u')
            n++;
        if (cadena[i] == ' ')
            o++;
    }

    printf("Cantidad de consonantes: %d \n", i - (j+k+l+m+n+o));
}

int main()
{

    char cadenita[50];

    printf("Ingrese una cadena: ");
    gets(cadenita);

    cantVocales(cadenita);

    return 0;
}
