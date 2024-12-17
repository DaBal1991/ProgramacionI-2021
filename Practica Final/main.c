#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define DIM 55

typedef struct{
    int id;
    char marca[DIM];
    char modelo [DIM];
    float precio;
    float descuento;
}registro;

typedef struct{
    int id;
    float descuentoTotal;
}granDescuento;

/* Desarrollar la función void getData(char* nomArchivo, registro* data); que reciba el nombre
del archivo nomArchivo y el puntero a un vector data. La función debe abrir el archivo y cargarlo en el
vector data.*/

void getData(char* nomArchivo, registro* data){

    char reemplazo[256];
    char *token;
    int i = 0;
    int k;
    FILE* archivo;

    archivo = fopen(nomArchivo,"rt");

    while(fgets(reemplazo,256,archivo)){
        printf("%s", reemplazo);

        token = strtok(reemplazo, ",");
        data[i].id = atoi(token);

        token = strtok(NULL, ",");
        strcpy(data[i].marca, token);

        token = strtok(NULL, ",");
        strcpy(data[i].modelo, token);

        token = strtok(NULL, ",");
        data[i].precio = atof(token);

        token = strtok(NULL, ",");
        data[i].descuento = atof(token);

        i++;
    }
    fclose(archivo);




}

/* Desarrollar la función int getMejorModelo(registro* data); que reciba el vector ya cargado y:
a. Muestre por pantalla el contenido del vector.
b. Devuelva el id del registro que es la mejor opción pagando al contado (es decir, la más barata
incluyendo el descuento por pago al contado).*/

int getMejorModelo(registro* data){

    granDescuento calculador[12];
    float precioMenor = 100000;
    int idMejor;

    for(int i = 1; i < 13; i++){
        printf("%d || %s || %s || %.2f || %.2f\n", data[i].id, data[i].marca, data[i].modelo, data[i].precio, data[i].descuento);
    }

    for(int i = 1; i < 13; i++){
        calculador[i].id = data[i].id;
        calculador[i].descuentoTotal = (data[i].precio - (data[i].precio * data[i].descuento));
    }

    for(int i = 0; i < 12; i++){
        if(calculador[i].descuentoTotal < precioMenor){
            idMejor = calculador[i].id;
        }
    }
    printf("\nLa mejor opcion de compra al contado es Id: %d", idMejor);

}

/* Desarrollar la función void mostrarOrdenado(registro* data); que reciba el vector data y lo
muestre ordenado según el precio de lista (mostrar con formato: precio de lista, marca,
modelo) */

void mostrarOrdenado(registro* data){

    int i = 0, j = 0;
    float aux;
    char aux2[55];

    for(i = 1; i < 13; i++){
        for(j = 1; j < 13; j++){
            if(data[j].precio < data[j+1].precio){
                aux = data[j].precio;
                data[j].precio = data[j+1].precio;
                data[j+1].precio = aux;

                strcpy(aux2, data[j].modelo);
                strcpy(data[j].modelo, data[j+1].modelo);
                strcpy(data[j+1].modelo, aux2);

            }
        }
    }

    for(i = 1; i < 13; i++){
        printf("%.2f || %s || %s\n", data[i].precio, data[i].marca, data[i].modelo);
    }

}

int main()
{
    char nomArchivo[30] = "texto/productos.txt";
    registro data[13] = {0}, *pData;

    pData = data;

    getData(nomArchivo, pData);
    printf("\n\n");
    getMejorModelo(data);
    printf("\n\n");
    mostrarOrdenado(data);

    return 0;
}
