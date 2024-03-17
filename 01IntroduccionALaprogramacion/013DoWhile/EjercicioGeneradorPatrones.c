#include <stdio.h>

int main() {
    int numero = 1;
    int numeroLectura;
    int repeticion;

    printf("Ingrese un numero: ");
    scanf("%d", &numeroLectura);
    
    do{
        repeticion = 0;
        while (repeticion < numero){
            printf("%d ", numero);
            repeticion++;
        }
        numero++;
        printf("\n");
    } while (numero <= numeroLectura);
    
    return 0;
}