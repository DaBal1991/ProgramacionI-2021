/* Desarrolle la función “menu” que muestre por pantalla 4 opciones, pida ingresar una de esas
opciones y devuelva por resultado la opción elegida. La función debe validar que la opción
ingresada sea valida 8si hay 4 opciones, no debo poder elegir la opción 6). */

#include <stdio.h>
#include <stdlib.h>

int menu ();

int main()
{
    int menusito = menu();

    switch (menusito){
        case 1:
            printf("Jaja");
            break;
        case 2:
            printf("Jeje");
            break;
        case 3:
            printf("Jiji");
            break;
        case 4:
            printf("Jojo");
            break;
        default:
            printf("*** ERROR: OPCION INEXISTENTE ***");
    }

    return 0;
}

int menu (){

    int opcion;

    printf("Opcion 1: Jaja \n");
    printf("Opcion 2: Jeje \n");
    printf("Opcion 3: Jiji \n");
    printf("Opcion 4: Jojo \n");
    printf("Elija una opcion: \n");
    scanf("%d", &opcion);

    return opcion;
}
