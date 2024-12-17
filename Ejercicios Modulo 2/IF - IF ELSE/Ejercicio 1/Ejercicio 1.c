/* Recomendado: Desarrolla un algoritmo que le permita leer un valor entero cualquiera N y
escribir si dicho número es par o impar. */

#include <stdio.h>

int main()
{


int N;

printf("Ingrese un numero: ");
scanf("%d", &N);

if (N%2 == 0)
    printf("Es par \n");
else
    printf("Es impar \n");

return 0;
}
