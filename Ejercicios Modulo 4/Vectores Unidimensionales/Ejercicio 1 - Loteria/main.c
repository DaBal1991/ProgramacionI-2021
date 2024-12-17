#include <stdio.h>
#include <stdlib.h>
#define DIM 10

void ingreso (int* vec, int tam)
{
    int i;

    printf("Determine la posicion \n");
    scanf("%d", &i);
    fflush(stdin);

    while(i < tam){
        printf("Determine el numero \n");
        scanf("%d", &vec[i]);
        fflush(stdin);

        printf("Vector = %d %d %d %d %d %d %d %d %d %d \n", vec[0], vec[1], vec[2], vec[3], vec[4], vec[5], vec[6], vec[7], vec[8], vec[9]);

        printf("Determine la posicion \n");
        scanf("%d", &i);
        fflush(stdin);
    }


}

int main()
{
    int loteria[DIM] = {0, 0, 0, 0, 0, 0, 0, 0, 0};

    ingreso(loteria, DIM);

    return 0;

}
