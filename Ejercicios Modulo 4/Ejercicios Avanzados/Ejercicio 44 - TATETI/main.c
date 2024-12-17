/* Programar el juego TA-TE-TI. Para ello se requiere modelar un tablero de 3 x 3 en el que el
jugador 1 ingresará una coordenada en la que guardará una ‘x’. Luego el jugador 2 ingresara otra
coordenada en la que se guardara una ‘o’. Si la posición ya esta ocupada, el programa deberá
pedir el reingreso de otra coordenada. Una vez completados todos los casilleros (el programa
de darse cuenta cuando esta condición se dé), el programa debe decir qué jugador gano la
partida o si hubo empate (ningún jugador ganó). */

#include <stdio.h>
#include <stdlib.h>

void jugador1 (int tablero[][3]){

    int i = 0, j = 0;

    printf("Ingrese valor de fila 0 a 2: ");
    scanf("%d", &i);

    printf("Ingrese valor de columna 0 a 2: ");
    scanf("%d", &j);

    if (tablero[i][j] == 'X' || tablero[i][j] == 'O'){
        printf("Casillero ocupado, ingrese nuevos valores...\n");

        printf("Ingrese valor de fila 0 a 2: ");
        scanf("%d", &i);

        printf("Ingrese valor de columna 0 a 2: ");
        scanf("%d", &j);

        tablero[i][j] = 'X';
    }
    else
        tablero[i][j] = 'X';
}

void jugador2 (int tablero[][3]){

    int i = 0, j = 0;

    printf("Ingrese valor de fila 0 a 2: ");
    scanf("%d", &i);

    printf("Ingrese valor de columna 0 a 2: ");
    scanf("%d", &j);

    if (tablero[i][j] == 'X' || tablero[i][j] == 'O'){
        printf("Casillero ocupado, ingrese nuevos valores...\n");

        printf("Ingrese valor de fila 0 a 2: ");
        scanf("%d", &i);

        printf("Ingrese valor de columna 0 a 2: ");
        scanf("%d", &j);

        tablero[i][j] = 'O';
    }
    else
        tablero[i][j] = 'O';
}

void muestraTablero (int tablero[][3]){

    for (int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d-%d: %c\t", i, j, tablero[i][j]);
        }
        printf("\n");
    }

}

void condicionVictoria (int tablero[][3]){

    if ((tablero[0][0] == 'X' && tablero[0][1] == 'X' && tablero[0][2] == 'X') || (tablero[2][0] == 'X' && tablero[2][1] == 'X' && tablero[2][2] == 'X') || (tablero[1][0] == 'X' && tablero[1][1] == 'X' && tablero[1][2] == 'X') || (tablero[0][0] == 'X' && tablero[1][0] == 'X' && tablero[2][0] == 'X') || (tablero[0][2] == 'X' && tablero[1][2] == 'X' && tablero[2][2] == 'X') || (tablero[0][1] == 'X' && tablero[1][1] == 'X' && tablero[2][1] == 'X') || (tablero[0][0] == 'X' && tablero[1][1] == 'X' && tablero[2][2] == 'X') || (tablero[2][0] == 'X' && tablero[1][1] == 'X' && tablero[0][2] == 'X'))
        printf("***Gana el jugador 1***");
    else
        printf("***Gana el jugador 2***");


}

int main()
{
    int i = 0, j = 0;
    int tablero[3][3];
    int jugada1 = 0, jugada2 = 0;

    printf("Ta-Te-Ti\n");

    while (i < 9){
        if (i < 9){
        printf("\nJugador 1 = X\n");
        jugador1(tablero);
        i++;

            if ((tablero[0][0] == 'X' && tablero[0][1] == 'X' && tablero[0][2] == 'X') || (tablero[2][0] == 'X' && tablero[2][1] == 'X' && tablero[2][2] == 'X') || (tablero[1][0] == 'X' && tablero[1][1] == 'X' && tablero[1][2] == 'X') || (tablero[0][0] == 'X' && tablero[1][0] == 'X' && tablero[2][0] == 'X') || (tablero[0][2] == 'X' && tablero[1][2] == 'X' && tablero[2][2] == 'X') || (tablero[0][1] == 'X' && tablero[1][1] == 'X' && tablero[2][1] == 'X') || (tablero[0][0] == 'X' && tablero[1][1] == 'X' && tablero[2][2] == 'X') || (tablero[2][0] == 'X' && tablero[1][1] == 'X' && tablero[0][2] == 'X')){
            printf("\n***Gana el jugador 1***\n");
            i = 10;
            }
        }

        if (i < 9){
        printf("\nJugador 2 = O\n");
        jugador2(tablero);
        i++;

            if((tablero[0][0] == 'O' && tablero[0][1] == 'O' && tablero[0][2] == 'O') || (tablero[2][0] == 'O' && tablero[2][1] == 'O' && tablero[2][2] == 'O') || (tablero[1][0] == 'O' && tablero[1][1] == 'O' && tablero[1][2] == 'O') || (tablero[0][0] == 'O' && tablero[1][0] == 'O' && tablero[2][0] == 'O') || (tablero[0][2] == 'O' && tablero[1][2] == 'O' && tablero[2][2] == 'O') || (tablero[0][1] == 'O' && tablero[1][1] == 'O' && tablero[2][1] == 'O') || (tablero[0][0] == 'O' && tablero[1][1] == 'O' && tablero[2][2] == 'O') || (tablero[2][0] == 'O' && tablero[1][1] == 'O' && tablero[0][2] == 'O')){
            printf("\n***Gana el jugador 2***\n");
            i = 10;
            }
        }

        if(i == 9){
            printf("\n***Empate***\n");
        }

        muestraTablero(tablero);
    }

    return 0;
}
