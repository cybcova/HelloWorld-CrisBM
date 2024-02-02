#include <stdio.h>

int main() {

    float costo;
    float envio;
    float impuesto;
    float total;

    printf("Calcularemos el costo total de una compra\n\n");
    printf("Ingrese el precio base del producto: ");
    scanf("%f", &costo);

    printf("Ingrese el porcentaje de impuestos aplicados: ");
    scanf("%f", &impuesto);

    printf("Ingrese el costo del envio: ");
    scanf("%f", &envio);
    printf("\n");

    printf("Calculando el costo total...\n");
    total = costo+envio+impuesto;
    printf("-----------------------------\n\n");

    printf("Costo Total: %.2f", total);
}