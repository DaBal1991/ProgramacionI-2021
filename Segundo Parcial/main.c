/* El geólogo Máximo Roca está estudiando un predio de 20 x 50 hectáreas para analizar la posibilidad de explotar una
mina de oro. Para ello mapea el área y por cada hectárea anota: densidad de flora, densidad de fauna, densidad de
roca y densidad de metales. Las densidades se miden de 0 a 9.
Se pide un programa que implemente:
- Una función para cargar los valores de una hectárea en una entidad hectárea (crear una hectárea).
- Una función que ubique una hectárea en su respectivo lugar del mapa.
- Una función que obtenga la hectárea con mayor vida (flora + fauna).
- Una función que obtenga la hectárea más “metalosa”.
- Una función que obtenga la hectárea más prometedora (aquella que tiene una relación metalosa/vida más
alta).
- Utilice las funciones anteriores para desarrollar un programa que pueda cargar un mapa con los valores de
las hectáreas y mostrar la hectárea con más vida, la más “metalosa” y la más prometedora. */

#include <stdio.h>
#include <stdlib.h>

struct terreno{
    int flora;
    int fauna;
    int densidadRoca;
    int densidadMetal;
    int id;
};

//Una función para cargar los valores de una hectárea en una entidad hectárea (crear una hectárea).
void crearHectarea(struct terreno hectareas[100]){

    int i = 0;

    printf("\nCarga de datos \n");
    printf("Ingrese la hectarea: ");
    scanf("%d", &i);

    printf("Densidad de flora: ");
    scanf("%d", &hectareas[i].flora);

    printf("Densidad de fauna: ");
    scanf("%d", &hectareas[i].fauna);

    printf("Densidad de roca: ");
    scanf("%d", &hectareas[i].densidadRoca);

    printf("Densidad de metal: ");
    scanf("%d", &hectareas[i].densidadMetal);

    printf("Determinar una ID para señalar la hectarea en el mapa: ");
    scanf("%d", &hectareas[i].id);
}

//Una función que ubique una hectárea en su respectivo lugar del mapa.
void mapaHectareas(struct terreno hectareas[100]){

    int i, j, k;
    int mapeado[20][50] = {0};

    printf("Ingresar la hectarea que ubicara en el mapa... (Utilizar numero de hectarea, no de ID)\n");
    scanf("%d", &k);

    printf("Ingresar coordenadas de la hectarea...\n");
    scanf("%d", &i);
    scanf("%d", &j);

    mapeado[i][j] = hectareas[k].id;

    for(int i = 0; i < 20; i++){
        for(int j = 0; j < 50; j++){
            printf("%d:%d: %d\n", i, j, mapeado[i][j]);
        }
    }


}

//Una función que obtenga la hectárea más “metalosa”.
void metalosa(struct terreno hectareas[100]){

    int i = 0;
    int max = 0;
    int filaM, columnaM;

    hectareas[i];

    for(i = 0; i < 100; i++){
            if(hectareas[i].densidadRoca > max){
                max = hectareas[i].densidadMetal;
                filaM = i;
            }
    }

    printf("\nLa hectarea con mas metales es la %d con un total de %d", filaM, max);

}

//Una función que obtenga la hectárea con mayor vida (flora + fauna).
void mayorVida(struct terreno hectareas[100]){

    int i = 0;
    int max = 0;
    int vida = 0;
    int filaV;

    for(i = 0; i < 100; i++){
        vida = hectareas[i].flora + hectareas[i].fauna;
                if(vida > max){
                    max = vida;
                    filaV = i;
                }
    }


    printf("\nLa hectarea con mas vida es la %d con un total de %d", filaV, max);

}

void prometedora(struct terreno hectareas[100]){

    float prometedor;
    float max = 0;
    int i = 0;
    float vida;
    float metales;
    int filaP;

    for(i = 0; i < 100; i++){
        vida = hectareas[i].flora + hectareas[i].fauna;
        metales = hectareas[i].densidadMetal;
        i;

        prometedor = metales/vida;

        if(prometedor > max){
            max = prometedor;
            filaP = i;
        }
    }

    printf("\nLa hectarea mas prometedora es la %d con un total de %.2f", filaP, max);

}

//Utilice las funciones anteriores para desarrollar un programa que pueda cargar un mapa con los valores de
//las hectáreas y mostrar la hectárea con más vida, la más “metalosa” y la más prometedora.

int main()
{
    struct terreno hectareas[100] = {0};
    int flag = 0;

    while(flag != -1){
    crearHectarea(hectareas);
    mapaHectareas(hectareas);

    printf("\nDesea continuar? -1 para salir...\n");
    scanf("%d", &flag);
    }
    metalosa(hectareas);
    mayorVida(hectareas);
    prometedora(hectareas);

    return 0;
}
