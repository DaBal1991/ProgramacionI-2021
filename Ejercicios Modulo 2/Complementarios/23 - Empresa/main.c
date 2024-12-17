#include <stdio.h>
#include <stdlib.h>

int main()
{
    int codEmpleado = 0, edad = 0, cantNotas = 0, nota = 0;
    int promedio = 0, acum = 0, i = 0, empleados730 = 0;
    int notacero = 0, banderaCeros = 0;
    int edadMax = 0, edadMin = 999;
    int codEdadMax = 0, codEdadMin = 0;

    printf("Ingrese el codigo del empleado: \n");
    scanf("%d", &codEmpleado);
    fflush(stdin);

    while (codEmpleado != -1){
    acum = 0;
    promedio = 0;
    banderaCeros = 0;

    printf("Ingrese la edad del empleado: \n");
    scanf("%d", &edad);
    fflush(stdin);

    printf("Ingrese la cantidad de notas deseadas: \n");
    scanf("%d", &cantNotas);
    fflush(stdin);

        for(i = 1; i <= cantNotas ; i++){

            printf("Ingrese una nota: \n");
            scanf("%d", &nota);

            acum = acum + nota;
            promedio = acum/cantNotas;

            if (nota == 0)
                banderaCeros = 1;
        }

    printf("Promedio: %d\n", promedio);

    if ((promedio >= 7) && (edad < 30))
        empleados730++;
    if (banderaCeros == 1)
        notacero++;

    if (edad > edadMax){
        edadMax = edad;
        codEdadMax = codEmpleado;
    }
    if (edad < edadMax);{
        edadMin = edad;
        codEdadMin = codEmpleado;
    }

    printf("Ingrese el codigo del empleado: \n");
    scanf("%d", &codEmpleado);
    fflush(stdin);

    }

    printf("Cantidad de empleados con promedio mayor o igual a 7 y menores de 30: %d\n", empleados730);
    printf("Cantidad de empleados con nota cero: %d\n", notacero);
    printf("El empleado con mas edad es %d con %d\n", codEdadMax, edadMax);
    printf("El empleado con menos edad es %d con %d\n", codEdadMin, edadMin);

    return 0;
}
