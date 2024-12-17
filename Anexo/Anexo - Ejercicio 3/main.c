/* Se procesan los datos correspondientes a los art�culos de venta de una empresa de
electrodom�sticos. De cada art�culo se ingresa el c�digo del art�culo, precio del art�culo y
stock del art�culo. No se conoce la cantidad de art�culos que se procesan y el ingreso de
datos finaliza con c�digo de art�culo -1. Se pide calcular:

a. La cantidad de art�culos ingresados

b. Mostrar el mensaje �El articulo X est� en el rango 120-360� si su stock est� entre
120 y 360

c. El art�culo que tiene el m�nimo de stock, el que tiene el m�ximo stock y el articulo
de m�ximo de precio de venta

d. El porcentaje de art�culos que tengan precio de venta inferior a $3600 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int codigoArt, stock, cantidadArt = 0, maxStock = 0, minStock = 999999, maxStockCod = 0, minStockCod = 0, maxPrecio = 0, maxPrecioCod = 0, cuentaPrecio = 0, cuentaBarato = 0;
    float precioArt, porcentual3600;

    printf("Ingrese el codigo del producto: ");
    scanf("%d", &codigoArt);
    fflush(stdin);

    while (codigoArt != -1){

        if (codigoArt != -1){
            cantidadArt++;
        }

        printf("Ingrese el precio del articulo: ");
        scanf("%f", &precioArt);
        fflush(stdin);

        cuentaPrecio++;

        if (precioArt > maxPrecio){
            maxPrecio = precioArt;
            maxPrecioCod = codigoArt;
        }
        if (precioArt < 3600){
            cuentaBarato++;
        }

        printf("Ingrese el stock del producto: ");
        scanf("%d", &stock);
        fflush(stdin);

        if (stock >= 120 && stock <= 360){
            printf("El articulo %d tiene un stock entre 120 y 360 unidades\n", codigoArt);
        }

        if (stock > maxStock){
            maxStock = stock;
            maxStockCod = codigoArt;
        }
        if (stock < minStock){
            minStock = stock;
            minStockCod = codigoArt;
        }

        porcentual3600 = ((cuentaBarato*100) / cuentaPrecio);

        printf("Ingrese el codigo del producto: ");
        scanf("%d", &codigoArt);
        fflush(stdin);
    }

    printf("Se han ingresado un total de %d articulos\n", cantidadArt);
    printf("El producto con mayor stock es %d con %d unidades\n", maxStockCod, maxStock);
    printf("El producto con menor stock es %d con %d unidades\n", minStockCod, minStock);
    printf("El producto mas caro es %d con un precio de %d \n", maxPrecio, maxPrecioCod);
    printf("El porcentaje de productos por debajo de $3600 es %.1f", porcentual3600);


    return 0;
}
