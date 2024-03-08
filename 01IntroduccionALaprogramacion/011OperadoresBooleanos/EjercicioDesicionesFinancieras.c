#include <stdio.h>

void limpiarBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
        // Descartar caracteres restantes en el buffer
    }
}

int main() {

    float rendimiento;
    float volatidad;
    char accion;

    printf("Ingrese el rendimiento esperado del mercado de valores: ");
    scanf("%f", &rendimiento);
    printf("Ingrese el índice de volatilidad: ");
    scanf("%f", &volatidad);
    printf("Ingrese la categoría de la acción ('T' para tecnología, 'O' para otro): ");
    limpiarBuffer();
    scanf("%c", &accion);
    printf("\n");
    
    printf("¡Recomendacion: ");
    if(rendimiento >= 8 && volatidad <= 15 && accion == 'T'){
        printf("Realizar la accion!");
    } else {
        printf("No realizar la accion!"); 
    }

}