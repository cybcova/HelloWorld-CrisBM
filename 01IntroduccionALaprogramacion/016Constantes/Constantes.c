#include <stdio.h>

// Definición de la constante de gravedad
const float GRAVEDAD_DE_LA_TIERRA = 9.81;
const float GRAVEDAD_DE_LA_LUNA = 1.62;

const float PI = 3.1416;

const int MAX_PEDIDOS=10;
const int MIN_JUGADORES=1;

int main() {
    float alturaInicial;
    float velocidadFinal;

    // Solicitar al usuario la altura inicial desde la que cae el objeto
    printf("Ingrese la altura inicial (en metros): ");
    scanf("%f", &alturaInicial);

    // Calcular la velocidad final usando la función definida
    velocidadFinal = sqrt(2 * GRAVEDAD_DE_LA_TIERRA * alturaInicial);

    // Mostrar el resultado al usuario
    printf("La velocidad final del objeto en caída libre es: %.2f m/s\n", velocidadFinal);

    return 0;
}