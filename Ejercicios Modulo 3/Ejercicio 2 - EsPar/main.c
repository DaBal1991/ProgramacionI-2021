/* El siguiente programa indica si un n�mero le�do desde el teclado es par:
int main ()
{
    int numero;

    scanf ("%d", &numero);

        if (numero%2 == 0)
            printf ("Es un n�mero par");
        else
            printf ("Es un n�mero impar");
}
a. Convierte el programa en una funci�n void esPar(int unNumero).
b. Luego convierte el programa en una funci�n int esPar(int unNumero) que
devuelve �verdadero� si es par. �Tendr�a m�s sentido?
c. Piensen cual ser�a su principal diferencia para el usuario programador. */

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
