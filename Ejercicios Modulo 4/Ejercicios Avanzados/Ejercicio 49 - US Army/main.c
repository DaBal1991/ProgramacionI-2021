/* El ejército de EE. UU. necesita desarrollar un programa para modelar el avance de sus tropas en
el frente de batalla. Para ello se requiere que el programa modele un mapa de 10 x 10 km. En
dicho mapa se deberán modelar la cantidad de tropas. Cada tropa puede tener una cantidad de
soldados, otra cantidad de humvees y otra cantidad de tanques. Con este programa, el
comandante de la ofensiva puede armar tropas y ubicarlas en el mapa para un ataque efectivo.
Además, cada tropa debe poder identificase como “aliado” o “enemigo”, de manera que el
comandante pueda evaluar la cantidad de fuerzas aliadas y enemigas con el mismo programa. */

#include <stdio.h>
#include <stdlib.h>

struct tropas{
    int soldados;
    int humvees;
    int tanques;
};

void mostrarMapa(int mapa[][10]){

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            printf("%d:%d = %c\t", i, j, mapa[i][j]);
        }
        printf("\n");
    }

}

void emplazarTropasA(int mapa[][10], struct tropas* fichasA){

    char faccion = 'A';
    char letra[50];
    int fila;
    int columna;
    int soldadosAliados;
    int humveesAliados;
    int tanquesAliados;
    int soldadosRestantes;
    int humveesRestantes;
    int tanquesRestantes;

    fflush(stdin);

    printf("\nA continuacion se ingresaran las tropas Aliadas...");
    printf("\nIngrese nombre para idenficar al grupo de combate...: ");
    gets(letra);

    fflush(stdin);

    printf("\nIngrese la cantidad de soldados a desplegar...: ");
    scanf("%d", &soldadosAliados);

    soldadosRestantes = fichasA->soldados - soldadosAliados;
    fichasA->soldados = soldadosRestantes;

    printf("\nIngrese la cantidad de humvees a desplegar...: ");
    scanf("%d", &humveesAliados);

    humveesRestantes = fichasA->humvees - humveesAliados;
    fichasA->humvees = humveesRestantes;

    printf("\nIngrese la cantidad de tanques que dispone...: ");
    scanf("%d", &tanquesAliados);

    tanquesRestantes = fichasA->tanques - tanquesAliados;
    fichasA->tanques = tanquesRestantes;

    fflush(stdin);

    printf("\nIngrese coordenadas de ubicacion");
    printf("\nFila: ");
    scanf("%d", &fila);

    printf("\nColumna: ");
    scanf("%d", &columna);

    mapa[fila][columna] = faccion;

    printf("\n");

    printf("Despliegue Resultante: \n");
    printf("Coordenadas de despliegue: %d:%d\n", fila, columna);
    printf("Grupo de combate: %s\n", letra);
    printf("Soldados: %d\n", soldadosAliados);
    printf("Humvees: %d\n", humveesAliados);
    printf("Tanques: %d\n", tanquesAliados);

    printf("-----------------------------------------------------\n");

    printf("Unidades restantes para despliegue...: \n");
    printf("Quedan %d soldados\n", soldadosRestantes);
    printf("Quedan %d humvees\n", humveesRestantes);
    printf("Quedan %d tanques\n", tanquesRestantes);

    printf("\n");

}

void emplazarTropasB(int mapa[][10], struct tropas* fichasB){

    char faccion = 'E';
    char letra[50];
    int fila;
    int columna;
    int soldadosEnemigos;
    int humveesEnemigos;
    int tanquesEnemigos;
    int soldadosRestantes;
    int humveesRestantes;
    int tanquesRestantes;

    fflush(stdin);

    printf("\nA continuacion se ingresaran las tropas Enemigas...");
    printf("\nIngrese nombre para idenficar al grupo de combate...: ");
    gets(letra);

    fflush(stdin);

    printf("\nIngrese la cantidad de soldados a desplegar...: ");
    scanf("%d", &soldadosEnemigos);

    soldadosRestantes = fichasB->soldados - soldadosEnemigos;
    fichasB->soldados = soldadosRestantes;

    printf("\nIngrese la cantidad de humvees a desplegar...: ");
    scanf("%d", &humveesEnemigos);

    humveesRestantes = fichasB->humvees - humveesEnemigos;
    fichasB->humvees = humveesRestantes;

    printf("\nIngrese la cantidad de tanques a desplegar...: ");
    scanf("%d", &tanquesEnemigos);

    tanquesRestantes = fichasB->tanques - tanquesEnemigos;
    fichasB->tanques = tanquesRestantes;

    fflush(stdin);

    printf("\nIngrese coordenadas de ubicacion");
    printf("\nFila: ");
    scanf("%d", &fila);

    printf("\nColumna: ");
    scanf("%d", &columna);

    mapa[fila][columna] = faccion;

    printf("\n");

    printf("Despliegue Resultante: \n");
    printf("Coordenadas de despliegue: %d:%d\n", fila, columna);
    printf("Grupo de combate: %s\n", letra);
    printf("Soldados: %d\n", soldadosEnemigos);
    printf("Humvees: %d\n", humveesEnemigos);
    printf("Tanques: %d\n", tanquesEnemigos);

    printf("-----------------------------------------------------\n");

    printf("Unidades restantes para despliegue...: \n");
    printf("Quedan %d soldados\n", soldadosRestantes);
    printf("Quedan %d humvees\n", humveesRestantes);
    printf("Quedan %d tanques\n", tanquesRestantes);

    printf("\n");

}

int main()
{
    struct tropas fichasA = {500, 300, 100};
    struct tropas fichasB = {500, 300, 100};
    int mapa[10][10] = {0};
    int flag;

    while (flag != -1){
    emplazarTropasA(mapa, &fichasA);
    emplazarTropasB(mapa, &fichasB);

    mostrarMapa(mapa);

    printf("\nContinuar? -1 para salir...: ");
    scanf("%d", &flag);
    }

    return 0;
}
