#include <stdio.h>
#include <stdlib.h>

int main()
{   int dato = 1, i=0,resto = 0,cont = 0,cantPrimos=0,contPrimos=0;
    printf("ingrese cantidad de primos\n");
    scanf("%d",&cantPrimos);
    contPrimos=1;
    dato=2;
    while(contPrimos <= cantPrimos){
        cont=0;
        for(i=1; i<=dato && cont<= 2; i++){
            resto = dato%i;
            if(resto == 0)
                cont++;

        }
        if(cont == 2){
            contPrimos++;
            printf("%d\n",dato);
        }
        dato++;

    }



/*
    for(i=1; i<=dato && cont<= 2; i++){
        resto = dato%i;
        if(resto == 0) cont++;

    }
    if(cont == 2)
        printf("es primo");
*/

    return 0;
}
