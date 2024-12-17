/* Escribe un programa que permita calificar a un grupo de diez alumnos de
la escuela secundaria. Por teclado se ingresan el nombre y las tres calificaciones de cada
alumno y con esos datos el programa debe calcular e informar el promedio de cada alumno
y decir si est� aprobado o no; para aprobar se requiere un promedio de seis o m�s y haber
obtenido al menos seis en la �ltima de las tres calificaciones. Posteriormente el programa
debe informar cu�ntos alumnos aprobaron y cu�ntos obtuvieron un promedio de al menos
8 p */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, alum = 10, j = 0, k = 0;
    float nota1 = 0, nota2 = 0, nota3 = 0, prom = 0, acum = 0;
    char nombre, apellido;

    for (i = 0; i < alum; i++){

        printf("\nIngrese el nombre del alumno: ");
        scanf("%c", &nombre);
        fflush(stdin);

        printf("\nIngrese el apellido del alumno: ");
        scanf("%c", &apellido);
        fflush(stdin);

        printf("Ingrese las calificaciones: \n");
        scanf("%f", &nota1);
        fflush(stdin);
        scanf("%f", &nota2);
        fflush(stdin);
        scanf("%f", &nota3);
        fflush(stdin);

        acum = nota1 + nota2 + nota3;
        prom = acum/3;

        if ((prom >= 6) && (nota3 >= 6)){
            printf("\nAlumno aprobado con promedio %1.1f", prom);
            j++;
            if(prom >= 8)
                k++;
            }
        else
            printf("Alumno desaprobado\n");
    }

    printf("\nCantidad de aprobados: %d", j);
    printf("\nCantidad de alumnos con nota igual o superior a 8: %d", k);

    return 0;

}
