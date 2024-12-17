/* Construye un programa, utilizando funciones, que lea como máximo 10 números enteros, el
ciclo termina al introducir un cero. A continuación, lea otro entero y compruebe si ese entero
está o no entre los anteriores. En caso de que se encuentre, contar y emitir el número de veces
que aparece. */

#include <stdio.h>
#include <stdlib.h>


void funcionVector (int base[], int tam){

    int aux, repetido, j = 0, i = 0;

    printf("Ingrese los elementos del vector \n");

    for (i = 0; i < tam; i++){
        printf("Elemento %d del vector: ", i+1);
        scanf("%d", &base[i]);

        if (base[i] == 0)
            i = 11;
    }
    i = 0;

    printf("Ingrese el elemento a buscar repetido: ");
    scanf("%d", &repetido);

    for(i = 0; i < tam; i++){
        base[i];

        if (base[i] == repetido){
            j++;
        }
    }

    printf("Cantidad de repeticiones de %d = %d \n", repetido, j);


}

int main()
{
    int base[10];

    funcionVector(base, 10);

    return 0;
}
