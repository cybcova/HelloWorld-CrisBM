#include <stdio.h>

int main() {
    int opcion = 2;

    switch (opcion) {
        case 1:
            printf("Seleccionaste la opción 1\n");
            break;
        case 2:
            printf("Seleccionaste la opción 2\n");
            break;
        case 3:
            printf("Seleccionaste la opción 3\n");
            break;
        default:
            printf("Opción no válida\n");
    }

    return 0;
}
