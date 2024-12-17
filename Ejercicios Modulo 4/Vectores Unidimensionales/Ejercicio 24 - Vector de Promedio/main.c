/* Desarrolle una función que pueda procesar cualquier vector de enteros, y emita el promedio de
los valores que estén cargados. */

#include <stdio.h>
#include <stdlib.h>

void promedio (int base[], int tam){

    int i = 0, acum = 0;
    float prom = 0;

    printf("Ingrese el tamaño del vector: ");
    scanf("%d", &tam);

    for(i = 0; i < tam; i++){
        printf("Ingrese los elementos del vector: ");
        scanf("%d", &base[i]);
    }

    for (i = 0; i < tam; i++){
        acum = acum + base[i];
    }

    prom = acum/(float)tam;

    printf("El promedio de los elementos es: %.1f", prom);

}

int main()
{
    int tam = 0;
    int base[tam];

    promedio(base, tam);

    return 0;
}
