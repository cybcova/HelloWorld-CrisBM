#include <stdio.h>

int main() {
    int b = 1;
    int a = 1;
    int resultado;
 
    printf("Tablas de multiplicar\n");
    do{
        b = 1;
        printf("\n");
        while (b <= 10) {
            resultado = a*b;
            printf("%d x %d = %d\n", a, b, resultado);  
            b++;
        }
        a++;
    } while (a != b);

    return 0;
}