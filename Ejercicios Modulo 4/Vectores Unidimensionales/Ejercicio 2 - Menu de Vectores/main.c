#include <stdio.h>
#include <stdlib.h>
#define vecsize 10

int menu (){

    int opcion;

    printf("1 - Cargar elementos \n");
    printf("2 - Buscar entero determinado pero no contarlo \n");
    printf("3 - Contar la aparicion de un elemento \n");
    printf("4 - Invertir vector \n");
    printf("5 - Volar este programa al carajo... \n");

    scanf("%d", &opcion);

    return opcion;

}

void cargar (int vect[], int unNum){

    int i;

    for(i = 0; i < unNum; i++){
        printf("Ingrese un numero para la posicion %d:", i);
        scanf("%d", &vect[i]);

        printf("Vector = %d %d %d %d %d %d %d %d %d %d \n", vect[0], vect[1], vect[2], vect[3], vect[4], vect[5], vect[6], vect[7], vect[8], vect[9]);
    }

}

void leerMarca (int vect[]){

    int i = 0, marca, j = 0;

    printf("Determinar que valor no sera contado... \n");
    scanf("%d", &marca);

    while (vect[i] != marca){
        printf("Vector = %d \n", vect[i]);
        i++;
    }
    printf("Cantidad de elementos contados distintos de la marca %d = %d \n", marca, i);
}

int veces (int valor, int vect[], int unNum){

    int i, j = 0;

    for (i = 0; i < unNum; i++){
        vect[i];

        if (vect[i] == valor){
            j++;
        }
    }
    printf("El valor %d se repite: %d veces \n", valor, j);

}

void invertirOrden (int vect[], int unNum){

    int i, j, aux;

    for(i = 0; i < unNum/2; i++){
        aux = vect[i];
        vect[i]= vect[unNum-1-i];
        vect[unNum-1-i]=aux;
    }

    printf("Vector Invertido = %d %d %d %d %d %d %d %d %d %d \n", vect[0], vect[1], vect[2], vect[3], vect[4], vect[5], vect[6], vect[7], vect[8], vect[9]);
}


int main()
{
    int opcion, valor;
    int base[vecsize] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    opcion = menu();

    while (opcion != 5){
        switch (opcion){
            case 1:
                cargar(base, vecsize);
                break;
            case 2:
                leerMarca(base);
                break;
            case 3:
                printf("Ingrese el valor a contar sus apariciones en el vector: \n");
                scanf("%d", &valor);
                veces(valor, base, vecsize);
                break;
            case 4:
                invertirOrden(base, vecsize);
                break;
            default:
                printf("Opcion inexistente, ingrese algo valido... \n");
                break;
        }
        opcion = menu();
    }

    return 0;
}
