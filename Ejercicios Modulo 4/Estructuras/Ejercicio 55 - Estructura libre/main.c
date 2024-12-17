/* Desarrollar una función que reciba únicamente una estructura por puntero y le cargue los
valores que corresponda. La estructura es libre, pero debe cargar mínimo 2 enteros y un flotante */

#include <stdio.h>
#include <stdlib.h>

struct libre{
    int a;
    int b;
    float c;
}mainLibre;

void carga (struct libre *alala){

    printf("Ingrese un entero: ");
    scanf("%d", &alala->a);

    printf("Ingrese otro entero: ");
    scanf("%d", &alala->b);

    printf("Ingrese un flotante: ");
    scanf("%f", &alala->c);

}


int main()
{
    struct libre mainLibre;

    carga(&mainLibre);

    printf("\n%d / %d / %.2f", mainLibre.a, mainLibre.b, mainLibre.c);


    return 0;
}
