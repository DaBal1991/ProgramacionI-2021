/* Escribe un programa que reciba dos números enteros como entrada y escriba el mensaje
"signos opuestos", si al menos uno de los números ingresados es negativo. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A, B;

    printf("Ingrese el valor de A: ");
    scanf("%d", &A);

    fflush(stdin);
    printf("Ingrese el valor de B: ");
    scanf("%d", &B);

    if ((A > 0) && (B > 0))
        printf("Ambos valores son positivos");
    else
        printf("Signos opuestos");

    return 0;
}
