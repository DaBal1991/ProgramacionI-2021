/* Recomendado: Se ingresa un número de hasta 5 cifras y se indica si es o no capicúa */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int num1, resto1, num2, resto2, num3, resto3, num4, resto4;

    printf("Ingrese un numero de hasta cinco cifras: ");
    scanf("%d", &num);
    fflush(stdin);

    num1 = num/10000; //Extrae el primero numero de cinco cifras
    resto1 = num%10000; // Extra el resto del numero

    num2 = resto1/1000; // Extrae el segundo numero de cinco cifras
    resto2 = resto1%1000; // Extra el resto del numero

    num3 = resto2/100; // Extrae el tercer numero de cinco cifras
    resto3 = resto2%100; // Extrae el resto del numero

    num4 = resto3/10; // Extrae el cuarto numero de cinco cifras
    resto4 = resto3%10; // Extrae el quinto numero de cinco cifras

    if ((num >= 10000) && (((num1 == resto4) && (num4 == num2))))
            printf("Es capicua");
    else if ((num >= 1000) && ((num2 == resto4) && (num3 == num4)))
            printf("Es capicua");
    else if ((num >= 100) && (num3 == resto4))
            printf("Es capicua");
    else if ((num >= 10) && (num4 == resto4))
            printf("Es capicua");
    else
            printf("No es capicua");


    return 0;
}
