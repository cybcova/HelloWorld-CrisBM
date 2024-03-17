#include <stdio.h>

void limpiarBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
        // Descartar caracteres restantes en el buffer
    }
}

int main() {

    char respuesta;
    int opcion;
    int a;
    int b;
    int resultadoAB;

    do{
        printf("Bienvenido a la Calculadora Básica\n");
        printf("1. Suma\n");
        printf("2. Resta\n");
        printf("3. Multiplicación\n");
        printf("4. División\n");
        printf("5. Salir\n\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);
        printf("--------------------\n");

        if (opcion == 1){
          printf("A selecionado suma\n");
          printf("Ingrese el primer número: ");
          scanf("%d", &a);
          printf("Ingrese el segundo número: ");
          scanf("%d", &b); 
          resultadoAB=a+b;
          printf("El resultado de %d + %d = %d\n", a, b, resultadoAB);

        } else if (opcion == 2){
          printf("A selecionado resta\n");
          printf("Ingrese el primer número: ");
          scanf("%d", &a);
          printf("Ingrese el segundo número: ");
          scanf("%d", &b); 
          resultadoAB=a-b;
          printf("El resultado de %d - %d = %d\n", a, b, resultadoAB);

        } else if (opcion == 3){
          printf("A selecionado multiplicación\n");
          printf("Ingrese el primer número: ");
          scanf("%d", &a);
          printf("Ingrese el segundo número: ");
          scanf("%d", &b); 
          resultadoAB=a*b;
          printf("El resultado de %d x %d = %d\n", a, b, resultadoAB);

        } else if (opcion == 4){
          printf("A selecionado división\n");
          printf("Ingrese el primer número: ");
          scanf("%d", &a);
          printf("Ingrese el segundo número: ");
          scanf("%d", &b); 
          resultadoAB=a/b;
          printf("El resultado de %d / %d = %d\n", a, b, resultadoAB);
          
        } else if (opcion == 5){
          printf("A selecionado SALIR\n");
        }

        printf("¿Desea realizar otra operación? (S/N): ");
        limpiarBuffer();
        scanf("%c", &respuesta);

    } while (respuesta == 'S');
    
    return 0;
}