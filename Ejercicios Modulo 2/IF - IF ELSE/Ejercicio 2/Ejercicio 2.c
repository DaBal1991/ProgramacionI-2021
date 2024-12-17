/* Recomendado: Desarrolla un algoritmo que le permita leer un valor cualquiera N y escribir
en la pantalla si dicho número es Positivo, Negativo o 0 (cero). */

#include <stdio.h>

int main()
{
float N;

printf("Ingrese un numero: ");
scanf("%f", &N);

if (N > 0)
    printf ("Es positivo");
else if (N < 0)
    printf ("Es negativo");
else
    printf("Es cero");

return 0;


}
