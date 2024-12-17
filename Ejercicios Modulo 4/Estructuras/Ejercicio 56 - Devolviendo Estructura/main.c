/* Desarrolle una función que reciba 3 parámetros (de tipo a elección) y devuelva una estructura
con esos valores cargados en sus campos. */

#include <stdio.h>
#include <stdlib.h>

void estructura (int* primer, int* segun, int* tercer){

    struct nueva{
        int alfa;
        int beta;
        int gamma;
    }test;

    test.alfa = *primer;
    test.beta = *segun;
    test.gamma = *tercer;

    printf("Estructura Final: ");
    printf("\nAlfa: %d", test.alfa);
    printf("\nBeta: %d", test.beta);
    printf("\nGamma: %d", test.gamma);

}

int main()
{
    int a = 0, b = 0, c = 0;

    printf("Ingrese tres valores: ");
    scanf("%d" "%d" "%d", &a, &b, &c);

    estructura(&a, &b, &c);

    return 0;
}
