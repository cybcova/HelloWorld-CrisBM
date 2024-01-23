#include <stdio.h>

/*DATOS PRIMITIVOS*/

int main()
{
    //Numericos
    int entero = 1;
    float decimal = 0.1;

    //Simbolos
    char caracter = 'a';

    // Para imprimir un numero entero utilizaremos '%d'
    printf("El numero entero es %d\n", entero);
    
    // Para imprimir un numero de punto flotante utilizaremos '%f'
    printf("El numero de punto flotante es %f\n", decimal);
    
    // Para imprimir un caracter utilizaremos '%s'
    printf("El caracter es %c\n", caracter);

    //Imprimimos todos
    printf("Todos : %d - %f - %c \n", entero, decimal, caracter);
}