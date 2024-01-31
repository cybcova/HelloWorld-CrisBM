#include <stdio.h>
#include <math.h>

int main(){
    
    int lado;
    int resultado; 
    int perimetro;
    int resultado2; 

    printf("Calcularemos el area de un cuadrado\n");
    printf("Ingrese el lado del cuadrado:\n");
    scanf("%d",&lado);

    resultado = pow(lado, 2);

    printf("Su area es: %d \n", resultado);

    printf("Ahora calcularemos el perimetro de el cuadrado\n");
    
    resultado2 = 4 * lado;

    printf("Su perimetro es: %d \n", resultado2);
    
}