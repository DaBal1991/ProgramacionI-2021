/* Desarrolle una función que reciba una cadena y la muestre invertida por pantalla. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void invertir (char* cadena){

    printf("Cadena invertida: %s", strrev(cadena));

}

int main()
{
    char cad[50];

    printf("Ingrese una cadena: ");
    gets(cad);

    invertir(cad);

    return 0;
}
