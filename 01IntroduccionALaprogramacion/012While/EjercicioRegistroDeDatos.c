#include <stdio.h>

int main() {
    float contador = 1;
    float gastoDiario = 1;
    float promedio;
    float gastoAcumulado;
    float gastoMemoria;


    printf("Bienvenido al registro de gastos diarios.\n\n");
    printf("Por favor, ingrese sus gastos diarios uno por uno.\n");
    printf("Cuando haya terminado, ingrese 0 para calcular la suma y el promedio.\n\n");

    while (contador && (gastoDiario > 0)) {
        printf("Ingrese el gasto del dia: $");
        scanf("%f", &gastoDiario);
        if (gastoDiario > 0){
            gastoAcumulado = gastoDiario + gastoMemoria;
            gastoMemoria = gastoAcumulado;
            promedio = gastoAcumulado / contador;
        } else {
            printf("\nSuma total de gastos: $%.02f\n", gastoAcumulado);
            printf("Promedio de gastos diarios: $%.02f\n\n", promedio);
            printf("¡Gracias por usar el registro de gastos diarios!");
        }
        contador++;
    }

    return 0;
}