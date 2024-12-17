/* 6. Una escuela necesita para una prueba de competencias una aplicación que procese notas
de alumnos, para obtener información estadística de cada curso/año. Para ello, la secretaria
se reúne con usted y definen lo siguiente: construir un programa que permita procesar 5
años (1ero. A 5to.). Por cada año se ingresan una cantidad desconocida de números de
legajos de alumnos que finaliza con legajo 0 (cero). Por cada legajo se ingresa:
a. División a la cual pertenece el alumno (A, B o C), no están ordenados por división
b. Nota (1 a 10)
Esta función debe emitir, por cada año, el promedio de notas por cada división.
Al finalizar, emitir el total de notas procesadas, el mayor promedio de todos con su año y
división. */

#include <stdio.h>
#include <stdlib.h>

void promedium (float* notasA, float* notasB, float* notasC, int* curso, int* legajosA, int* legajosB, int* legajosC, float* promedioA, float* promedioB, float* promedioC);

int main()
{
    int curso, legajo, cantlegajos, legajoA = 0, legajoB = 0, legajoC = 0, maxcurso;
    float nota, acumnotaA = 0, acumnotaB = 0, acumnotaC = 0, maxprom = 0, promA = 0, promB = 0, promC = 0;
    char division, maxdivision;

    printf("Ingrese el curso: ");
    scanf("%d", &curso);

    while (curso <= 5 && curso >=1){

        printf("Ingresar legajo: ");
        scanf("%d", &legajo);
        fflush(stdin);

        while (legajo != 0){
            printf("Ingrese la division: ");
            scanf("%c", &division);
            fflush(stdin);

            printf("Ingrese la nota: ");
            scanf("%f", &nota);

            if (division == 'A'){
                legajoA++;
                acumnotaA = acumnotaA + nota;
                printf("%d\n", legajoA);
                printf("%.1f\n", acumnotaA);
            }
            if (division == 'B'){
                legajoB++;
                acumnotaB = acumnotaB + nota;
                printf("%d\n", legajoB);
                printf("%.1f\n", acumnotaB);
            }
            if (division == 'C'){
                legajoC++;
                acumnotaC = acumnotaC + nota;
                printf("%d\n", legajoC);
                printf("%.1f\n", acumnotaC);
            }

            printf("Ingresar otro legajo: ");
            scanf("%d", &legajo);
            fflush(stdin);
        }
        promedium(&acumnotaA, &acumnotaB, &acumnotaC, &curso, &legajoA, &legajoB, &legajoC, &promA, &promB, &promC);

        cantlegajos = 0;
        acumnotaA = 0;
        acumnotaB = 0;
        acumnotaC = 0;
        legajoA = 0;
        legajoB = 0;
        legajoC = 0;

        printf("Ingrese otro curso: ");
        scanf("%d", &curso);
        fflush(stdin);

    }

    return 0;
}

void promedium (float* notasA, float* notasB, float* notasC, int* curso, int* legajosA, int* legajosB, int* legajosC, float* promedioA, float* promedioB, float* promedioC){

    float maxprom = 0;
    int maxcurso;
    char maxdivision;

    *promedioA = ((*notasA) / (*legajosA));
    *promedioB = ((*notasB) / (*legajosB));
    *promedioC = ((*notasC) / (*legajosC));

    printf("El curso %d cuya division es A, tiene un promedio de: %.1f \n", (*curso), *promedioA);
    printf("El curso %d cuya division es B, tiene un promedio de: %.1f \n", (*curso), *promedioB);
    printf("El curso %d cuya division es C, tiene un promedio de: %.1f \n", (*curso), *promedioC);
    printf("Cantidad de notas procesadas del curso %d: %d \n", *curso, (*legajosA + *legajosB + *legajosC));

    if(*promedioA > maxprom){
        maxprom = *promedioA;
        maxcurso = *curso;
        maxdivision = 'A';
    }
    if(*promedioB > maxprom){
        maxprom = *promedioB;
        maxcurso = *curso;
        maxdivision = 'B';
    }
    if(*promedioC > maxprom){
        maxprom = *promedioC;
        maxcurso = *curso;
        maxdivision = 'C';
    }

    printf("El curso %d, division %c, logro el mayor promedio con %.1f \n", *curso, maxdivision, maxprom);

}


