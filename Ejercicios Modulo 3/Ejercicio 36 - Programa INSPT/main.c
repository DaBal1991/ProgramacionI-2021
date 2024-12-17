/* El INSPT requiere de un programa para procesar notas de alumnos de un solo curso. Para ello
se pide un programa que:

a) En main se pida ingresar el número de curso, cantidad de clases totales y los legajos de
alumnos a procesar

b) Una función que reciba como mínimo un legajo por parámetro y las clases totales. Luego
debe pedir por teclado la cantidad de clases asistidas y las 3 notas de sus parciales. La
función devuelve el porcentaje de asistencia.

c) Otra función que reciba las notas y devuelva el promedio.

d) Al final del programa, se debe emitir: la cantidad total de alumnos, el legajo con el mejor
promedio (mostrar legajo y promedio) y el legajo con mejor asistencia (mostrar legajo y
asistencia). */

#include <stdio.h>
#include <stdlib.h>

void calculadorAsistencia (int legajo, int clasesTotales);
float promedio (float nota1, float nota2, float nota3);

int main()
{
    int numCurso, totalClases, legajo, continuar = 0, alum = 0;

    printf("Ingrese el numero de curso: ");
    scanf("%d", &numCurso);
    fflush(stdin);

    printf("Ingrese la cantidad de clases totales: ");
    scanf("%d", &totalClases);
    fflush(stdin);

    printf("Ingrese un legajo de alumno: ");
    scanf("%d", &legajo);
    fflush(stdin);

    if (legajo == 0)
        printf("***Error***");
    else
        calculadorAsistencia(legajo, totalClases);

    //printf("\nCantidad de alumnos procesados = %d", alum);
    //printf("\nLegajo con mejor asistencia = %d con %.1f" );
    //printf("\nLegajo con mejor promedio = %d con %.1f");

    return 0;
}

void calculadorAsistencia (int legajo, int clasesTotales){

    int asistencia, mejorPromLegajo = 0, alum = 0, maxAsist = 0, mejorAsistLegajo;
    float nota1, nota2, nota3, porcenAsistencia, promedioFinal, maxProm = 0;

    while (legajo != 0){
        alum++;
        printf("Ingrese la asistencia del alumno: ");
        scanf("%d", &asistencia);
        fflush(stdin);

        if (asistencia > clasesTotales){
            printf("***Error***\n");
        }
        else{
            porcenAsistencia = ((asistencia*100)/clasesTotales);
            printf("Porcentaje de asistencia: %.2f", porcenAsistencia);

            if (porcenAsistencia > maxAsist){
                maxAsist = porcenAsistencia;
                mejorAsistLegajo = legajo;
            }

            printf("\nIngrese la nota del primer parcial: ");
            scanf("%f", &nota1);
            fflush(stdin);

            printf("Ingrese la nota del segundo parcial: ");
            scanf("%f", &nota2);
            fflush(stdin);

            printf("Ingrese la nota del tercer parcial: ");
            scanf("%f", &nota3);
            fflush(stdin);

            promedioFinal = promedio(nota1, nota2, nota3);
            printf("\nEl promedio de notas es: %.1f", promedioFinal);

            if (promedioFinal > maxProm){
                maxProm = promedioFinal;
                mejorPromLegajo = legajo;
            }
        }

        printf("\nDesea ingresar otro legajo? 0 para cerrar... \n");
        scanf("%d", &legajo);
    }

    printf("\nCantidad de alumnos procesados = %d", alum);
    printf("\nLegajo con mejor promedio = %d con %.1f", mejorPromLegajo, maxProm);
    printf("\nLegajo con mejor asistencia = %d con %d", mejorAsistLegajo, maxAsist);
}

float promedio(float nota1, float nota2, float nota3){

    float Promedio;

    Promedio = ((nota1+nota2+nota3)/3);

    return (Promedio);
    //printf("\nPromedio Final: %.1f", promedio);
}
