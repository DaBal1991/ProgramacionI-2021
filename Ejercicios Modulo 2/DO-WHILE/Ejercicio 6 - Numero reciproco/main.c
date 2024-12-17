/* Escribir un programa que solicite al usuario un número (n) y muestre en
pantalla el recíproco del número (1/n). El programa debe asegurarse de que el usuario no
ingrese un cero. Do-while */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n;

    printf("Ingrese un numero: \n");

    do{
        scanf("%f", &n);

        if (n != 0)
            printf("El reciproco es: %f \n", 1/n);

    }while(n != 0);

    printf("Usted ingreso 0 y por ende el programa da por finalizado\n");

    return 0;
}
