#include <stdio.h>

int main() {

    char genero;
    char F = 'F';
    char M = 'M';
    float edad;

    printf("Ingrese el genero F/M: ");
    scanf("%c", &genero);
    printf("Ingrese su edad: ");
    scanf("%f", &edad);
    printf("\n");

    if (genero != F){
    }else if (edad >= 30){
        printf("Quieres un seguro de maternidad.");

    }else if (edad < 30){
        printf("Quieres un seguro de salud.");
    }

    if (genero != M){
    }else if (edad >= 30){
        printf("Quieres un seguro de vida.");

    }else if (edad < 30){
        printf("Quieres un seguro de auto.");
    }
    
}
