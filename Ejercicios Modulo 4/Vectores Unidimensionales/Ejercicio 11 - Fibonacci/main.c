/* Escribe un programa que llene un vector de 50 elementos con los números de Fibonacci. Los
primeros números son 1, 1, 2, 3, 5 (cada número es la suma de los dos anteriores). Emite el
contenido del vector por pantalla. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fibonacci[50];
    int acum = 0;
    int i = 0;
    int a = 1, b = 0, c = 0;

    for (i = 0; i < 50; i++){
                   // Numero 1
        c = a + b; // c = 1 + 0
        a = b;     // a = 1 porque b = c
        b = c;     // b = 1 porque c = 1 + 0

        fibonacci[i] = c;

        printf("Fibonacci: %d \n", fibonacci[i]);
    }

    return 0;
}
