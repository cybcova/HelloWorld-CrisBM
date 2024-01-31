#include <stdio.h>

int main(){
    
    int d;
    int v; 
    int resultado; 

    printf("Calcularemos el tiempo que se tardara en recorrer un tren\n");
    printf("Ingrese la distancia que recorrera el tren:\n");
    scanf("%d",&d);

    printf("Ahora proporcione la velocidad\n");
    printf("Ingrese el perimetro del cuadrado:\n");
    scanf("%d",&v);
    
    resultado = d/v;

    printf("El tiempo que se tardara en recorrer es: %d \n", resultado);
    
}