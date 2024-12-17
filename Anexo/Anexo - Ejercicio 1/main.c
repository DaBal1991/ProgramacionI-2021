/* Dentro de main:
a. �Qu� valor es asignado a i? i = 'P'
b. �Qu� valor es asignado a j? j = 'Q'
c. �Qu� valores son escritos por la primera instrucci�n printf()? a = X b = Y
d. �Qu� valores son escritos por la segunda instrucci�n printf()? a = P b = Q
e. Realizar la traza del programa para contestar de manera razonada a las preguntas */

#include <stdio.h>
#include <stdlib.h>

char func1(char c1, char c2){
    c1 = 'P';
    c2 = 'Q';

    if (c1 < c2)
        return (c1);
    else
        return (c2);
}

char func2(char *c1, char *c2){

    *c1 = 'P';
    *c2 = 'Q';

    if (*c1 == *c2)
        return (*c1);
    else
        return (*c2);
}

int main() {
    char a = 'X';
    char b = 'Y';
    char i,j;

    i = func1(a,b);
    /* Primer printf*/
    printf("a=%c b=%c\n",a,b);

    j = func2(&a,&b);
    /* Segundo printf*/
    printf("a=%c b=%c\n",a,b);
}
