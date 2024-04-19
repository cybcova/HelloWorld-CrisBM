#include <stdio.h>

int main() {

    // Inicialización: i se inicializa en 1
    // Condición: el bucle continuará mientras i sea menor o igual a 5
    // Incremento: después de cada iteración, i se incrementa en 1
    for (int i = 1; i <= 5; i++) {
        printf("\n\n%d\n", i); // Imprime el valor actual de i
        printf("----\n");
        for (int j = 1; j <= 5; j++) {
            printf("%d - %d\n", i , j );
        }
        
    }

    return 0;
}
