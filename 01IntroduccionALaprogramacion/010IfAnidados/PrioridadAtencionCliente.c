#include <stdio.h>

void limpiarBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
        // Descartar caracteres restantes en el buffer
    }
}

int main() {
    // Datos de entrada
    char gravedad;
    int antiguedad;

    // Solicitar datos al usuario
    printf("Ingrese la gravedad del problema (B = baja, M = media, A = alta): ");
    scanf("%c", &gravedad);
    // Limpiar el buffer después de leer el carácter
    limpiarBuffer();
    
    
    printf("Ingrese la antigüedad del cliente en años: ");
    scanf("%d", &antiguedad);

    // Evaluación del nivel de prioridad
    if (gravedad == 'A') {
        printf("Nivel de prioridad Muy alta\n");
    } else if (gravedad == 'M') {
        if (antiguedad >= 5) {
            printf("Nivel de prioridad Alta\n");
        } else {
            printf("Nivel de prioridad Media\n");
        }
    } else if (gravedad == 'B') {
        if (antiguedad >= 3) {
            printf("Nivel de prioridad Media\n");
        } else {
            printf("Nivel de prioridad Baja\n");
        }
    }
    return 0;
}