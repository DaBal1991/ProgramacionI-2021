#include <stdio.h>

int main()
{
char c;
short s;
int i;
long l;
float f;
double d;

printf("\nA continuación…\n");
printf("El sizeof de un char es %d\n", sizeof(c));
printf("El sizeof de un short es %d\n", sizeof(s));
printf("El sizeof de un int es %d\n", sizeof(i));
printf("El sizeof de un long es %d\n", sizeof(l));
printf("El sizeof de un float es %d\n", sizeof(f));
printf("El sizeof de un double es %d\n", sizeof(d));
printf("El sizeof de un long double es %d\n", sizeof(d));

return 0;
}

//SizeOf devuelve el valor en bytes de las variables
