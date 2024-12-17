/* Desarrolle la función “esBisiesto” que reciba un año por parámetro y devuelva “verdadero”
si el año es bisiesto (Un año es bisiesto si es divisible por 400, o bien si es divisible por 4 pero no
por 100). */

#include <stdio.h>
#include <stdlib.h>

int esBisiesto (int anual){

    if ((anual%400 == 0) || ((anual%4 == 0) && (anual%100 != 0)))
        return 1;
    else
        return 0;

}

int main()
{
    int anualidad, check;

    printf("Ingrese una año: ");
    scanf("%d", &anualidad);

    check = esBisiesto(anualidad);

    if (check == 1)
        printf("Verdadero");

    return 0;
}
