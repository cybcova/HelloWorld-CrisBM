#include <stdio.h>

int main() {

    char gravedad;
    int antiguedad;
    char a = 'a';
    char m = 'm';
    char b = 'b';

    printf("Ingrese la gravedad del problema (alta, media, baja): ");
    scanf("%c", &gravedad);

    printf("Ingrese la antiguedad del problema: ");
    scanf("%d", &antiguedad);
    printf("\n");

    if (gravedad == a){
        printf("Nivel de prioridad muy alta"); 
    } else if (gravedad == m){
        if (antiguedad >= 5){
         printf("Nivel de prioridad alta");    
        } else {
          printf("Nivel de prioridad media");   
        }
    } else if (gravedad == b){
         if (antiguedad >= 3){
         printf("Nivel de prioridad media");    
        } else {
          printf("Nivel de prioridad baja");   
        }
    }
}
