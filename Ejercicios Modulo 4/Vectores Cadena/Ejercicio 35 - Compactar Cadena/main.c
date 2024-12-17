/* Desarrolle una función que reciba una cadena y la devuelva sin espacios (compactarla). Al hacer
las pruebas, no utilizar literal cadena. */

#include <stdio.h>
#include <stdlib.h>

void compactar (char* cadenita){

    printf("Cadena: %s", cadenita);

}

int main()
{
    char cadena [10];
    int i = 0;

    printf("Ingrese caracteres: ");
    for(i = 0; i < 10; i++){
        fflush(stdin);
        scanf("%c", &cadena[i]);
    }

    compactar(cadena);

    return 0;
}
