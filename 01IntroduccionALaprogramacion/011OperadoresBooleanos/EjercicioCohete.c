#include <stdio.h>

int main() {

    int velocidad;
    int metros;

    printf("Ingrese la velocidad actual (m/s): ");
    scanf("%d", &velocidad);
    printf("Ingrese la altitud del cohete (metros): ");
    scanf("%d", &metros);
    printf("\n");
    
    if(velocidad >= 500 && metros >= 1000){
        printf("Lanzamiento seguro");
    } else {
       printf("No es seguro el lanzamiento"); 
    }
    

}