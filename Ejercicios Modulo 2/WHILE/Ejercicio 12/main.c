/* Escribí un programa para mostrar una tabla de conversión entre grados
Fahrenheit y grados Celsius. Sugerencia: celsius = (fahrenheit - 32) * 5/9. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float celsius, fahrenheit;
    float contador;

    printf("Ingrese grados fahrenheit: ");
    scanf("%f", &fahrenheit);

    printf("Fahrehneit\tCelsius\n");
    while (contador <= fahrenheit){

        celsius = ((contador - 32) * 5/9);
        printf("%1.1f\t\t%1.1f\n", contador, celsius);
        contador++;
    }
    return 0;
}
