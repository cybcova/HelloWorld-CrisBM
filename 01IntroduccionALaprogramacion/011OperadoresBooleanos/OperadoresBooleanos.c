#include <stdio.h>

int main() {
    int a = 1;
    int b = 0;
    
    // Ejemplo de AND (Y)
    if (a && b) {
        printf("La condición a && b es verdadera.\n");
    } else {
        printf("La condición a && b es falsa.\n");
    }

    // Ejemplo de OR (O)
    if (a || b) {
        printf("La condición a || b es verdadera.\n");
    } else {
        printf("La condición a || b es falsa.\n");
    }

    // Ejemplo de NOT (NO)
    if (!a) {
        printf("La condición !a es verdadera.\n");
    } else {
        printf("La condición !a es falsa.\n");
    }

    // Ejemplo de XOR (O exclusivo)
    if (a ^ b) {
        printf("La condición a ^ b es verdadera.\n");
    } else {
        printf("La condición a ^ b es falsa.\n");
    }

    return 0;
}