#include <stdio.h>

void limpiarBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
        // Descartar caracteres restantes en el buffer
    }
}

int main() {

    float temperatura;
    char clima;

    printf("Ingrese la temperatura actual: ");
    scanf("%f", &temperatura);
    printf("Ingrese el tipo de clima (S para soleado, N para nublado, L para lluvioso): ");
    limpiarBuffer();
    scanf("%c", &clima);
    

    if (temperatura >= 30) {
        if (clima == 'S' ){
            printf("Hace calor. Bastante calor. ¡Mantente hidratado!");
        }else if (clima == 'N'){
            printf("Hace calor. Ten cuidado, podría llover.");

        }else if (clima == 'L'){
            printf("Hace calor. La sensación térmica podría aumentar por las lluvias.");
        }
    } 

    else if (temperatura >= 15){
        if (clima == 'S' ){
            printf("La temperatura es agradable. Quizás deberías llevar protección solar.");
        }else if (clima == 'N'){
            printf("La temperatura es agradable. Deberías llevar un paraguas por si acaso.");

        }else if (clima == 'L'){
            printf("La temperatura es agradable. Considera las lluvias antes de salir de casa.");
        }
    }
    
    else if (temperatura < 15){
        if (clima == 'S' ){
            printf("Hace frío. Ideal para un paseo al aire libre.");
        }else if (clima == 'N'){
            printf("Hace frío. Un día perfecto para disfrutar de una buena película en casa.");
        }else if (clima == 'L'){
            printf("Hace frío. Riesgo de inundaciones.");
        }
    }
}
