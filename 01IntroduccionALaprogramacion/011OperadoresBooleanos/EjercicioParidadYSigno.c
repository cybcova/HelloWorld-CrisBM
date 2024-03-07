#include <stdio.h>

int main() {
    // Declaración de una variable para almacenar el número
    int numero;

    // Solicitar al usuario que ingrese un número
    printf("Ingrese un numero entero: ");
    scanf("%d", &numero);

    // Verificar si el número es par
    if (numero % 2 == 0) {
        if (numero == 0){
            printf("El numero ingresado es cero.\n");
        }
        else if (numero >= 0){
            printf("El numero ingresado es par.\n");
        } else {
            printf("El numero ingresado es par negativo.\n");
        }
    }

    // Verificar si el número es impar
    if (numero % 2 != 0) {
     if (numero >= 0){
            printf("El numero ingresado es impar.\n");
        } else {
            printf("El numero ingresado es impar negativo.\n");
        }
    }


    // Fin del programa
    return 0;
}