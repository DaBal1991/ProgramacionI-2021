/* 5! (que se lee "factorial de cinco") es igual al producto 5.4.3.2.1. De manera similar, 8!
=8.7.6.5.4.3.2.1. Escribe un programa que calcule el factorial de un número cualquiera que
se ingresa por teclado. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, factorial = 1, n;

    printf("Inserte un numero para sacar su factorial: ");
    scanf("%d", &n);

    for (i = 1;i <= n;i++){

        factorial = factorial*i;

        if (n == 0){
            factorial = 1;
        }

    }

    printf("Su factorial es: %d", factorial);

    return 0;
}
