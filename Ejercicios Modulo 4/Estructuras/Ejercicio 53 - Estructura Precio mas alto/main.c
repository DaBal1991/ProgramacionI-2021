/* Dada la estructura del ejercicio 2, desarrolle una función que reciba dos estructuras producto y
devuelva aquella que tiene el precio más caro. */

#include <stdio.h>
#include <stdlib.h>

struct producto{
    int id;
    float precio;
}producto1, producto2;

void valorMayor (struct producto* id1, struct producto* id2 ){

    if (id1->precio > id2->precio){
        printf("El producto %d es el mas caro", id1->id);
    }
    else
        printf("El producto %d es el mas caro", id2->id);

}

int main()
{
    struct producto producto1;
    struct producto producto2;

    printf("Ingrese el id del primer producto: ");
    scanf("%d", &producto1.id);

    printf("Ingrese el precio del primer producto: ");
    scanf("%f", &producto1.precio);

    printf("Ingrese el id del segundo producto: ");
    scanf("%d", &producto2.id);

    printf("Ingrese el precio del segundo producto: ");
    scanf("%f", &producto2.precio);

    valorMayor(&producto1, &producto2);

    return 0;
}
