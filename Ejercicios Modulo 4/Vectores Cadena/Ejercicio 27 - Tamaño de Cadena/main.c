/* Desarrolle una funci�n que reciba una cadena por par�metro y devuelva su tama�o. No puede
usar funciones de cadenas en el desarrollo. */

#include <stdio.h>
#include <stdlib.h>

void largo (char* cadena){

    int i = 0;

    for(i = 0; cadena[i] != '\0'; i++){
        cadena[i];
    }

    printf("Cantidad de caracteres: %d", i);
}

int main()
{

    char cadenita[50];

    printf("Ingrese una cadena: ");
    gets(cadenita);

    largo(cadenita);

    return 0;
}
