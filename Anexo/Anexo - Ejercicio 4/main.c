/* Se desea procesar las compras realizadas por los clientes de una empresa mayorista. La
empresa tiene un grupo de N clientes. El valor de N se ingresa por teclado. Para cada uno,
se ingresa el código de cliente, la zona de compra (puede ser ‘a’, ‘b’, ‘c’, ‘d’, ‘e’ o ‘f’) y una
serie de importes correspondientes a las compras que realizaron. El número de compras por
cada cliente es variable y se ingresa un -1 para terminar el ingreso de las compras. La
empresa tiene un sistema especial de premios para los clientes de algunas zonas. Si el
cliente reside en zona ‘a’ o ‘b’ se le bonifica el 20% de la compra. Si reside en ‘c’ la
bonificación es del 10%. Si la zona es ‘d’ o ‘e’ participan en un sorteo de un automóvil. Se
desea realizar un programa en C que:
a. Para cada cliente emitir el importe total de compras sin la bonificación, con la
bonificación y si ha participado o no del sorteo.
b. Emitir el total de ventas de la zona ‘f’.
c. Emitir un mensaje indicando cuantos clientes corresponden a la zona ‘a’ o ‘c’. */

#include <stdio.h>
#include <stdlib.h>

float calcularBonif (char zona, float ventas);
void boniFinal (char* zona, float* acum);

int main()
{
    int N, i = 0, codCliente, contadorF = 0, cuentaVentas = 0, contadorA = 0, contadorC = 0;
    char zonaCompra;
    float importeCompra, acum = 0;

    printf("Ingrese la cantidad de clientes: ");
    scanf("%d", &N);

    for(i = 0; i < N; i++){

        printf("Ingrese el codigo de cliente: ");
        scanf("%d", &codCliente);
        fflush(stdin);

        printf("Ingrese la zona de compra: ");
        scanf("%c", &zonaCompra);
        fflush(stdin);

        while (importeCompra != -1){
            acum = acum + importeCompra;

            printf("Ingrese importe de la compra: ");
            scanf("%f", &importeCompra);
            fflush(stdin);

            if (importeCompra != -1){
                cuentaVentas++;
                if (zonaCompra == 'a'){
                    contadorA++;
                }
                if (zonaCompra == 'c'){
                    contadorC++;
                }
                if (zonaCompra == 'f'){
                    contadorF++;
                }
            }
        }
        importeCompra = 0;

        printf("\nCliente %d ha comprado %.2f \n", codCliente, acum);

        boniFinal(&zonaCompra, &acum);

        acum = 0;

    }

    printf("Total de ventas en zona A: %d \n", contadorA);
    printf("Total de ventas en zona C: %d \n", contadorC);
    printf("Total de ventas en zona F: %d \n", contadorF);
    printf("Cantidad de ventas totales: %d\n", cuentaVentas);

    return 0;
}

float calcularBonif (char zona, float ventas){

        float bonificaciones;

        if (zona == 'a' || zona == 'b')
            bonificaciones = (ventas - ((20*ventas)/100));
        if (zona == 'c')
            bonificaciones = (ventas - ((10*ventas)/100));

        return (bonificaciones);

}

void boniFinal (char* zona, float* acum){

        switch(*zona){
            case 'a':
                printf("Total con bonificacion en zona A y B: %.1f\n",calcularBonif(*zona, *acum));
                break;
            case 'b':
                printf("Total con bonificacion en zona A y B: %.1f\n",calcularBonif(*zona, *acum));
                break;
            case 'c':
                printf("Total con bonificacion en zona C: %.1f\n",calcularBonif(*zona, *acum));
                break;
            case 'd':
            case 'e':
                printf("Participa por un auto\n");
                break;
            case 'f':
                break;
        }
}
