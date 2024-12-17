#include <stdio.h>

int main()
{
float kilos, precio;

printf("Ingrese el precio de un kilo: \n");
scanf("%f", &precio);

printf("Ingrese la cantidad de kilos comprados : \n");
scanf("%f", &kilos);

printf("Cantidad comprada: %.0f \n", kilos/precio);
printf("Precio a pagar: %.2f \n", precio*kilos );

return 0;
}
