/* Definir un tipo de dato llamado Fecha compuesto por 3 campos llamados día, mes y año.
Además defina y desarrolle sus operaciones getDia(), getMes(), getAnio() y
isBisiesto() */

#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int dia;
    int mes;
    int anio;
}fechaCompleta;

fechaCompleta asignarFecha (){
    fechaCompleta granDia;
    printf("Ingrese un dia: ");
    scanf("%d", &granDia.dia);

    printf("Ingrese un mes: ");
    scanf("%d", &granDia.mes);

    printf("Ingrese un anio: ");
    scanf("%d", &granDia.anio);

    return granDia;
}

void isBisiesto (fechaCompleta fecha){
    if (fecha.anio % 400 == 0 || (fecha.anio % 4 == 0 && fecha.anio%100 != 0))
        printf("Es bisiesto");
    else
        printf("No es bisiesto");

}

int main()
{
    fechaCompleta unaFecha;

    unaFecha = asignarFecha();

    printf("%d/%d/%d \n", unaFecha.dia, unaFecha.mes, unaFecha.anio);
    isBisiesto(unaFecha);

    return 0;
}
