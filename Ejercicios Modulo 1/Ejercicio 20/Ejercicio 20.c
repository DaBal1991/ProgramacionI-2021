#include <stdio.h>

int main()
{
float angulo1, angulo2, angulores;

printf("Ingrese el primer angulo del triangulo: \n");
scanf("%f", &angulo1);

printf("Ingrese el segundo angulo del triangulo: \n");
scanf("%f", &angulo2);

printf("El tercer angulo es: %.1f", 180 - angulo1 - angulo2);




}
