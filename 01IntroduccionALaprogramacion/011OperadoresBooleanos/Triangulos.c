#include <stdio.h>

int main() {
    // Ejemplo: Determinar el tipo de triangulo
    int lado1, lado2, lado3;

    // Solicitar al usuario que ingrese las longitudes de los lados
    printf("Ingrese la longitud del lado 1: ");
    scanf("%d", &lado1);

    printf("Ingrese la longitud del lado 2: ");
    scanf("%d", &lado2);

    printf("Ingrese la longitud del lado 3: ");
    scanf("%d", &lado3);

    // Verificar el tipo de triangulo
    if (lado1 == lado2 && lado2 == lado3) {
        printf("El triangulo es equilatero.\n");
    } else if (lado1 == lado2 || lado2 == lado3 || lado1 == lado3) {
        printf("El triangulo es isosceles.\n");
    } else {
        printf("El triangulo es escaleno.\n");
    }

    return 0;
}