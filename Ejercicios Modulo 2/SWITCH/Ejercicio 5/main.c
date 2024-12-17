/* Construir un programa que convierta Kg a otra unidad de medida de masa, mostrar en
pantalla un menú con las opciones posibles.  */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float kilos;
    int opcion;

    printf("Ingrese la cantidad de kilos a transformar: ");
    scanf("%f", &kilos);

    printf("1: Kilo a hectogramo \n");
    printf("2: Kilo a decagramo \n");
    printf("3: Kilo a gramo \n");
    printf("4: Kilo a decigramo \n");
    printf("5: Kilo a centigramo \n");
    printf("6: Kilo a miligramo \n");

    fflush(stdin);
    printf("Ingrese una opcion: ");
    scanf("%d", &opcion);


    switch(opcion){
        case 1:
            printf("Hectogramos: %1.1f", kilos*10);
            break;
        case 2:
            printf("Decagramos: %1.1f", kilos*100);
            break;
        case 3:
            printf("Gramos: %1.1f", kilos*1000);
            break;
        case 4:
            printf("Decigramos: %1.1f", kilos*10000);
            break;
        case 5:
            printf("Centigramos: %1.1f", kilos*100000);
            break;
        case 6:
            printf("Miligramos: %1.1f", kilos*1000000);
            break;
        default:
            printf("Opcion inexistente");
            break;
}
    return 0;
}
