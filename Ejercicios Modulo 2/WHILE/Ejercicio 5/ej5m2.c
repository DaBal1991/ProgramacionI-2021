#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nota, acumulador=0, contador=0, maximo=0, minimo=0;

    printf("Ingrese una nota:");
    scanf("%d",&nota);
    maximo=nota;
    minimo=nota;

    while (nota>=0){
        acumulador+=nota;
        contador++;
        if(nota>maximo){
            maximo=nota;
        }else {
            if (nota<minimo){
                minimo=nota;
            }
        }
        printf("Ingrese otra nota:");
        scanf("%d",&nota);
    }

    if (contador!=0){
        printf("Promedio: %f\n",acumulador/(float)contador);
        printf("Suma: %d\n",acumulador);
        printf("Maximo=%d\tMinimo=%d\n",maximo,minimo);
    } else {
        printf("no se ingresaron datos\n");
    }


    return 0;
}
