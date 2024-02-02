#include <stdio.h>

int main(){
    
    float calificacion1;
    float calificacion2; 
    float calificacion3;
    float calificacion4;
    float calificacion5;
    float promedio;

    printf("Escriba las calificaciones de sus alunmos para sacar el promedio\n");
    printf("Escriba la primera calificacion:");
    scanf("%f",&calificacion1);
    printf("Escriba la segunda calificacion:");
    scanf("%f",&calificacion2);
    printf("Escriba la tercera calificacion:");
    scanf("%f",&calificacion3);
    printf("Escriba la cuarta calificacion:");
    scanf("%f",&calificacion4);
    printf("Escriba la quinta calificacion:");
    scanf("%f",&calificacion5);

    promedio = (calificacion1+calificacion2+calificacion3+calificacion4+calificacion5)/5;
    printf("Su promedio es de %f: \n",promedio);
    
}