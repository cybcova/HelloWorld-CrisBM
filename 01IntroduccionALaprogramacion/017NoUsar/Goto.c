#include <stdio.h>

int main() {
    int num, suma = 0;

inicio:
    printf("Ingrese un número (ingrese 0 para salir): ");
    scanf("%d", &num);
    
    if (num == 0)
        goto fin; // Salir del bucle si el usuario ingresa 0
    
    suma += num;
    goto inicio; // Volver al inicio del bucle

fin:
    printf("La suma de los números ingresados es: %d\n", suma);
    
    return 0;
}