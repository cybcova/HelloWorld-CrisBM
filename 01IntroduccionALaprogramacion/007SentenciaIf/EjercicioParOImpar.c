#include <stdio.h>

int main() {
    
    int numero;
    int digito;

    printf("Ingrese un numero entero:");
    scanf("%d", &numero);
    
    digito=numero%10;

    
    if (digito == 0){ 
     printf("El numero es par");
    }

    if (digito == 2){ 
     printf("El numero es par");
    }

    if (digito == 4){ 
     printf("El numero es par");
    }

    if (digito == 6){ 
     printf("El numero es par");
    }

    if (digito == 8){ 
     printf("El numero es par");
    }

    //Numeros impares

    if (digito == 1){ 
     printf("El numero es inpar");
    }

    if (digito == 3){ 
     printf("El numero es inpar");
    }

    if (digito == 5){ 
     printf("El numero es inpar");
    }

    if (digito == 7){ 
     printf("El numero es inpar");
    }

    if (digito == 9){ 
     printf("El numero es inpar");
    }
    
}