#include <stdio.h>

int main() {
    // Declaración de una variable para almacenar el número
    int numero;

    // Solicitar al usuario que ingrese un número
    printf("Ingrese un numero entero: ");
    scanf("%d", &numero);

    // Verificar si el número es par
    if (numero % 2 == 0) {
        // Imprimir un mensaje si el número es par
        printf("El numero ingresado es par.\n");
    }

    // Verificar si el número es impar
    if (numero % 2 != 0) {
        // Imprimir un mensaje si el número es impar
        printf("El numero ingresado es impar.\n");
    }

    // Fin del programa
    return 0;
}