#include <stdio.h>

int main() {
    int numeroUsuario;
    int espacio = 0;

    printf("Ingresa un número entero positivo N: ");
    scanf("%d", &numeroUsuario);

    //while (numeroUsuario > 0){
    for (int j = numeroUsuario; j >0  ; j--){
        
        printf("\n");
        for (int i = 1; i <= espacio; i++){
         printf(".");
        }
        espacio++;
        for (int i = 1; i <= numeroUsuario; i++){
         printf("*");
        }
        numeroUsuario--;
        
    }

    return 0;
}