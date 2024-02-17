#include <stdio.h>

int main() {

    int edad;

    printf("Bienvenido a la tienda ¿Cuantos años tienes?\n");
    scanf("%d", &edad);

    if (edad >= 18) { 
     printf("¿Quieres cigarros?\n"); 
    }
    else if (edad >= 0) {
     printf("Quieres una paleta?");
    }
    if(edad >= 100){
        printf("Quieres un servicio funerario?");
    }
    


}