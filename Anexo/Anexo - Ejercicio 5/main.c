/* Se ingresan los siguientes datos del personal de una fábrica: legajo (valores validos entre
1200 y 4000), edad y genero (F/M/O). Se ingresa por cada empleado un número de sueldos
correspondiente a tres sectores donde realizan tareas distintas. Alguno de ellos puede ser
cero, lo que significa que no realizan tareas en ese sector. El número de empleados no se
conoce. El ingreso de datos finaliza con legajo -1. A partir de estos datos, se pide informar
por pantalla:
a. Cantidad de empleados
b. Porcentaje de personal ‘F’ y ‘M’
c. Promedio de edad de los empleados
d. El número de legajo del empleado de sexo masculino de mayor edad. */

#include <stdio.h>
#include <stdlib.h>

int ingresoVerifLegajo (){

    int leg;

    printf("Ingrese numero de legajo: ");
    scanf("%d", &leg);
    fflush(stdin);

    if ((leg < 1200) || (leg > 4000)){
        leg = -1;
        printf("El numero de legajo ingresado es invalido, cerrando...\n");
    }

    return (leg);
}

void datosDeEmpleado (int* edad, char* genero, int* contadorM, int* contadorF, int* sumEdad){

    printf("Ingrese la edad del empleado: ");
    scanf("%d", &(*edad));
    fflush(stdin);

    (*sumEdad) = (*sumEdad) + (*edad);

    printf("Ingrese el genero del empleado: ");
    scanf("%c", &(*genero));
    fflush(stdin);

    if ((*genero) == 'm'){
        (*contadorM)++;
    }
    if ((*genero) == 'f'){
        (*contadorF)++;
    }
}

void calculadorSueldos (float* acum1, float* acum2, float* acum3){

    float sueldo1, sueldo2, sueldo3;

    printf("Si el empleado no trabaja en el sector, ingresar 0 para saltear o salir... \n");

    printf("Ingrese los sueldos correspondientes al primer: ");
    scanf("%f", &sueldo1);

    while (sueldo1 != 0){
        (*acum1) += sueldo1;
        scanf("%f", &sueldo1);
        fflush(stdin);
    }

    printf("Ingrese los sueldos correspondientes al segundo sector: ");
    scanf("%f", &sueldo2);

    while (sueldo2 != 0){
        (*acum2) += sueldo2;
        scanf("%f", &sueldo2);
        fflush(stdin);
    }

    printf("Ingrese los sueldos correspondientes al tercer sector: ");
    scanf("%f", &sueldo3);

    while (sueldo3 != 0){
        (*acum3) += sueldo3;
        scanf("%f", &sueldo3);
        fflush(stdin);
    }

}

void porcentual (int* machos, int* hembras, int* empleados){

    float porcentajeM = (100*(*machos) / (*empleados));
    float porcentajeF = (100*(*hembras) / (*empleados));

    printf("Procentaje de hombres = %.1f\n", porcentajeM);
    printf("Procentaje de mujeres = %.1f\n", porcentajeF);

}

void promedioEdad (int* edad, int* empleados){

    float promediador = ((*edad)/(*empleados));
    printf("Promedio de edad = %.1f \n", promediador);

}

void masculinoMayor (char* genero, int*edad, int* legajo, int* edadMax, int* legajoMax){

    if (((*genero) == 'm')){
        if ((*edad) > (*edadMax)){
            (*edadMax) = (*edad);
            (*legajoMax) = (*legajo);
        }
    }

    printf("El legajo %d es el mayor con %d anios \n", (*legajoMax), (*edadMax));
}

int main()
{
    int legajo, edad, empleados = 0, machos = 0, hembras = 0, contadorO = 0, acumEdad = 0, maxEdad = 0, legajoMax = 0;
    float acumSueldo1, acumSueldo2, acumSueldo3;
    char genero;

    legajo = ingresoVerifLegajo();

    while (legajo != -1){

        if (legajo != -1)
        {
            empleados++;
        }

        datosDeEmpleado(&edad, &genero, &machos, &hembras, &acumEdad);

        calculadorSueldos(&acumSueldo1, &acumSueldo2, &acumSueldo3);

        masculinoMayor(&genero, &edad, &legajo, &maxEdad, &legajoMax);

        legajo = ingresoVerifLegajo();

    }

    printf("Numero de empleados: %d\n", empleados);
    porcentual(&machos, &hembras, &empleados);
    promedioEdad(&acumEdad, &empleados);

    return 0;
}
