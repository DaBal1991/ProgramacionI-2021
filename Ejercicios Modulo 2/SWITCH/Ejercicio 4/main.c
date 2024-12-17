/* El c�digo morse, tambi�n conocido como alfabeto Morse, es un sistema de
representaci�n de letras y n�meros mediante se�ales emitidas de forma intermitente.
Construye un programa que permita ingresar un car�cter, letra o n�mero y convertirlo en
c�digo.  */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char caracter;

    printf("Traductor a Morse \n");
    printf("Ingrese un caracter alfanumerico para traducir al morse: ");
    scanf("%c", &caracter);

    switch(caracter){
        case ('A'):
            printf(".-");
            break;
        case ('B'):
            printf("-...");
            break;
        case ('C'):
            printf("-.-.");
            break;
        case ('D'):
            printf("-..");
            break;
        case ('E'):
            printf(".");
            break;
        case ('F'):
            printf("..-.");
            break;
        case ('G'):
            printf("--.");
            break;
        case ('H'):
            printf("....");
            break;
        case ('I'):
            printf("..");
            break;
        case ('J'):
            printf(".---");
            break;
        case ('K'):
            printf("-.-");
            break;
        case ('L'):
            printf(".-..");
            break;
        case ('M'):
            printf("--");
            break;
        case ('N'):
            printf("-.");
            break;
        case ('O'):
            printf("---");
            break;
        case ('P'):
            printf(".--.");
            break;
        case ('Q'):
            printf("--.-");
            break;
        case ('R'):
            printf(".-.");
            break;
        case ('S'):
            printf("...");
            break;
        case ('T'):
            printf("-");
            break;
        case ('U'):
            printf("..-");
            break;
        case ('V'):
            printf("...-");
            break;
        case ('W'):
            printf(".--");
            break;
        case ('X'):
            printf("-..-");
            break;
        case ('Y'):
            printf("-.--");
            break;
        case ('Z'):
            printf("--..");
            break;
        case ('1'):
            printf(".----");
            break;
        case ('2'):
            printf("..---");
            break;
        case ('3'):
            printf("...--");
            break;
        case ('4'):
            printf("....-");
            break;
        case ('5'):
            printf(".....");
            break;
        case ('6'):
            printf("-....");
            break;
        case ('7'):
            printf("--...");
            break;
        case ('8'):
            printf("---..");
            break;
        case ('9'):
            printf("----.");
            break;
        case ('0'):
            printf("-----");
            break;
        default:
            printf("Ingrese las letras en mayuscula");
            }

    return 0;
}
