/*Desarrollar una funci�n que reciba un vector, su tama�o y un n�mero; y devuelva la posici�n del
n�mero que se encuentra o -1 si no se encuentra.*/

#include <stdio.h>
#include <stdlib.h>

void busqueda (int base[], int tam, int marca){

    int i = 0, pos = -1;

    for(i = 0; i < tam; i++){

        if (base[i] == marca){
            pos = i;
        }
    }

    printf("Numero encontrado en la posicion: %d", pos);

}


int main()
{
    int base[10] = {2,4,6,8,10,12,14,16,18,20};
    int marca;

    printf("Ingresar el valor a buscar: ");
    scanf("%d", &marca);

    busqueda(base, 10, marca);

    return 0;
}
