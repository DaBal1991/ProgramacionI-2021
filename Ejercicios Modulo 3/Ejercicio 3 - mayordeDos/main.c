/* Desarrolle la función “mayorDeDos” que reciba dos enteros por parámetro y muestre por
pantalla al mayor de ellos. Luego modifíquela a “getMayorDeDos” para que devuelva el mayor
como resultado. */

#include <stdio.h>
#include <stdlib.h>

void mayorDeDos (int x, int y){

    if (x > y)
        printf("%d es mayor que %d \n", x, y);
    else
        printf("%d es mayor que %d \n", y, x);

}

int getMayorDeDos (int a, int b){

    if (a > b)
        return a;
    else
        return b;

}

int main()
{
    int num1, num2;

    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);

    mayorDeDos(num1, num2);
    printf("El mayor es: %d", getMayorDeDos(num1, num2));

    return 0;
}
