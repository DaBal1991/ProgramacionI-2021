/*  Dadas las 4 notas obtenidas por un alumno, calcule e informe por pantalla
su promedio e informe con una leyenda si está aprobado o no. La condición de aprobación
es obtener un promedio mayor o igual que 4 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1, nota2, nota3, nota4;
    float promedio;

    printf("Ingrese la primer nota: ");
    scanf("%f", &nota1);

    fflush(stdin);
    printf("Ingrese la segunda nota: ");
    scanf("%f", &nota2);

    fflush(stdin);
    printf("Ingrese la tercer nota: ");
    scanf("%f", &nota3);

    fflush(stdin);
    printf("Ingrese la cuarta nota: ");
    scanf("%f", &nota4);

    promedio = ((nota1+nota2+nota3+nota4)/4);

    if (promedio >= 4)
        printf("Aprobado");
    else
        printf("Desaprobado");



    return 0;
}
