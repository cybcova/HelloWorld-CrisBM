#include <stdio.h>

int main() {
    char genero;
    int edad;

    printf("Ingrese el genero (M/F): ");
    scanf(" %c", &genero);

    printf("Ingrese la edad: ");
    scanf("%d", &edad);

    if (genero == 'M') {
        if (edad < 30) {
            printf("Le recomendamos un Seguro de Automovil Amplio.\n");
        } else {
            printf("Le recomendamos un Seguro de Vida.\n");
        }
    } else {
        if (edad < 30) {
            printf("Le recomendamos un Seguro de Salud.\n");
        } else {
            printf("Le recomendamos un Seguro de Maternidad.\n");
        }
    }

    return 0;
}
