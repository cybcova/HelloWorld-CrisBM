#include <stdio.h>

void limpiarBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
        // Descartar caracteres restantes en el buffer
    }
}

int main() {

    float numero1;
    float numero2;
    float resultado;
    char operador;

    printf("Bienvenido a la calculadora!\n\n");
    printf("Ingrese el primer número: ");
    scanf("%f", &numero1);
    printf("Ingrese el segundo número: ");
    scanf("%f", &numero2);
    printf("Ingrese el operador (+, -, *, /): ");
    limpiarBuffer();
    scanf("%c", &operador);

    switch (operador) {
        case '+':
            resultado=numero1+numero2;
            printf("El resultado de %.2f + %.2f = ", numero1, numero2 );
            break;
        case '-':
            resultado=numero1-numero2;
            printf("El resultado de %.2f - %.2f = ", numero1, numero2 );
            break;
        case '*':
            resultado=numero1*numero2;
            printf("El resultado de %.2f x %.2f = ", numero1, numero2 );
            break;
        case '/':
            resultado=numero1/numero2;
            printf("El resultado de %.2f / %.2f = ", numero1, numero2 );
            break;
        default:
            printf("Opción no válida\n");
    }

    printf("%.2f\n", resultado);

    return 0;
}