/* Escribe un programa que, a partir de un vector vacío de enteros, permita insertar nuevos
números en posiciones válidas del mismo. El programa emitirá repetidamente al usuario un
menú con cuatro opciones:
a) Insertar delante: Esta opción agrega un número en la primera posición del vector. Deberá
desplazar, si fuese necesario, el resto de los elementos una posición a la derecha. Si el vector
estuviese lleno, se perdería su último elemento.
b) Insertar detrás: agrega un nuevo elemento al final del vector, es decir, en la última celda. Si
el vector estuviese lleno, el elemento se inserta en la última celda del vector y se perdería el
elemento que estaba allí anteriormente.
c) Insertar en una posición dada: Dado un índice del vector, se debe insertar un nuevo
elemento en dicha posición, siempre que el nuevo elemento sea contiguo a los ya existentes.
Por ejemplo, si en el vector hay tres elementos (que ocupan las posiciones 0, 1 y 2) no se
permite agregar un elemento en la posición 7 porque no forma una secuencia continua, pero
sí se permite en la posición 3. Por otra parte, si la posición dada está ocupada, los elementos
se deben desplazar una posición a la derecha y, si el vector estaba lleno, se pierde el último
elemento.
d) Finalizar el programa.
*/

#include <stdio.h>
#include <stdlib.h>
#define vecsize 5

int menu(){

    int selec;

    printf("1 - Insertar delante \n");
    printf("2 - Insertar detras \n");
    printf("3 - Insertar en una posicion determinada \n");
    printf("4 - Salir \n");

    scanf("%d", &selec);

    return selec;
}

void delante (int vect[]){

    int i = vecsize, aux;

    while(i != 0){
        aux = vect[i-1];
        vect[i]= aux;
        i--;
    }

    printf("Ingresar el valor de la posicion 0: \n");
    scanf("%d", &vect[0]);

    printf("Vector = %d %d %d %d %d\n", vect[0], vect[1], vect[2], vect[3], vect[4]);
}

void detras (int vect[]){

    int i = 0, aux;

    while (i < vecsize){
        aux = vect[i+1];
        vect[i] = aux;
        i++;
    }

    printf("Ingresar el valor de la posicion 4: \n");
    scanf("%d", &vect[4]);

    printf("Vector = %d %d %d %d %d\n", vect[0], vect[1], vect[2], vect[3], vect[4]);

}

void insertar (int vect[]){

}

int main()
{

    int opcion;
    int base[vecsize] = {2, 4, 6, 8, 10};

    opcion = menu();

    while(opcion != 4){
        switch (opcion){
            case 1:
                    delante(base);
                    break;
            case 2:
                    detras(base);
                    break;
            case 3:
                    insertar(base);
                    break;
            default:
                    printf("Error, ingrese otro valor \n");
                    break;
        }
        opcion = menu();
    }
    return 0;
}
