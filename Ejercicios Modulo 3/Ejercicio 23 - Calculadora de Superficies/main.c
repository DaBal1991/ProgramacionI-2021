/* RECOMENDADO: Escribe un programa teniendo en cuenta las siguientes funciones:
• leeOpcion lee la opción deseada y comprueba su validez
• menú muestra el menú en la pantalla
• cuadrado, circulo, rectángulo, trapecio, triángulo calculan la superficie
correspondiente. (una funcion para cada figura)

El menú por mostrar sería algo como lo que sigue:
************************************
****** CÁLCULO DE SUPERFICIES ******
1. Cuadrado (lado*lado)
2. Círculo (pi*radio*radio)
3. Rectángulo (base*altura)
4. Trapecio (base1+base2)*altura/2)
5. Triángulo (base*altura)/2)
0. Salir del programa
************************************
*/

#include <stdio.h>
#include <stdlib.h>

int menuGran ();
void cuadrado ();
void circulo ();
void rectangulo();
void trapecio ();
void triangulo ();
void mostrarMenu();

int main()
{
    int opcion;

    opcion = menuGran();

    while (opcion != 0){

        switch (opcion){
            case 1:
                cuadrado();
                break;
            case 2:
                circulo();
                break;
            case 3:
                rectangulo();
                break;
            case 4:
                trapecio();
                break;
            case 5:
                triangulo();
                break;
        }

        opcion = menuGran();

    }

    return 0;
}

int menuGran(){

    int opcion;

    mostrarMenu();
    scanf("%d", &opcion);

    while ((opcion < 0) || (opcion > 5)){
        printf("Opcion invalida, ingrese otra opcion \n");
        mostrarMenu();
        scanf("%d", &opcion);
    }

    return opcion;
}

void mostrarMenu(){
    printf("************************************\n");
    printf("****** CÁLCULO DE SUPERFICIES ******\n");
    printf("1. Cuadrado (lado*lado)\n");
    printf("2. Círculo (pi*radio*radio)\n");
    printf("3. Rectángulo (base*altura)\n");
    printf("4. Trapecio (base1+base2)*(altura/2)\n");
    printf("5. Triángulo (base*altura)/2)\n");
    printf("0. Salir del programa\n");
    printf("************************************\n");

}

void cuadrado (){
    float lado;

    printf("Ingrese el valor del lado: ");
    scanf("%f", &lado);

    printf("Valor de la superficie del cuadrado = %.1f \n", lado*lado);

}

void circulo (){
    float pi = 3.14, radio;

    printf("Ingrese el valor del radio: ");
    scanf("%f", &radio);

    printf("Valor de la superficie del circulo = %.1f \n", radio*radio*pi);

}

void rectangulo (){
    float lado1, lado2;

    printf("Ingrese el valor de la base: ");
    scanf("%f", &lado1);

    printf("Ingrese el valor de la altura: ");
    scanf("%f", &lado2);

    printf("Valor de la superficie del rectangulo = %.1f \n", lado1*lado2);
}

void trapecio (){
    float base1, base2, altura;

    printf("Ingrese el valor de la base inferior: ");
    scanf("%f", &base1);

    printf("Ingrese el valor de la base superior: ");
    scanf("%f", &base2);

    printf("Ingrese el valor de la altura: ");
    scanf("%f", &altura);

    printf("Valor de la superficie del trapecio = %.1f \n", (base1+base2)*(altura/2));
}

void triangulo (){
    float base, altura;

    printf("Ingrese el valor de la base: ");
    scanf("%f", &base);

    printf("Ingrese el valor de la altura: ");
    scanf("%f", &altura);

    printf("Valor de la superficie del triangulo = %.1f \n", ((base*altura)/2));
}
