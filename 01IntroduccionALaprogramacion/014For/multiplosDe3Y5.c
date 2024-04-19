#include <stdio.h>

int main() {
    int numeroUsuario;
    int residuo3;
    int residuo5;

    printf("Ingresa un número entero positivo N: ");
    scanf("%d", &numeroUsuario);

    for (int i = 1; i <= numeroUsuario; i++){
        residuo3 = i % 3;
        residuo5 = i % 5;
       if (residuo3 != 0 && residuo5 != 0){
          printf("%d", i);  
        } else {
           printf("Hola somos los multiplos de: ", i); 
        } if (residuo3 == 0){
           printf("3 "); 
        } if (residuo5 == 0){
           printf("5");
        } 
        printf("\n");
    }

    return 0;
}