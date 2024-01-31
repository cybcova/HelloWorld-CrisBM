#include <stdio.h>

int main(){
    
    int lado;
    int resultado; 
    int perimetro;
    int resultado2; 

    printf("Calcularemos el area de un cuadrado\n");
    printf("Ingrese el lado del cuadrado:\n");
    scanf("%d",&lado);
    //No se por que no me detecta aqui el signo al cuadrado
    resultado = lado^2;

    printf("Su area es: %d \n \n", resultado);

    printf("Ahora calcularemos el perimetro de el cuadrado\n");
    printf("Ingrese el perimetro del cuadrado:\n");
    scanf("%d",&perimetro);
    
    resultado2 = perimetro+perimetro+perimetro+perimetro;

    printf("Su area es: %d \n", resultado2);
    
}