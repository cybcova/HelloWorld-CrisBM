#include <stdio.h>

int main() {

    char opcion;

    printf("Ingrese una letra: \n");
    scanf("%c", &opcion);


    switch (opcion) {
        case 'a':
            printf("Es una vocal\n");
            break;
        case 'e':
            printf("Es una vocal");
            break;
        case 'i':
            printf("Es una vocal\n");
            break;
        case 'o':
            printf("Es una vocal\n");
            break;
        case 'u':
            printf("Es una vocal\n");
            break;
        case 'A':
            printf("Es una vocal\n");
            break;
        case 'E':
            printf("Es una vocal\n");
            break;
        case 'I':
            printf("Es una vocal\n");
            break;
        case 'O':
            printf("Es una vocal\n");
            break;
        case 'U':
            printf("Es una vocal\n");
            break;
        default:
            printf("Es una consonante\n");
    }

    return 0;
}
