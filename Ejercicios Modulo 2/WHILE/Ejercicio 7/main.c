/* Desarrolle un algoritmo que le permita leer un valor entero positivo N y
calcule su factorial. Análisis: El tipo de operación que se repite en este ejercicio es la
multiplicación por tanto hay que iniciar una variable con el valor de 1 ya que este valor no
afecta el resultado final. Dicha variable es S y como generador de la serie de términos a
multiplicar se tiene la misma variable que llevara la cuenta del número de tareas que llevara
la cuenta del número de tareas. */

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
