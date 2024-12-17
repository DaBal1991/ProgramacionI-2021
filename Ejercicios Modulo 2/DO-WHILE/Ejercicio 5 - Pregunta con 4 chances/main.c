/* Escriba un programa que le permita al usuario intentar hasta cuatro veces
la respuesta a una cierta pregunta. Si el usuario no acierta a los cuatro intentos, se le deberá
indicar la respuesta correcta. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int respuesta;
    int contador = 0;

    printf("Cuanto es 2 + 2 \n");

    do{
        fflush(stdin);
        scanf("%d", &respuesta);

        if (respuesta == 4){
            printf("Respuesta correcta \n");
            contador = 4;
        }
        else if (respuesta != 4)
        {
            contador = contador + 1;
        }

    }while(contador <= 3);

    if (respuesta != 4){
        printf("La respuesta era 4");
    }

  return 0;
}
