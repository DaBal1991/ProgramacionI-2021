/* Desarrolle la función “sumaIntervalo” que reciba dos enteros por parámetro y devuelva por
resultado la suma de todos los números enteros entre dichos valores (inclusive). */

#include <stdio.h>
#include <stdlib.h>

int sumaIntervalo (int, int);

int main()
{
    int num1, num2;

    printf("Ingrese el primer valor del intervalo: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo valor del intervalo: ");
    scanf("%d", &num2);

    printf("El resultado de la suma del intervalo entre %d y %d es: %d",num1, num2, sumaIntervalo(num1,num2));

    return 0;
}

int sumaIntervalo (int x, int y){

    int i;

    for (i = x+1; i <= y; i++){
        x = x + i;
    }

    return x;

}
