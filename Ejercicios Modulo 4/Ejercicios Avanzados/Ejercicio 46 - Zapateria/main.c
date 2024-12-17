/* La zapatería de barrio Alto Calzado necesita un programa para administrar su local. Para ello el
programa debe cumplir las siguientes funciones:
a) cargar los datos de sus 5 vendedores (DNI, nombre, apellido, genero, paresVendidos).
b) cargar los 10 tipos de calzado que venden (idCalzado, descripción, su stock remanente).
c) Al vender un par de zapatillas
Armar un programa con las estructuras necesarias para contabilizar las ventas hechas por los
vendedores (ingresando DNI y idCalzado de la venta) y mantenga actualizado el stock
remanente de pares de zapatillas. */

#include <stdio.h>
#include <stdlib.h>

struct vendedores{
    int dni;
    char nombre[20];
    char apellido[20];
    char genero;
    int paresVendidos;
};

struct calzados{
    int idCalzado;
    char descripcion[40];
    int stock;
};

struct ventas{
    int DNI;
    int idShoes;
}granVenta;

int main()
{
    struct vendedores vendedor[2];
    struct calzados stockCalzado[2];
    int i = 0, j = 0, k = 0, stockFinal = 0, contador = 0, z = 0;

    for(i = 0; i < 2; i++){

        printf("Vendedor %d\n", i+1);

        fflush(stdin);
        printf("Ingrese el DNI del vendedor: ");
        scanf("%d", &vendedor[i].dni);

        fflush(stdin);
        printf("\nIngrese el nombre del vendedor: ");
        gets(vendedor[i].nombre);

        fflush(stdin);
        printf("\nIngrese el apellido del vendedor: ");
        gets(vendedor[i].apellido);

        fflush(stdin);
        printf("\nIngrese el genero del vendedor: ");
        scanf("%c", &vendedor[i].genero);

        printf("\nIngrese la cantidad de pares vendidos por el vendedor: ");
        scanf("%d", &vendedor[i].paresVendidos);
        fflush(stdin);

        printf("\nDNI: %d // Nombre: %s // Apellido: %s // Genero: %c // Cantidad de Pares Vendidos: %d\n", vendedor[i].dni, vendedor[i].nombre,vendedor[i].apellido, vendedor[i].genero, vendedor[i].paresVendidos);
        printf("\n");
    }

    for(j = 0; j < 2; j++){
        printf("Calzado %d\n", j+1);

        fflush(stdin);
        printf("Ingrese el ID del calzado: ");
        scanf("%d", &stockCalzado[j].idCalzado);

        fflush(stdin);
        printf("\nIngrese descripcion del calzado: ");
        gets(stockCalzado[j].descripcion);

        fflush(stdin);
        printf("\nIngrese el stock del zapato: ");
        scanf("%d", &stockCalzado[j].stock);

        printf("\n");
    }

    printf("Ventas\n");
    while(k != -1){

        printf("Ingrese el DNI del vendedor...");
        scanf("%d", &granVenta.DNI);

        for(int h = 0; h < 2; h++){
            if (granVenta.DNI == vendedor[h].dni){

                z = vendedor[h].paresVendidos;

                if (z == 0){
                    printf("Ya se cargaron todas las ventas de este vendedor, ingrese otro vendedor...\n");
                }

                while(z != 0){
                    printf("Ingrese el ID del calzado...");
                    scanf("%d", &granVenta.idShoes);

                    for(int m = 0; m < 2; m++){
                        if(granVenta.idShoes == stockCalzado[m].idCalzado){

                            stockFinal = (stockCalzado[m].stock) - 1;
                            stockCalzado[m].stock = stockFinal;

                            printf("ID: %d\n", granVenta.idShoes);
                            printf("Stock restante: %d\n", stockFinal);
                            z--;
                            printf("Ventas restantes del vendedor: %d \n", z);

                            if (z == 0){
                                vendedor[h].paresVendidos = 0;
                            }
                        }
                    }
                }
            }
        }
        printf("Continuar?");
        scanf("%d", &k);
    }

    return 0;
}
