/*  Dada la estructura struct producto {int id; float precio}; desarrollar una función
que reciba dicha estructura como puntero y aplique un descuento del 20% al precio. */

#include <stdio.h>
#include <stdlib.h>

struct producto{
    int id;
    float precio;
};

void descuento(struct producto *aCalcular){

    aCalcular->precio*= 0.8;

}

int main()
{
    struct producto nuevoProducto;

    printf("Ingrese id del producto: ");
    scanf("%d", &nuevoProducto.id);

    printf("Ingrese el precio del producto: ");
    scanf("%f", &nuevoProducto.precio);
    descuento(&nuevoProducto);

    printf("Descuento: %.2f:", nuevoProducto.precio);

    return 0;
}
