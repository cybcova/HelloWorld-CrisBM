#include <stdio.h>

int main() {
    int numeroUsuario;
    int resultado;

    printf("Ingresa un número entero positivo N: ");
    scanf("%d", &numeroUsuario);

    for (int i = 1; i <= numeroUsuario; i++) {
        resultado = resultado + i;
    }
    printf("La suma de los primeros %d numeros naturales es: %d", numeroUsuario, resultado);

    return 0;
}
