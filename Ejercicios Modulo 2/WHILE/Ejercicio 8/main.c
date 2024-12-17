/* Desarrolle un algoritmo que le permita leer un valor entero positivo N y decir si es primo o
no. An�lisis: Un n�mero es primo cuando es divisible tan solo por la unidad y por si mismo.
Para determinar si un n�mero es primo o no se realiza la verificaci�n de la divisi�n de dicho
n�mero con el rango de datos comprendidos entre el dos y la mitad del n�mero. Si existe
alg�n valor de dicho rango que divide exactamente a nuestro n�mero entonces este no ser�
primo. Si al finalizar dicha revisi�n no hay ning�n valor que lo divida exactamente entonces
nuestro n�mero ser� primo. La revisi�n se hace hasta la mitad del n�mero ya que de la
mitad hacia arriba ning�n valor lo divide exactamente.*/

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
