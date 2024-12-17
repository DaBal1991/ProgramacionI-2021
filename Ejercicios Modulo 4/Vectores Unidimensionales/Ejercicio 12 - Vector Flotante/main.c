/* Dado un vector de dimensi�n N y un valor x float, desarrollar una funci�n que almacene x en la
posici�n i de un vector. Los valores no se ingresan ordenados por posici�n, se debe ingresar la
posici�n y el valor de x hasta completar el vector. Al finalizar, emitir el contenido del vector
indicando la posici�n ocupada por cada n�mero a partir de la primera posici�n. Se debe utilizar
funciones. */

#include <stdio.h>
#include <stdlib.h>

void vectorFloat (float base[], int num){

    int i = 0, j = 0;

    while (j != num){
        printf("Ingrese la posicion del vector: ");
        scanf("%d", &i);

        printf("Ingrese el valor que desea almacenar: ");
        scanf("%f", &base[i]);

        j++;
    }

    for(int k = 0; k < num; k++){
        printf("Posicion %d = %.1f \n", k, base[k]);
    }
}

int main()
{

    float base[5];

    vectorFloat(base, 5);

    return 0;
}
