/* Un mayorista de bebidas necesita un programa para administrar el stock de sus productos. Los
productos que vende se categorizan en: bebidas alcoh�licas, bebidas gaseosas y aguas
saborizadas. Dado que cada categor�a tiene especificaciones t�cnicas, es necesario tener alguna
estructura que contenga dichos datos (como descripci�n del tipo de gaseosa, concentraci�n de
az�car, concentraci�n alcoh�lica y lista de bebidas). Lo que se pide es que el programa pueda:
a) Cargar categor�as de bebidas
b) Cargar bebidas: descripci�n, marca, stock (por ejemplo, Pepsi, Pepsi CO, 15000 unidades).
c) Venta: por cada venta se registra la cantidad de unidades vendidas y las que queden
d) Mostrar por pantalla las ventas realizadas y stock remanente por categor�a de bebida y
bebida. */

#include <stdio.h>
#include <stdlib.h>

struct categoria{
    char tipo[30];
    float concentracion;
    int listado;
};

struct bebida{
    char descripcion[100];
    char marca[30];
    int stock;
};

struct ventas{
    struct categoria jijo1;
    struct bebida jijo2;
};

void cargaCategoria(struct categoria (*categorias)[3]){

    int acum = 0;

    for(int i = 0; i < 3; i++){

        fflush(stdin);
        printf("\nIngrese el tipo de bebida: ");
        gets(categorias[i]->tipo);

        printf("\nIngrese la concentracion alcoholica/azucar: ");
        scanf("%f", &categorias[i]->concentracion);

        fflush(stdin);
        printf("\nIngrese listado de bebidas: ");
        scanf("%d", &categorias[i]->listado);

        printf("\nTipo: %s // En lista: %d\n", categorias[i]->tipo, categorias[i]->listado);
    }
}

void cargarBebidas(struct categoria (*categorias)[3], struct bebida* bebidas){

    for(int i = 0; i < 3; i++){
            fflush(stdin);
            printf("\nCategoria: %s", categorias[i]->tipo);

            for(int j = 0; j < categorias[i]->listado; j++){

                fflush(stdin);
                printf("\nIngrese descripcion: ");
                gets(bebidas[j].descripcion);

                fflush(stdin);
                printf("\nIngrese marca: ");
                gets(bebidas[j].marca);

                printf("\nIngrese stock: ");
                scanf("%d", &bebidas[j].stock);
            }
    }

}

int main()
{
    struct categoria categorias[3];
    struct bebida bebidas;

    cargaCategoria(&categorias);
    cargarBebidas(&categorias, &bebidas);

    return 0;
}
