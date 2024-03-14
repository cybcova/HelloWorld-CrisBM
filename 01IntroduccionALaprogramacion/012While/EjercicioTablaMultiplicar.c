#include <stdio.h>

int main() {
    int contador = 1;
    int numero;
    int resultado;

    printf("Ingrese un número: ");
    scanf("%d", &numero);

    while (contador <= 10) {
        resultado = numero*contador;
        printf("%d x %d = %d\n", numero, contador, resultado);
        contador++;
    }

    return 0;
}