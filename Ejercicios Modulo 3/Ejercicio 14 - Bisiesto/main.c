/* Desarrolle la funci�n �esBisiesto� que reciba un a�o por par�metro y devuelva �verdadero�
si el a�o es bisiesto (Un a�o es bisiesto si es divisible por 400, o bien si es divisible por 4 pero no
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

    printf("Ingrese una a�o: ");
    scanf("%d", &anualidad);

    check = esBisiesto(anualidad);

    if (check == 1)
        printf("Verdadero");

    return 0;
}
