/* Recomendado: Construye un programa que ingrese los valores de los lados de un triángulo:
a) Valide si las medidas pueden formar un triángulo y b) detecte y muestre un mensaje
correspondiente a su tipo (EQUILÁTERO, ISÓSCELES, O ESCALENO) */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c;

    printf("Ingrese primer lado: ");
    scanf("%f", &a);

    fflush(stdin);
    printf("Ingrese el segundo lado: ");
    scanf("%f", &b);

    fflush(stdin);
    printf("Ingrese el tercer lado: ");
    scanf("%f", &c);

    if ((a + b > c)){
        printf("Es posible armar un triangulo \n");
        if ((a == b) && (b == c))
            printf("Equilatero \n");
            else if (((a == b)) || (c == a) || (b ==c))
                printf("Isosceles \n");
                else if ((a != b) || (b != c) || (c !=a))
                    printf("Escaleno \n");
    }
    else{
        printf("No es posible armar un triangulo \n");
        printf("La suma de los dos primeros lados debe ser superior al tercero para poder formar un triangulo...");
    }

    return 0;
}
