#include <stdio.h>

int main() {
    float peso, altura;

    // Solicitar al usuario que ingrese su peso y altura
    printf("Ingrese su peso en kilogramos: ");
    scanf("%f", &peso);

    printf("Ingrese su altura en metros: ");
    scanf("%f", &altura);

    // Calcular el indice de masa corporal (IMC)
    float imc = peso / (altura * altura);

    // Mostrar el IMC
    printf("Su indice de masa corporal (IMC) es: %f\n", imc);

    // Tomar decisiones basadas en el IMC
    if (imc < 18.5) {
        printf("Bajo peso. Se recomienda consultar a un profesional de la salud.\n");
    } else if (imc < 24.9) {
        printf("Peso normal. ¡Bien hecho!\n");
    } else if (imc < 29.9) {
        printf("Sobrepeso. Se recomienda hacer ejercicio regular y llevar una dieta equilibrada.\n");
    } else {
        printf("Obesidad. Se recomienda consultar a un profesional de la salud y seguir un plan de salud.\n");
    }

    return 0;
}