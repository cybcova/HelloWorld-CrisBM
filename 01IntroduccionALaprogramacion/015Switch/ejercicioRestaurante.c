#include <stdio.h>

int main()
{
    int opcion;

    printf("Bienvenido al restaurante!\n");

    do{
        printf("1. Pizza\n");
        printf("2. Hamburguesa\n");
        printf("3. Ensalada\n");
        printf("4. Salir\n");
        printf("Por favor seleccione una opción: ");
        scanf("%d", &opcion);

        switch (opcion){
        case 1:
            printf("Ha seleccionado Pizza. El precio es $10.00\n");
            break;
        case 2:
            printf("Ha seleccionado Hamburguesa. El precio es $8.00\n");
            break;
        case 3:
            printf("Ha seleccionado Ensalada. El precio es $6.00\n");
            break;
        case 4:
            printf("Gracias por visitarnos. Hasta luego!\n");
            break;
        default:
            printf("Opción no válida\n\n");
        }
    } while(opcion != 4);

    return 0;
}