#include <stdio.h>

int main() {
    int numeroUsuario;
    int espacio = 1;
    int piramideCompleta;

    printf("Ingresa un número entero positivo N: ");
    scanf("%d", &numeroUsuario);

    piramideCompleta = numeroUsuario+numeroUsuario-1;

    while (numeroUsuario > 0){
        for (int i = 1; i <= piramideCompleta; i++){
         printf("*");
        }
        printf("\n");
        piramideCompleta = piramideCompleta - 2;
        for (int i = 1; i <= espacio; i++){
         printf(" "); 
        }
        espacio++;
        numeroUsuario--;
    }

    return 0;
}