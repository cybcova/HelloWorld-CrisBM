#include <stdio.h>

int main() {
    int gasto;
    int suma = 0;
    int contador = 0;

    printf("Bienvenido al registro de gastos diarios.\n");
    printf("Por favor, ingrese sus gastos diarios uno por uno.\n");
    printf("Cuando haya terminado, ingrese 0 para calcular la suma y el promedio.\n\n");

    printf("Ingrese el gasto del día: ");
    scanf("%d", &gasto);
    suma += gasto;
    contador++;

    while (gasto != 0) {
        printf("Ingrese el gasto del día: ");
        scanf("%d", &gasto);
        if(gasto != 0){
            suma += gasto;
            contador++;
        }
    }


    float promedio = (float)suma / contador;

    printf("\nSuma de gastos del día: $%d\n", suma);
    printf("Promedio de gastos diarios: $%f\n", promedio);


    printf("\n¡Gracias por usar el registro de gastos diarios!\n");

    return 0;
}