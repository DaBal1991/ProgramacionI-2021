#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define DIM 75

typedef struct{
    int id;
    char marca[DIM];
    char modelo[DIM];
    int precio;
    int descuento;
}registro;

typedef struct{
    int id;
    int precioDescuento;
}registroDescuentos;

/* Desarrollar la función void getData(char* nomArchivo, registro* data); que reciba el nombre
del archivo nomArchivo y el puntero a un vector data. La función debe cargar el archivo y volcarlo en el
vector data. */

void getData(char* nomArchivo, registro* data){

    FILE* archivo;
    char *token;
    int i = 0;
    char cadAux[DIM];

    archivo = fopen(nomArchivo, "rt");

    while(fgets(cadAux, DIM, archivo)){

        token = strtok(cadAux, ",");
        data[i].id = atoi(token);

        token = strtok(NULL, ",");
        strcpy(data[i].marca, token);

        token = strtok(NULL, ",");
        strcpy(data[i].modelo, token);

        token = strtok(NULL, ",");
        data[i].precio = atoi(token);

        token = strtok(NULL, ",");
        data[i].descuento = atoi(token);

        i++;
    }
    fclose(archivo);

    printf("Consigna 1: Carga de Datos\n");
}

/* Desarrollar la función int getMejorModelo(registro* data); que reciba el vector ya cargado y:
a. Muestre por pantalla el contenido del vector.
b. Devuelva el id del registro que es la mejor opción (es la mas barata, incluyendo el descuento por
pago al contado). */

int getMejorModelo(registro* data){

    int i = 0, j = 0, menorPrecio = 100000000, idMejor;
    registroDescuentos ofertas[12];

    printf("Consigna 2\n");
    printf("ID || Marca || Modelo || Precio || Descuento\n");
    for(i = 1; i < 13; i++){
        printf("%d || %s || %s || %d || %d\n",data[i].id, data[i].marca, data[i].modelo, data[i].precio, data[i].descuento);
    }

    for(i = 0, j = 1;i < 12, j < 13; i++, j++){
        ofertas[i].id = data[j].id;
        ofertas[i].precioDescuento = (data[j].precio - ((data[j].precio*data[j].descuento)/100));
    }

    for(int i = 0; i < 12; i++){
        if(ofertas[i].precioDescuento < menorPrecio){
            menorPrecio = ofertas[i].precioDescuento;
            idMejor = ofertas[i].id;
        }
    }

    printf("\nEl vehiculo mas barato, con descuento incluido es el ID: %d", idMejor);
}

/* Desarrollar la función void mostrarOrdenado(registro* data); que reciba el vector data y lo
muestre ordenado según el precio de lista (mostrar con formato: precio de lista, marca,
modelo) */

void mostrarOrdenado(registro* data){

    int i = 0, j = 0, aux;
    char cadAux[DIM];

    for(i = 1; i < 13; i++){
        for(j = 1; j < 13; j++){
            if(data[j].precio < data[j+1].precio){
                aux = data[j].precio;
                data[j].precio = data[j+1].precio;
                data[j+1].precio = aux;

                strcpy(cadAux, data[j].marca);
                strcpy(data[j].marca, data[j+1].marca);
                strcpy(data[j+1].marca, cadAux);

                strcpy(cadAux, data[j].modelo);
                strcpy(data[j].modelo, data[j+1].modelo);
                strcpy(data[j+1].modelo, cadAux);
            }
        }
    }

    printf("Consigna 3\n");
    printf("Precio || Marca || Modelo\n");
    for(i = 1; i < 13; i++){
        printf("%d || %s || %s\n", data[i].precio, data[i].marca, data[i].modelo);
    }
}

int main()
{
    registro data[13], *pData;
    char nomArchivo[20] = "modelos.txt";
    pData = data;

    getData(nomArchivo, data);
    printf("\n\n");
    getMejorModelo(data);
    printf("\n\n");
    mostrarOrdenado(data);

    return 0;
}
