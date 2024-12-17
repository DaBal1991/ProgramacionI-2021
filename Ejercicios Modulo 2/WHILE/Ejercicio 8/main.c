/* Desarrolle un algoritmo que le permita leer un valor entero positivo N y decir si es primo o
no. Análisis: Un número es primo cuando es divisible tan solo por la unidad y por si mismo.
Para determinar si un número es primo o no se realiza la verificación de la división de dicho
número con el rango de datos comprendidos entre el dos y la mitad del número. Si existe
algún valor de dicho rango que divide exactamente a nuestro número entonces este no será
primo. Si al finalizar dicha revisión no hay ningún valor que lo divida exactamente entonces
nuestro número será primo. La revisión se hace hasta la mitad del número ya que de la
mitad hacia arriba ningún valor lo divide exactamente.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, div = 2, resto = 0;

    printf("Ingrese un valor: \n");
    scanf("%d", &N);

    while (div <= N){
            if (N%div == 0){
                resto++; // Cuenta las division es exacta
            }
            div++;
    }

    if(resto == 2){
        printf("No es primo \n"); // Si la division es exacta 2 veces, el numero no es primo (empieza a contar desde el 2 para dividir)
    }
    else{
        printf("Es primo \n"); // Si solo se divide asi mismo, es primo
    }

    return 0;
}
