/* Desarrolle un algoritmo que le permita leer un valor entero positivo N y
calcule su factorial. An�lisis: El tipo de operaci�n que se repite en este ejercicio es la
multiplicaci�n por tanto hay que iniciar una variable con el valor de 1 ya que este valor no
afecta el resultado final. Dicha variable es S y como generador de la serie de t�rminos a
multiplicar se tiene la misma variable que llevara la cuenta del n�mero de tareas que llevara
la cuenta del n�mero de tareas. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, S = 1, factor, factorial = 1;

    printf("Ingrese un valor N positivo: \n");
    scanf("%d", &N);

    while ((N > 0) && (S <= N)){
            factorial = factorial * S;
            S++;

    }

    printf("Factorial de %d: %d\n", N, factorial);
    return 0;
}
