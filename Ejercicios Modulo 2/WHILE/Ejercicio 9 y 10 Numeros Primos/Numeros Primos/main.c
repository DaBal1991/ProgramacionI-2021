#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Estructura para revelar N cantidad de primos

int main()
{
    int CantNumeroPrimo = 0, i = 0, resto = 0, ContPrimos = 1, numero = 2, PruebaPrimo;

    printf("Ingrese cantidad de numeros primos deseados: ");
    scanf("%d", &CantNumeroPrimo);

    while (ContPrimos <= CantNumeroPrimo){
        resto = 0;

            for (i = 1; i <= numero && resto <= 2 ; i++){
            PruebaPrimo = numero%i;

            if (PruebaPrimo == 0)
                resto++;
            }

        if (resto == 2){
            ContPrimos++;
            printf("%d\n", numero);
        }

        numero++;

    }

    return 0;
}



/* ESTRUCTURA PARA DETERMINAR SI UN NUMERO ES PRIMO O NO
{
    int numero = 0, i = 0, resto = 0;

    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    for (i = 1; i <= numero; i++){
        if (numero%i == 0){
            resto++;
        }

    }

    if (resto == 2)
        printf("Es primo \n");
    else if (numero == (0 || 1))
        printf("No es primo \n");
    else
        printf("No es primo \n");

    return 0;
}
*/
