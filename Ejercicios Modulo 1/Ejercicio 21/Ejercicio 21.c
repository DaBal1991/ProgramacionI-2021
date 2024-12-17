#include <stdio.h>

int main()
{
float lado1, lado2;

printf("Ingrese la medida del lado mas largo del rectangulo:");
scanf("%f", &lado1);

printf("Ingrese la medida del lado mas corto del rectangulo:");
scanf("%f", &lado2);

printf("El perimetro del rectangulo es: %.1f \n", lado1*2 + lado2*2);
printf("La superficie del rectangulo es %.1f \n", lado1*lado2);

return 0;


}
