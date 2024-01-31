#include <stdio.h>

int main(){

    int a;
    int b;
    int resultado;

    printf("Ingrese un numero:\n");
    scanf("%d",&a);
    printf("Tu base es: %d\n", a);

    printf("Ingrese otro numero:\n");
    scanf("%d",&b);
    printf("La altura es: %d\n", b);

    resultado = a*b;
    printf("La operacion es: %d x %d\n", a, b);

    printf("Su area es %d", resultado);
    
}