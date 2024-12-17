/* Desarrolle la función “potencia” que reciba por parámetros un entero X y una potencia Y; y
devuelva por resultado X a la Y */

#include <stdio.h>
#include <stdlib.h>

int potencia (int x, int y){

    int i;
    int acum = x;

    for(i = 1; i < y; i++){
        acum = acum*x;
    }

    return acum;

}

int main()
{
    int base, exponente;

    printf("Ingrese la base: ");
    scanf("%d", &base);

    printf("Ingrese la potencia: ");
    scanf("%d", &exponente);

    printf(("La base %d, elevada al exponente %d, es igual a: %d"), base, exponente, potencia(base, exponente));

    return 0;
}
