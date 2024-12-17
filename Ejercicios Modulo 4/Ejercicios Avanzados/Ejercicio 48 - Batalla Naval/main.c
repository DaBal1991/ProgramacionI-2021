/* La batalla naval es un juego que se basa en un tablero de 10 por 10 casilleros en el que se ubican
5 barcos: un portaviones (5 casilleros), 2 destructores (3 casilleros) y dos patrulleros (2 casilleros).
Se pide modelar un programa en el:
a) El jugador A ingrese la posición de sus 5 barcos ingresando los casilleros que ocupa cada
uno. Se asumirá que el jugador será honesto e ingresará las posiciones contiguas que ocupa
cada barco.
b) Luego el jugador B ingresará coordenadas con la intensión de hundir los barcos. Tras cada
ingreso, el juego deberá indicar si fue “agua” (marcando con un carácter ‘o’ en el tablero) o
“golpe” (marcado con una ‘x’ en el tablero). En cada movimiento deberá mostrarse el
tablero con todos los disparos realizados, pero obviamente sin mostrar los barcos.
c) Al hundir todos los barcos, el juego deberá contabilizar la cantidad total de disparos y la
cantidad de disparos fallidos. Con la intensión de que luego al invertir los roles, el jugador
que menos disparos hizo es el ganador. */

#include <stdio.h>
#include <stdlib.h>

void mostrarTableroA(int tableroA[][10]){

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            printf("%d-%d: %c\t", i, j, tableroA[i][j]);
        }
        printf("\n");
    }
}

void mostrarTableroB(int tableroB[][10]){

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            printf("%d-%d: %c\t", i, j, tableroB[i][j]);
        }
        printf("\n");
    }
}

void insertarPortaavion(int tableroA[][10]){

    char postura;
    int fila;
    int columna;
    char decision;

    printf("Ingrese el sentido en que ubicara el portaaviones, vertical u horizontal...: ");
    scanf("%c", &postura);

    fflush(stdin);

    if(postura == 'h'){
        printf("\nIngrese fila: ");
        scanf("%d", &fila);

        printf("\nIngrese columna: ");
        scanf("%d", &columna);

            tableroA[fila][columna] = 'P';
            tableroA[fila][columna+1] = 'P';
            tableroA[fila][columna+2] = 'P';
            tableroA[fila][columna+3] = 'P';
            tableroA[fila][columna+4] = 'P';
    }
    if(postura == 'v'){
        printf("\nIngrese fila: ");
        scanf("%d", &fila);

        printf("\nIngrese columna: ");
        scanf("%d", &columna);

            tableroA[fila][columna] = 'P';
            tableroA[fila+1][columna] = 'P';
            tableroA[fila+2][columna] = 'P';
            tableroA[fila+3][columna] = 'P';
            tableroA[fila+4][columna] = 'P';
    }
}

void insertarDestructores(int tableroA[][10]){

    char postura;
    int fila;
    int columna;
    char decision;

    for(int k = 0; k < 2; k++){
    fflush(stdin);

    printf("\nIngrese el sentido en que ubicara el destructor (%d), vertical u horizontal...: ", k+1);
    scanf("%c", &postura);

    fflush(stdin);

        if(postura == 'h'){
            printf("\nIngrese fila: ");
            scanf("%d", &fila);

            printf("\nIngrese columna: ");
            scanf("%d", &columna);

                tableroA[fila][columna] = 'D';
                tableroA[fila][columna+1] = 'D';
                tableroA[fila][columna+2] = 'D';
        }
        if(postura == 'v'){
            printf("\nIngrese fila: ");
            scanf("%d", &fila);

            printf("\nIngrese columna: ");
            scanf("%d", &columna);

                tableroA[fila][columna] = 'D';
                tableroA[fila+1][columna] = 'D';
                tableroA[fila+2][columna] = 'D';
        }
    }
}

void insertarPatrulleros(int tableroA[][10]){

    char postura;
    int fila;
    int columna;
    char decision;

    for(int k = 0; k < 2; k++){
    fflush(stdin);

    printf("\nIngrese el sentido en que ubicara el patrullero (%d), vertical u horizontal...: ", k+1);
    scanf("%c", &postura);

    fflush(stdin);

        if(postura == 'h'){
            printf("\nIngrese fila: ");
            scanf("%d", &fila);

            printf("\nIngrese columna: ");
            scanf("%d", &columna);

                tableroA[fila][columna] = 'T';
                tableroA[fila][columna+1] = 'T';
        }
        if(postura == 'v'){
            printf("\nIngrese fila: ");
            scanf("%d", &fila);

            printf("\nIngrese columna: ");
            scanf("%d", &columna);

                tableroA[fila][columna] = 'T';
                tableroA[fila+1][columna] = 'T';
        }
    }
}

void disparar(int tableroA[][10], int tableroB[][10], int* contadorI, int* contadorF){

    int fila;
    int columna;

    fflush(stdin);
    printf("Ingrese fila...");
    scanf("%d", &fila);

    printf("Ingrese columna...");
    scanf("%d", &columna);

    if((tableroA[fila][columna] == 'P') || (tableroA[fila][columna] == 'T') || (tableroA[fila][columna] == 'D')){

        if(tableroB[fila][columna] == 'X'){
            printf("\nCoordenadas ya ingresadas...");
            (*contadorI)--;
            printf("\n%d\n", *contadorI);
        }

        fflush(stdin);
        tableroB[fila][columna] = 'X';
        printf("\n***¡IMPACTO!***\n");
        (*contadorI)++;
        printf("\nAciertos: %d\n", *contadorI);

    }
    else{

        if(tableroB[fila][columna] == 'O'){
            printf("\nCoordenadas ya ingresadas...");
            (*contadorF)--;
            printf("\n%d\n", *contadorF);
        }

        fflush(stdin);
        tableroB[fila][columna] = 'O';
        printf("\n***¡AGUA!***\n");
        (*contadorF)++;
        printf("\nErradas: %d\n", *contadorF);
    }
}


int main()
{
    int tableroA[10][10] = {0};
    int tableroB[10][10] = {0};
    int i = 0;
    int k = 0;
    int m = 0;
    int contadorImpactos = 0;
    int contadorFallas = 0;

    printf("Jugador A: Tiempo de desplegar la flota...\n");

    while(i < 5){
        insertarPortaavion(tableroA);
        i=1;
        mostrarTableroA(tableroA);
        fflush(stdin);
        insertarDestructores(tableroA);
        i=3;
        mostrarTableroA(tableroA);
        fflush(stdin);
        insertarPatrulleros(tableroA);
        i=5;
        mostrarTableroA(tableroA);
    }

    printf("Jugador B: Secuencia de disparo...\n");

    while(contadorImpactos != 15){
        disparar(tableroA, tableroB, &contadorImpactos, &contadorFallas);
        mostrarTableroB(tableroB);
    }
    printf("\nCantidad de disparos realizados con exito: %d\n", contadorImpactos);
    printf("\nCantidad de disparos errados: %d\n", contadorFallas);

    return 0;
}
