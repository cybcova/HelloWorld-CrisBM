#include <stdio.h>

int main() {
    int numeroUsuario;
    int espacio = 1;

    printf("Ingresa un número entero positivo N: ");
    scanf("%d", &numeroUsuario);

    while (numeroUsuario > 0){
        for (int i = 1; i <= numeroUsuario; i++){
         printf("*");
        }
        printf("\n");
        numeroUsuario--;
        for (int i = 1; i <= espacio; i++){
         printf(" ");
        }
        espacio++;
    }

    return 0;
}