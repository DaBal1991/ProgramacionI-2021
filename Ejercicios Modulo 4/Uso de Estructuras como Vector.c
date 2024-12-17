#include <stdio.h>
#define DIM 2

typedef struct {
    int legajo;
    int notas[3];
    float promedio;
    int estado;
} Alumno;

void cargarAlumnos(Alumno vecAlumnos[]){
    int i,j;

    for (i=0;i<DIM;i++){
        printf("Ingrese legajo:");
        scanf("%d",&(vecAlumnos[i].legajo));
        for (j=0; j<3; j++){
            printf("Ingrese nota #%d:",j+1);
            scanf("%d",&(vecAlumnos[i].notas[j]));
        }
    }
}

void calcularPromedios(Alumno vecAlumnos[]){
    int i;

    for (i=0;i<DIM;i++){
        vecAlumnos[i].promedio=(vecAlumnos[i].notas[0]+vecAlumnos[i].notas[1]+vecAlumnos[i].notas[2])/3.0;
    }
}

int main(void){
    Alumno misAlumnos[DIM];
    int i;

    cargarAlumnos(misAlumnos);
    printf("l:%d-%d\n",misAlumnos[0].legajo,misAlumnos[0].notas[1]);
    calcularPromedios(misAlumnos);


    return 0;
}
