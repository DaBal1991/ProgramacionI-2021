/* Desarrolle la función “fechaValida” que reciba por parámetro un día, un mes y un año y
devuelva por resultado “verdadero” si la fecha es válida (tener en cuenta años bisiestos) */

#include <stdio.h>
#include <stdlib.h>


// Funcion que determina años bisiestos
int esBisiesto (int anual){

    if ((anual%400 == 0) || ((anual%4 == 0) && (anual%100 != 0)))
        return 1;
    else
        return 0;

}

// Funcion que determina validez de los meses, años, y a su vez recurre a la funcion de arriba
int fechaValida (int ano, int mes, int dia){

    if (dia > 31)
        return 0;

    switch (mes){
        case 1:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 2:
             if (esBisiesto (ano) == 1){
                if (dia >= 1 && dia <= 29)
                    return 1;
                else
                    return 0;
             }
             else{
                if (dia >= 1 && dia <= 28)
                    return 1;
                else
                    return 0;
             }
             break;
        default:
            return 0;
            break;
    }
}

// Funcion principal
int main()
{
    int day, month, year, check;

    printf("Ingrese año: \n");
    scanf("%d", &year);
    fflush(stdin);

    printf("Ingrese mes: \n");
    scanf("%d", &month);
    fflush(stdin);

    printf("Ingrese dia: \n");
    scanf("%d", &day);
    fflush(stdin);

    check = fechaValida(year, month, day);

    if (check == 1)
        printf("Verdadero");
    else
        printf("Falso");

    return 0;
}
