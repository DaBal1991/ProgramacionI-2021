/* Desarrolle una función que reciba una cadena y devuelva un 1 si es palíndromo (palabra capicúa)
o cero si no lo es. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void palindromo(char* cadena){

    int i = 0, j = 0;
    int largo;
    char cadNueva1[50];
    char cadNueva2[50];
    int comp;

    largo = strlen(cadena);
    strncpy(cadNueva1, cadena, largo/2);
    strrev(cadena);
    strncpy(cadNueva2, cadena , largo/2);

    comp = strncmp(cadNueva1, cadNueva2, largo/2);

    if (comp == 0)
        printf("1");
    else
        printf("0");
}

int main()
{
    char cad[50];

    printf("Ingrese una cadena: ");
    gets(cad);

    palindromo(cad);

    return 0;
}
