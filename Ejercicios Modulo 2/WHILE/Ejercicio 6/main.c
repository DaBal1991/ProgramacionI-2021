/* Desarrolle un algoritmo que al ingresar un numero N mayor a cero, calcule el cuadrado de
cada número entero desde cero hasta ese N y lo muestre por pantalla */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int N, contador = 0;

    printf("Ingrese un valor N: \n");
    scanf("%d", &N);

    while ((N > 0) && (contador < N)){
        contador++;
        printf("El cuadrado de %d es: %d \n", contador, contador*contador);

        }

    printf("Ingreso cero y por tanto, el programa no corre \n");


    return 0;
}
