/* Construir un programa que ingrese un carácter y determine si es una vocal. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letra;

    printf("Ingrese una letra: ");
    scanf("%c", &letra);

    switch (letra){
        case 'a':
            printf("Es una vocal: %c", letra);
            break;
        case 'e':
            printf("Es una vocal: %c", letra);
            break;
        case 'i':
            printf("Es una vocal: %c", letra);
            break;
        case 'o':
            printf("Es una vocal: %c", letra);
            break;
        case 'u':
            printf("Es una vocal: %c", letra);
            break;
        default:
            printf("No es una vocal: %c", letra);

    }


    return 0;
}
