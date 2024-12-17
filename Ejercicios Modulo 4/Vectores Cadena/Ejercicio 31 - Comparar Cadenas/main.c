/* Desarrolle una función que reciba dos cadena por parámetro y devuelva: 1 si la primer cadena
es mayor, 0 si ambas son iguales o -1 si la primera es menor. No puede usar funciones de cadenas
en el desarrollo. */

#include <stdio.h>
#include <stdlib.h>

void comparar (char* cad1, char* cad2){

    int i = 0, j = 0, cont1 = 0, cont2 = 0;

    for (i = 0; cad1[i] != '\0'; i++){
        cont1 = i;
    }

    for (j = 0; cad2[j] != '\0'; j++){
        cont2 = j;

    }

    printf("I: %d\n", i);
    printf("J: %d\n", j);

    if (i > j){
        printf("1");
    }
    if (i == j){
        printf("0");
    }
    if (i < j){
        printf("-1");
    }
}

int main()
{
    char cadenA[50];
    char cadenB[50];

    printf("Ingrese la primer cadena: ");
    gets(cadenA);

    fflush(stdin);

    printf("Ingrese la segunda cadena: ");
    gets(cadenB);

    fflush(stdin);

    comparar(cadenA,cadenB);

    return 0;
}
