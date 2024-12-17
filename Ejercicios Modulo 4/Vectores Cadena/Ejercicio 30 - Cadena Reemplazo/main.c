/* Desarrolle una funci�n que reciba una cadena por par�metro y un car�cter, y que reemplace
todas las ocurrencias de ese car�cter por X. */

#include <stdio.h>
#include <stdlib.h>

void reemplazar (char* cadena, char caracter){

    int i;

    for(i = 0; cadena[i] != '\0'; i++){

        if (cadena[i] == caracter){
            cadena[i] = 'X';
        }
    }

    printf("Cadena final: %s \n", cadena);

}


int main()
{
    char cadena[50];
    char caracter;

    printf("Ingrese una cadena: ");
    gets(cadena);

    printf("Ingrese caracter que sera reemplazo: ");
    fflush(stdin);
    scanf("%c", &caracter);

    reemplazar(cadena, caracter);

    return 0;
}
