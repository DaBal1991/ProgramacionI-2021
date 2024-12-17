/* Desarrolle un algoritmo que le permita leer un valor entero positivo N y
calcular su cuadrado sumando N veces N */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int N, cuadrado = 0, acumulador = 0, potencia;

    printf("Designe valor a N: ");
    scanf("%d", &N);

    potencia = pow(N,2);

        while (cuadrado < potencia){
                    cuadrado = cuadrado + N;
                }

    printf("El cuadrado es: %d", cuadrado);

    return 0;

    }

