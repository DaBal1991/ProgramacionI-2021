/* Mc Donald necesita registrar los ingresos de sus 5 sucursales de Mar Del Plata por semana. Para
ello necesita un programa que pueda cargar, en forma aleatoria, los ingresos por día de cada
sucursal. Una vez cargados los datos, se pide:
a) Calcular qué sucursal tuvo más ingresos en un día y cual fue ese día
b) Calcular qué sucursal tuvo más ingresos en la semana
c) Calcular el promedio de ventas por día en Mar Del Plata
d) Calcular el promedio de ventas de Mc Donald en toda la semana laboral */

#include <stdio.h>
#include <stdlib.h>
#define SUCURSALES 5
#define DIAS 7

void b(int sucursalesYdias[][DIAS]){

    int acum1 = 0, acum2 = 0, acum3 = 0, acum4 = 0, acum5 = 0;

    for(int j = 0; j < DIAS; j++){
        acum1 = acum1 + sucursalesYdias[0][j];
    }

    for(int j = 0; j < DIAS; j++){
        acum2 = acum2 + sucursalesYdias[1][j];
    }

    for(int j = 0; j < DIAS; j++){
        acum3 = acum3 + sucursalesYdias[2][j];
    }

    for(int j = 0; j < DIAS; j++){
        acum4 = acum4 + sucursalesYdias[3][j];
    }

    for(int j = 0; j < DIAS; j++){
        acum5 = acum5 + sucursalesYdias[4][j];
    }

    if ((acum1 > acum2) && (acum1 > acum3) && (acum1 > acum4) && (acum1 > acum5)){
        printf("\nLa sucursal 1 acumulo mas dinero...");
        printf("\nTotal Sucursal 1: %d", acum1);
    }
    if ((acum2 > acum1) && (acum2 > acum3) && (acum2 > acum4) && (acum2 > acum5)){
        printf("\nLa sucursal 2 acumulo mas dinero...");
        printf("\nTotal Sucursal 2: %d", acum2);
    }
    if ((acum3 > acum1) && (acum3 > acum2) && (acum3 > acum4) && (acum3 > acum5)){
        printf("\nLa sucursal 3 acumulo mas dinero...");
        printf("\nTotal Sucursal 3: %d", acum3);
    }
    if ((acum4 > acum1) && (acum4 > acum2) && (acum4 > acum3) && (acum4 > acum5)){
        printf("\nLa sucursal 4 acumulo mas dinero...");
        printf("\nTotal Sucursal 4: %d", acum4);
    }
    if ((acum5 > acum1) && (acum5 > acum2) && (acum5 > acum3) && (acum5 > acum4)){
        printf("\nLa sucursal 5 acumulo mas dinero...");
        printf("\nTotal Sucursal 5: %d", acum5);
    }

}

void c(int sucursalesYdias[][DIAS]){

    int acum1 = 0, acum2 = 0, acum3 = 0, acum4 = 0, acum5 = 0, acum6 = 0, acum7 = 0;
    int prom = 0;

    for(int j = 0; j < SUCURSALES; j++){
        acum1 = acum1 + sucursalesYdias[j][0];
    }

    for(int j = 0; j < SUCURSALES; j++){
        acum2 = acum2 + sucursalesYdias[j][1];
    }

    for(int j = 0; j < SUCURSALES; j++){
        acum3 = acum3 + sucursalesYdias[j][2];
    }

    for(int j = 0; j < SUCURSALES; j++){
        acum4 = acum4 + sucursalesYdias[j][3];
    }

    for(int j = 0; j < SUCURSALES; j++){
        acum5 = acum5 + sucursalesYdias[j][4];
    }
    for(int j = 0; j < SUCURSALES; j++){
        acum6 = acum6 + sucursalesYdias[j][5];
    }
    for(int j = 0; j < SUCURSALES; j++){
        acum7 = acum7 + sucursalesYdias[j][6];
    }


    printf("\n");
    printf("\n");
    printf("Promedio de ventas en el dia 1: %d\n", acum1/SUCURSALES);
    printf("Promedio de ventas en el dia 2: %d\n", acum2/SUCURSALES);
    printf("Promedio de ventas en el dia 3: %d\n", acum3/SUCURSALES);
    printf("Promedio de ventas en el dia 4: %d\n", acum4/SUCURSALES);
    printf("Promedio de ventas en el dia 5: %d\n", acum5/SUCURSALES);
    printf("Promedio de ventas en el dia 6: %d\n", acum6/SUCURSALES);
    printf("Promedio de ventas en el dia 7: %d\n", acum7/SUCURSALES);

}

void d(int sucursalesYdias[][DIAS]){

    float promedioTotal;
    int acum = 0;

    for(int i = 0; i < SUCURSALES; i++){
        for(int j = 0; j < DIAS; j++){
            acum = acum + sucursalesYdias[i][j];
        }
    }

    promedioTotal = (float)acum/(float)(SUCURSALES*DIAS);

    printf("\n\n");
    printf("Promedio total de ventas en la semana: %.1f", promedioTotal);

}

void mostrarTabla(int sucursalesYdias[][DIAS]){

    for(int i = 0; i < SUCURSALES; i++){
        for (int j = 0; j < DIAS; j++){
            printf("%d:%d = %d\t\n", i+1, j+1, sucursalesYdias[i][j]);
        }
        printf("\n");
    }

}


int main()
{
    int sucursalesYdias[SUCURSALES][DIAS] = {0};
    int control = 1;
    int i = 0;
    int j = 0;
    int monto = 0, granMonto = 0, granDia = 0, granSucursal = 0;

    while(control != 0){
        printf("Ingrese sucursal: ");
        scanf("%d", &i);

        printf("Ingrese el dia: ");
        scanf("%d", &j);

        printf("Ingrese el monto generado: ");
        scanf("%d", &monto);

        if (granMonto < monto){
            granMonto = monto;
            granSucursal = i+1;
            granDia = j+1;
        }

        sucursalesYdias[i][j] = monto;

        mostrarTabla(sucursalesYdias);

        printf("\nDesea ingresar otro dato? Ingrese 0 para cerrar, cualquier otro numero para continuar: ");
        scanf("%d", &control);
    }

    printf("\nLa sucursal que mas vendio en un dia fue la %d, el dia %d, con un total de %d\n", granSucursal, granDia, granMonto);
    b(sucursalesYdias);
    c(sucursalesYdias);
    d(sucursalesYdias);



    return 0;
}
