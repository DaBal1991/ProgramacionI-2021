#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m=5;
    int n=9;

        do
        {
        printf("%d %d \n",m,n);
        m = m + 2;
        n = n + 1;
        }while( m <= n);

        printf("%d %d \n",m,n);

    return 0;
}

/*
Imprime esto:
5 9
7 10
9 11
11 12
13 13
15 14

/*
