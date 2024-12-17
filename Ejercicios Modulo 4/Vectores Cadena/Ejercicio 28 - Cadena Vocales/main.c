/* Desarrolle una función que reciba una cadena por parámetro y devuelva la cantidad de vocales
que contiene. No puede usar funciones de cadenas en el desarrollo. */

#include <stdio.h>
#include <stdlib.h>

void cantVocales (char* cadena){

    int i = 0, j = 0, k = 0, l = 0, m = 0, n = 0;

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
    }

    printf("Cantidad de vocales A: %d\n", j);
    printf("Cantidad de vocales E: %d \n", k);
    printf("Cantidad de vocales I: %d\n", l);
    printf("Cantidad de vocales O: %d\n", m);
    printf("Cantidad de vocales U: %d\n", n);
}

int main()
{

    char cadenita[50];

    printf("Ingrese una cadena: ");
    gets(cadenita);

    cantVocales(cadenita);

    return 0;
}
