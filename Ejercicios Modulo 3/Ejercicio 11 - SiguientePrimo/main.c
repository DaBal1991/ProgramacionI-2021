/* Realiza una función de nombre Siguiente tal que, recibiendo un número primo mayor que uno,
devuelva el número primo inmediatamente siguiente y superior a dicho número primo. Por
ejemplo, si se invoca siguiente(7), la función devolverá el número 11. */

#include <stdio.h>
#include <stdlib.h>

int siguiente (int);

int main()
{
    int num;

    printf("Ingrese un numero: ");
    scanf("%d", &num);

    siguiente(num);

    return 0;
}

int siguiente (int n){

    int resto = 0, i = 0, flag, j = 0;

    for (i = n+1;  i <= 1000; i++){ // (1) Ej: N = 7 -> arranca en 8                          A tener en cuenta que i trabaja hasta X numeros primos modificable (1000).
        flag = 0;                   // Reinicio de flag
        for (j = 2; j < n ; j++){  // (2) Empieza a testear divisores del 8, si encuentra uno, rompe y vuelve al punto 1, donde incrementa el numero a dividir en 9 y repite el proceso...
            if (i%j == 0)          //     hasta que el contador J llega al mismo numero que el contador I, de modo que no hubo ningun numero que lo dividiese exactamente y por ende, vuelve a (1)
            {                      //     donde el flag reinicia en 0.
                flag = 1;
                break;
            }
        }
        if (flag == 0){            // (3) Si no encontro ningun divisor, salvo el numero mismo, flag = 0, entonces emite ese numero, en el ejemplo de 7, seria su siguiente primo: 11
            printf("%d", i);
            break;
        }
    }
}
