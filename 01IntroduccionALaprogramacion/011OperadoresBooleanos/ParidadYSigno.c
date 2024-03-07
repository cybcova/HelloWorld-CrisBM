#include <stdio.h>

int main() {
    // Declaración de variables
    int numero;

    // Entrada de datos
    printf("Ingresa un número entero: ");
    scanf("%d", &numero);

    // Verificación de paridad usando operadores booleanos y la estructura if
    if (numero % 2 == 0 && numero > 0) {
        printf("El número ingresado es par y positivo.\n");
    } else if (numero % 2 != 0 && numero > 0) {
        printf("El número ingresado es impar y positivo.\n");
    } else if (numero == 0) {
        printf("El número ingresado es cero.\n");
    } else {
        printf("El número ingresado es negativo.\n");
    }

    return 0;
}