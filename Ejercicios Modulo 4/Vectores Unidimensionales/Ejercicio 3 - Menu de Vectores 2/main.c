/* Continúa agregando funciones al ejercicio anterior que permitan:
a) Calcular y emitir la suma de sus elementos.
b) Calcular y emitir el mínimo del vector.
c) Calcular y emitir el promedio de los valores del vector
d) Emitir los valores de aquellos que superaron ese promedio.
e) Emitir los valores del vector que son múltiplos del último número ingresado en el mismo.
f) Emitir el valor máximo e indicar la cantidad de veces que apareció y el número de orden en
que fue ingresado.
g) Emitir los valores que son pares.
h) Emitir los valores que son impares.
i) Emitir aquellos que estén ubicados en posición par. */

#include <stdio.h>
#include <stdlib.h>
#define vecsize 10

int menu (){

    int opcion;

    printf("1 - Cargar elementos \n");
    printf("2 - Buscar entero determinado pero no contarlo \n");
    printf("3 - Contar la aparicion de un elemento \n");
    printf("4 - Invertir vector \n");
    printf("5 - Suma de elementos del vector \n");
    printf("6 - Busqueda del menor elemento \n");
    printf("7 - Calcular promedio de los elementos del vector e imprimir valores superiores al promedio \n");
    printf("8 - Imprimir multiplos del ultimo valor del vector \n");
    printf("9 - Buscar valor maximo, determinar cantidad de apariciones y posicion \n");
    printf("10 - Buscar pares e impares \n");
    printf("11 - Imprimir solo posiciones pares del vector \n");
    printf("12 - Volar este programa al carajo... \n");


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

void sumavectorial (int vect[], int unNum){

    int i = 0, sumavect = 0;

    for (i = 0; i < unNum; i++){
        vect[i];
        sumavect = sumavect + vect[i];
    }

    printf("La suma de los elementos del vector es igual a: %d \n", sumavect);

}

void buscamenor (int vect[], int unNum){

    int i = 0, aux = 999999;

    for (i = 0; i < unNum; i++){
        vect[i];

        if (vect[i] < aux){
            aux = vect[i];
        }
    }

    printf("El menor elemento del vector es: %d \n", aux);

}

void promedio (int vect[], int unNum){

    int i = 0, aux = 0;
    float prom = 0;

    for (i = 0; i < unNum; i++){
        vect[i];
        aux = aux + vect[i];
    }

    prom = aux/(float)unNum;

    for (i = 0; i < unNum; i++){
        vect[i];

        if (vect[i] > prom){
            printf("Valores que superan el promedio: %d \n", vect[i]);
        }
    }

    printf("Promedio de elementos = %.1f \n", prom);

}

void multiplo (int vect[], int unNum){

    int i = 0, aux = 0;

    for (i = 0; i < unNum; i++){
        vect[i];

        if ((vect[i]%vect[9]) == 0){
            printf("El numero %d es multiplo de %d \n", vect[i], vect[9]);
        }

    }


}

void busqueda (int vect[], int unNum){

    int i = 0, aux = 0, j = 0, max = 0, pos = 0, k = 0;

    for(i = 0; i < unNum; i++){
        vect[i];

        if (vect[i] > max){
            max = vect[i];
            pos = i;
        }
    }

    for(i = 0; j < unNum; j++){
        vect[j];

        if (max == vect[j]){
            k++;
        }
    }

    printf("Numero maximo es %d \n", max);
    printf("Aparece %d veces \n", k);
    printf("Su primer posicion es %d \n", pos);

}

void paresImpares (int vect[], int unNum){

    int i = 0, j = 0, aux = 0, par = 0, impar = 0;

    for(i = 0; i < unNum; i++){
        vect[i];

        if ((vect[i]%2) == 0){
            printf("Es par: %d \n", vect[i]);
        }
        else{
            printf("Es impar: %d \n", vect[i]);
        }
    }
}

void ubicPar (int vect[], int unNum){

    int i = 0;

    for(i = 0; i < unNum; i++){
        vect[i];

        if(i%2 == 0){
            printf("El numero %d se encuentra en la posicion par: %d \n", vect[i], i);
        }
    }
}

int main()
{
    int opcion, valor;
    int base[vecsize] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    opcion = menu();

    while (opcion != 12){
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
            case 5:
                sumavectorial(base, vecsize);
                break;
            case 6:
                buscamenor(base, vecsize);
                break;
            case 7:
                promedio(base, vecsize);
                break;
            case 8:
                multiplo(base, vecsize);
                break;
            case 9:
                busqueda(base, vecsize);
                break;
            case 10:
                paresImpares(base, vecsize);
            case 11:
                ubicPar(base, vecsize);
            default:
                printf("Opcion inexistente, ingrese algo valido... \n");
                break;
        }
        opcion = menu();
    }

    return 0;
}
