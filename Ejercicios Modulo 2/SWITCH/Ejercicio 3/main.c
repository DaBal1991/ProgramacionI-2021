/* Construir un programa que ingrese un carácter y determine si es número. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char caracter;

    printf("Ingrese un caracter: ");
    scanf("%c", &caracter);

    switch(caracter){
        case '1':
            printf("Es numero");
            break;
        case '2':
            printf("Es numero");
            break;
        case '3':
            printf("Es numero");
            break;
        case '4':
            printf("Es numero");
            break;
        case '5':
            printf("Es numero");
            break;
        case '6':
            printf("Es numero");
            break;
        case '7':
            printf("Es numero");
            break;
        case '8':
            printf("Es numero");
            break;
        case '9':
            printf("Es numero");
            break;
        default:
            printf("Es caracter alfabetico: %c", caracter);
    }


    return 0;
}
