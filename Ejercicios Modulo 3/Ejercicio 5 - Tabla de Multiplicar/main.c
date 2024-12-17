/* Desarrolle la función “tablaDeMultiplicar” que reciba un entero por parámetro y muestre
por pantalla su tabla de multiplicar de 0 a 10. */

#include <stdio.h>
#include <stdlib.h>

int tablaDeMultiplicar (int);

int main()
{
    int num;

    printf("Ingrese un numero para consultar su tabla de multiplicar del 1 al 10: ");
    scanf("%d", &num);

    tablaDeMultiplicar(num);

    return 0;
}




int tablaDeMultiplicar (int x){

    int i, multiplicador;

    for (i = 0; i <= 10; i++){
        multiplicador = x*i;
        printf("%d x %d = %d \n", x, i, multiplicador);

    }

}
