#include <stdio.h>

int main() {
    int numeroSecreto = 5;
    int contador = 1;
    int numeroUsuario;

    printf("Bienvenido al juego adivina el numero\n");

    do{
        printf("Ingresa el numero: ");
        scanf("%d", &numeroUsuario);

        if (numeroUsuario == numeroSecreto){
            printf("¡Ganaste ese era el numero secreto!");
        } else if(numeroUsuario > numeroSecreto){
            printf("El numero es menor\n");   
        } else if (numeroUsuario < numeroSecreto){
            printf("El numero es mayor\n");
        }
        contador++;
    } while (contador <= 10 && numeroUsuario != numeroSecreto);

    if(contador > 10){
        printf("Perdiste tus oportunidades\n");  
    }
    

    return 0;
}