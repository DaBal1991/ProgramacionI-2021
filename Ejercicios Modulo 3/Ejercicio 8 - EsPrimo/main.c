/* Desarrolle la función “esPrimo” que devuelva verdadero si el numero pasado por parámetro es
un numero primo. */

#include <stdio.h>
#include <stdlib.h>

int esPrimo(int N){

    int i = 0, resto = 0;

    for (i = 1; i <= N; i++){
        if (N%i == 0){
            resto++;
        }

    }

    if (resto == 2)
        return 1;

}

int main(void){

    int num, check;

    printf("Es primo? \n");
    printf("Ingrese un numero entero: ");
    scanf("%d", &num);

    check = esPrimo(num);

    if (check == 1)
        printf("Verdadero");
    else
        printf("Falso");

    return 0;

}
