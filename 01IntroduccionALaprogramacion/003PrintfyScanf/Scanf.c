#include <stdio.h>

/*Printf a fondo*/

void miFflush (){while (getchar() != '\n');}

int main()
{
    int enteroRecibido;
    float decimalRecibido;
    char caracterRecibido;

    printf("Ingrese un entero:\n");
    scanf("%d",&enteroRecibido);
    printf("Ingrese un decimal:\n");
    scanf("%f",&decimalRecibido);
    printf("Ingrese un caracter:\n");
    miFflush();
    scanf("%c",&caracterRecibido);

    printf("Datos recibidos int: %d - float: %f - char: %c", enteroRecibido, decimalRecibido, caracterRecibido);

    return 0;
}