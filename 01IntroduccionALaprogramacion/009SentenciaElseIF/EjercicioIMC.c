#include <stdio.h>
#include <math.h>

int main() {

    float altura;
    float peso;
    float imc;

    printf("Ingrese su peso en Kilogramos: ");
    scanf("%f", &peso);
    printf("Ingrese su altura en metros: ");
    scanf("%f", &altura);
    printf("\n");

    imc = (peso/pow(altura,2));

    if (imc < 18.5){
        printf("Su indice de masa corporal es: %f\n", imc);
        printf("Bajo peso. Se recomienda consultar a un profesional de la salud.");   
    }
    else if (imc <= 24.9){
        printf("Su indice de masa corporal es: %f\n", imc);
        printf("Peso normal. ¡Bien Hecho!\n");
    }
    else if (imc >= 30){
        printf("Su indice de masa corporal es: %f\n", imc);
        printf("Obesidad. Se recomienda consultar a un profesional de la salud y seguir un plan de salud.\n");
    }
    
    
}
