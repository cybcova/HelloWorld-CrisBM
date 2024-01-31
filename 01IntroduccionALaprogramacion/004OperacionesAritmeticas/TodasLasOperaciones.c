#include <stdio.h>
#include <math.h>

int main() {
    // Suma
    int a_suma = 5;
    int b_suma = 3;
    int suma = a_suma + b_suma;
    printf("La suma de %d y %d es: %d\n", a_suma, b_suma, suma);

    // Resta
    int a_resta = 8;
    int b_resta = 4;
    int resta = a_resta - b_resta;
    printf("La resta de %d y %d es: %d\n", a_resta, b_resta, resta);

    // Multiplicación
    int a_multiplicacion = 6;
    int b_multiplicacion = 7;
    int multiplicacion = a_multiplicacion * b_multiplicacion;
    printf("La multiplicación de %d y %d es: %d\n", a_multiplicacion, b_multiplicacion, multiplicacion);

    // División
    float a_division = 10.0;
    float b_division = 2.0;
    float division = a_division / b_division;
    printf("La división de %f entre %f es: %f\n", a_division, b_division, division);

    // Módulo
    int a_modulo = 17;
    int b_modulo = 5;
    int modulo = a_modulo % b_modulo;
    printf("El módulo de %d entre %d es: %d\n", a_modulo, b_modulo, modulo);

    // Potencia
    float base_potencia = 2.0;
    float exponente_potencia = 3.0;
    float potencia = pow(base_potencia, exponente_potencia);
    printf("%f elevado a %f es: %f\n", base_potencia, exponente_potencia, potencia);

    return 0;
}
