/* Desarrolle la función “múltiplo” que recibe dos valores enteros y emite “verdadero” si el
primero es múltiplo del segundo. */

#include <stdio.h>
#include <stdlib.h>

int multiplo (int x, int y){

    if (x%y == 0)
        return 1;
}

int main()
{
    int num1, num2, check;

    printf("Divide el segundo valor ingresado por el primero \n");

    printf("Ingrese el primer valor: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo valor: ");
    scanf("%d", &num2);

    check = multiplo(num2, num1);

    if (check == 1)
        printf("Verdadero");
    else
        printf("Falso");

    return 0;
}
