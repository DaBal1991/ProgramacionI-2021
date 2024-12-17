#include <stdio.h>
#include <math.h>

int main()
{
float superficieCuadrado;

printf("Ingrese la superficie del cuadrado:");
scanf("%f", &superficieCuadrado);

printf("El perimetro del cuadrado vale: \n %.1f", sqrt(superficieCuadrado)*4);

return 0;
}
