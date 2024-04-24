#include <stdio.h>

int main() {
    float salarioHora1;
    float horasTrabajadas1;
    float salarioTotal1;
    
    float salarioHora2;
    float horasTrabajadas2;
    float salarioTotal2;

    printf("Ingrese el salario por hora: ");
    scanf("%f", &salarioHora1);

    printf("Ingrese las horas trabajadas: ");
    scanf("%f", &horasTrabajadas1);

    // Calcular el salario total
    salarioHora1 = salarioHora1 * horasTrabajadas1;

    printf("Ingrese el salario por hora: ");
    scanf("%f", &salarioHora2);

    printf("Ingrese las horas trabajadas: ");
    scanf("%f", &horasTrabajadas2);

    // Calcular el salario total
    salarioHora2 = salarioHora2 * horasTrabajadas2;


    printf("El salario total es: %d\n", salarioTotal2 > salarioTotal2);

    return 0;
}