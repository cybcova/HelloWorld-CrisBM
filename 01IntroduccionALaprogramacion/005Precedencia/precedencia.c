#include <stdio.h>

int main() {
    // Ejemplo con operadores aritmeticos
    int a = 5, b = 3, c = 2;

    int result1 = a + b * c;  // Primero se multiplica y luego se suma
    printf("a + b * c = %d\n", result1);

    int result2 = (a + b) * c;  // Primero se suman los valores dentro del parentesis y luego se multiplica
    printf("(a + b) * c = %d\n", result2);

    int result3 = a - b / c;  // Primero se divide y luego se resta
    printf("a - b / c = %d\n", result3);

    int result4 = a % b;  // Operacion de modulo (resto de la division)
    printf("a %% b = %d\n", result4);

    int result5 = a * b + c;  // Primero se multiplica y luego se suma
    printf("a * b + c = %d\n", result5);

    return 0;
}