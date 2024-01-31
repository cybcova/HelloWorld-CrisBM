#include <stdio.h>

int main(){
    
    float d;
    float v; 
    float resultado; 

    printf("Calcularemos el tiempo que se tardara en recorrer un tren\n");
    printf("Ingrese la distancia que recorrera el tren:\n");
    scanf("%f",&d);

    printf("Ahora proporcione la velocidad\n");
    scanf("%f",&v);
    
    resultado = d/v;

    printf("El tiempo que se tardara en recorrer es: %f \n", resultado);
    
}