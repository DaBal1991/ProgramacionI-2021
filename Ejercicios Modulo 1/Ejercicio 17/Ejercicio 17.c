#include <stdio.h>

int main()
{
float cm;

printf("Ingrese la cantidad de centimetros: \n");
scanf("%f", &cm);

printf("Cantidad de centimetros ingresada: %.1f \n", cm);
printf("Equivalente en pulgadas: %.1f \n", cm/2.54);
printf("Equivalente en pies: %.1f \n", cm/30.48);



}
