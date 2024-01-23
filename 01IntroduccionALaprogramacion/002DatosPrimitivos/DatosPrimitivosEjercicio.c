#include <stdio.h>

int main()
{

    //Declarar 3 numeros enteros

    int entero = 1;
    int entero2 = 24;
    int entero3 = 25;

    //Declarar 3 numeros flotantes

    float decimal = 0.1;
    float decimal2 = 0.22;
    float decimal3 = 0.333;

    // Declarar 3 simbolos

    char caracter = 'a';
    char caracter2 = 'b';
    char caracter3 = 'c';

    // Imprimir 1er numero entero con el primer numero flotante el primer simbolo
    //Todos separado por el simbolo "+"

    printf(" %d + %f + %c \n", entero, decimal, caracter);
    printf(" %d + %f + %c \n", entero2, decimal2, caracter2);
    printf(" %d + %f + %c \n", entero3, decimal3, caracter3);
}

