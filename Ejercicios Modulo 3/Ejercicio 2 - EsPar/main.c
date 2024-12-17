/* El siguiente programa indica si un número leído desde el teclado es par:
int main ()
{
    int numero;

    scanf ("%d", &numero);

        if (numero%2 == 0)
            printf ("Es un número par");
        else
            printf ("Es un número impar");
}
a. Convierte el programa en una función void esPar(int unNumero).
b. Luego convierte el programa en una función int esPar(int unNumero) que
devuelve “verdadero” si es par. ¿Tendría más sentido?
c. Piensen cual sería su principal diferencia para el usuario programador. */

#include <stdio.h>
#include <stdlib.h>

/* A
void esPar (int unNumero){

        if (unNumero%2 == 0)
            printf ("Es un numero par");
        else
            printf ("Es un numero impar");
}

int main (){

    int numero;

    scanf ("%d", &numero);
    esPar(numero);

}

*/

int esPar (int unNumero){

        if (unNumero%2 == 0)
            printf ("Verdadero");
        else
            printf ("Falso");
}

int main (){

    int numero;

    scanf ("%d", &numero);
    esPar(numero);

}
