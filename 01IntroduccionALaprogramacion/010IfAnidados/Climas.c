#include <stdio.h>

void limpiarBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
        // Descartar caracteres restantes en el buffer
    }
}

int main() {
    int temperatura;
    char clima;

    // Solicitar al usuario la temperatura y el tipo de clima
    printf("Ingresa la temperatura actual: ");
    scanf("%d", &temperatura);

    printf("Ingresa el tipo de clima (S para soleado, N para nublado, L para lluvioso): ");
    limpiarBuffer();
    scanf("%c", &clima);
    
    printf("\n----------------------------------\n");

    // Tomar decisiones basadas en la temperatura y el clima
    if (temperatura >= 30) {
        printf("Hace calor. ");

        if (clima == 'S') {
            printf("Bastante Calor. ¡Matente hidratado!\n");
        } else if (clima == 'N') {
            printf("Pero ten cuidado, podría llover.\n");
        } else if (clima == 'L'){
            printf("La sensacion termica podria aumentar por las lluvias.\n");
        } else {
            printf("clima no reconocido");
        }

    } else if ( temperatura >= 15) {
        printf("La temperatura es agradable. ");

        if (clima == 'S') {
            printf("Quizás deberías llevar protección solar.\n");
        } else if (clima == 'N') {
            printf("Deberias llevar un paraguas por si acaso.\n");
        } else {
            printf("Considera las lluvias antes de salir de casa\n");
        }

    } else {
        printf("Hace frío. ");
        if (clima == 'S') {
            printf("Ideal para un paseo al aire libre.\n");
        } else if (clima == 'N') {
            printf("Un día perfecto para disfrutar de una buena película en casa.\n");
        } else {
            printf("Riesgo de inundaciones.\n");
        }
    }

    return 0;
}