#include <stdio.h>

int main() {
    int contador = 1;
    int n;
    int presente = 0;

    //Forma viendo al futuro
    int auxiliar = 1;
    int siguiente = 0;
    
    //Forma viendo al pasado
    int anterior1 = 0;
    int anterior2 = 0;

    printf("Ingrese un número entero positivo para la cantidad de elementos de la secuencia de Fibonacci: ");
    scanf("%d", &n);

    printf("Los primeros %d números de la secuencia de Fibonacci son:\n", n);

    while (contador <= n) {

        printf("%d, ", presente);
        
        if(contador == 1 ){
            presente++;
            anterior1 = 0;
        }
        else{
            anterior2 = anterior1;
            anterior1 = presente;
            presente = anterior1 + anterior2;
            
        }
        
        /*siguiente = presente + auxiliar;
        presente = auxiliar;
        auxiliar = siguiente;*/

        contador++;
    }

    printf("\n");

    return 0;
}