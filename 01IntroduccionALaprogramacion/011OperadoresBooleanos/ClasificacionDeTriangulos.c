#include <stdio.h>

int main() {

    int lado1;
    int lado2;
    int lado3;

    printf("Ingrese la longitud del lado 1: ");
    scanf("%d", &lado1);
    printf("Ingrese la longitud del lado 2: ");
    scanf("%d", &lado2);
    printf("Ingrese la longitud del lado 3: ");
    scanf("%d", &lado3);
    printf("\n");

    if (lado1 == lado2 && lado2 == lado3){
        printf("El triangulo es equilatero");
    } else if ((lado1 == lado2) || (lado2 == lado3) || (lado1 == lado3)){
        printf("El triangulo es isosceles");
    } else {
        printf("El triangulo es escaleno.");
    }

}