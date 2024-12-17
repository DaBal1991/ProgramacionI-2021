/* Recomendado: Construye un programa que solicite la primera letra de los días de la
semana y emita por pantalla el nombre completo de ese día. En el caso de los martes y
miércoles, pedir la segunda letra para emitir. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letra1, letra2;

    printf("Ingrese la primer letra del dia: ");
    scanf("%c", &letra1);

    if (letra1 == 'l')
        printf("Lunes");
    else if (letra1 == 'm'){
        fflush(stdin);
        printf("Ingrese la segunda letra: ");
        scanf("%c", &letra2);
        if (letra2 == 'a')
            printf("Martes");
        else if (letra2 == 'i')
            printf("Miercoles");
    }
    else if (letra1 == 'j')
        printf("Jueves");
    else if (letra1 == 'v')
        printf("Viernes");
    else if (letra1 == 's')
        printf("Sabado");
    else if (letra1 == 'd')
        printf("Domingo");
    else
        printf("Letra invalida");

    return 0;


}
