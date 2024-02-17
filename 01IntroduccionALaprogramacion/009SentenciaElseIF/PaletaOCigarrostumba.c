#include <stdio.h>

//Añadir a Este codigo que si tiene mas de 100 años
//ofrecerle servicios funerarios

int main() {

    int edad;

    printf("Bienvenido a la tienda ¿Cuantos años tienes?\n");
    scanf("%d", &edad);

    if (edad >= 100) { 
        printf("Hola, somos de grupo gayoso, \ntiene un momento para hablar de nuestros servicios\n"); 
    }else if (edad >= 18) { 
        printf("¿Quieres cigarros?\n"); 
    }else if (edad>=0) {
        printf("Quieres una paleta?");
    }else {
        printf("Error");
    }

}