#include <stdio.h>

int main() {
    float lado1, lado2, lado3;

    printf("Teclea la longitud del primer lado del triángulo: ");
    scanf("%f", &lado1);
    printf("Teclea la longitud del segundo lado del triángulo: ");
    scanf("%f", &lado2);
    printf("teclea la longitud del tercer lado del triángulo: ");
    scanf("%f", &lado3);

    int esEquilatero = (lado1 == lado2 && lado2 == lado3);
    int puedeSerIsosceles = (lado1 == lado2 || lado1 == lado3 || lado2 == lado3);
    
    if (!esEquilatero && puedeSerIsosceles) {
        printf("El triángulo es Isosceles.\n");
    }
}
