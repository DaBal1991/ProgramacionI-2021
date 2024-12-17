#include <stdio.h>
#include <stdlib.h>

/* ¿Qué emite este programa? NOTA: si bien en el curso no se pueden utilizar variables
globales, en este caso se utilizan para evaluar el seguimiento del código. a = 3, b = 5, c = 8 / a = 8 b = 5 c = 8*/

int a; /* variable global */

void funcion(int *b,int c){
    a = *b;
    *b = *b +c;
}

int main() {
    int b,c;
    b = 5;
    c = 3;

    funcion(&c,b);
    printf("a = %d b = %d c = %d",a,b,c);

    funcion(&a,5);
    printf("a = %d b = %d c = %d",a,b,c);

    return 0;
}
