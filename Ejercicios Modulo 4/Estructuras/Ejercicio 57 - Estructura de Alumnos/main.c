/* Desarrollar un programa que lea registros de alumnos y procese sus notas. Se ingresarán 10
alumnos de los cuales se ingresa su legajo y 3 notas. Se pide calcular el promedio de las 3 notas
y guardar el promedio de cada alumno para listarlo al final en la forma “legajo:promedio” y
además mostrar el mayor promedio al final de ese listado resaltado.
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct alumnado{
    char nombre;
    int legajo;
    float notas[3];
};

int main()
{
    struct alumnado registros;
    int i = 0, j = 0, k = 0;
    float promedios[10], aux = 0, aux2 = 0, granprom = 0;
    int legajos[10];

    for (i = 0; i < 10; i++){
        fflush(stdin);
        printf("Ingrese el nombre del alumno: ");
        scanf("%c", &registros.nombre);

        fflush(stdin);

        printf("Ingrese el legajo del alumno: ");
        scanf("%i", &registros.legajo);

        legajos[i] = registros.legajo;

        aux = 0;
        aux2 = 0;
        for (j = 0; j < 3; j++){
                printf("Ingrese una calificacion: ");
                scanf("%f", &registros.notas[j]);

                aux = aux + registros.notas[j];
                aux2 = aux/3;
        }
        promedios[i] = aux2;
    }

    for (i = 0; i < 10; i++){
        printf("Legajo %d : Promedio: %.2f\n", legajos[i], promedios[i]);

        if (promedios[i] > granprom){
            granprom = promedios[i];
        }


    }
    printf("\n>>>Promedio mas alto: %.2f<<<", granprom);

    return 0;
}
