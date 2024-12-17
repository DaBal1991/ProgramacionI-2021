/* Desarrolle una función que reciba un vector de 10 números enteros y muestre los valores por
pantalla, eliminando las repeticiones. */

#include <stdio.h>
#include <stdlib.h>

void repetitivo (int v_original[], int num){
        int v_aux [10];
        int v_final [10];
        int cont,i,j=0,k,z=0;

        for (i=0;i<10;i++) {
                cont=0;
                num=v_original[i];
                v_aux[j]=num;
                j++;
                for (k=0;k<10;k++)
                        if ( v_aux[k] == num )
                                cont++;

                if ( cont == 1 ) {
                        v_final[z]=num;
                        z++;
                }
        }


        printf("El array simplificado es: \n");
        for (i=0;i<z;i++)
                printf ("%d \n",v_final[i]);



}

int main (void) {
        int v_original [10];

        printf("Ingrese valores al vector \n");
        for(int i = 0; i < 10; i++){
            printf("Valor %d del vector: ", i+1);
            scanf("%d", &v_original[i]);
        }

        repetitivo(v_original,10);

        return 0;
}
