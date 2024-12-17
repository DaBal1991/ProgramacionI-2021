#include <stdio.h>
#include <string.h>
#define CANTVENDEDORES 5
#define CANTZAPATOS 10

int menu(){
    int opt;

    printf("*** Alto Calzados ***\n");
    printf("1- Cargar venta\n");
    printf("2- Mostrar stock\n");
    printf("0- Salir\n");
    scanf("%d",&opt);
    return opt;
}

void cargarStock(int vecStock[]){
    int i;

    for (i=0; i<CANTZAPATOS; i++){
        vecStock[i]=3;
    }
}

void cargarVenta(int matVentas[][CANTZAPATOS], int vecStock[]){
    int i,j, idVendedor, idZapato;

    printf("Ingrese ID de vendedor (0 a 4): ");
    scanf("%d",&idVendedor);
    printf("Ingrese ID de par de zapatos (0 a 9): ");
    scanf("%d",&idZapato);
    if (vecStock[idZapato] > 0){
        matVentas[idVendedor][idZapato]++;
        vecStock[idZapato]--;
    } else {
        printf("Calzado no disponible\n");
    }
}

void mostrarStock(int vecStock[]){
    int i;

    printf("Stock de zapatos:\n");
    for (i=0 ; i<CANTZAPATOS ; i++){
        printf("%d) %d\n",i,vecStock[i]);
    }
}

int main(){
    int ventas[CANTVENDEDORES][CANTZAPATOS];
    int stock[CANTZAPATOS];
    int opcion;

    cargarStock(stock);
    opcion=menu();
    while (opcion != 0){
        switch(opcion){
        case 0:
            break;
        case 1:
            cargarVenta(ventas,stock);
            printf("\n\n");
            break;
        case 2:
            mostrarStock(stock);
            printf("\n\n");
            break;
        default:
            printf("*** OPCION INVALIDA ***\n");
        }
        opcion=menu();
    }
    return 0;
    }
