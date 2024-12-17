#include <stdio.h>

int main()
{
int a, b;

printf("Asigne un valor para A: \n");
scanf("%d", &a);

printf("Asigne un valor para B: \n");
scanf("%d", &b);

printf("La suma entre A y B es: %d \n", a + b);
printf("La resta entre A y B es: %d \n", a - b);
printf("El producto entre A y B es: %d \n", a * b);
printf("La division entre A y B es: %d \n", a/b);
printf("El promedio entre A y B es: %d \n", (a+b)/2);
printf("El doble producto de A menos la mitad de B es: %d \n", (a*a) - (b/2));

}
