#include <stdio.h>
#include <math.h>

int main()
{
    int opcion;
    int contrasenaUsuario = 5555;
    int contrasenaLectura;
    int intentos = 5;
    int numeroEntero;
    int resultadoEntero;
    float numero1;
    float numero2;
    float numero3;
    float resultado;
    int opcion2;

    do
    {
        // Contraseña
        printf("Bienvenido a la calculadora.\n");
        printf("Contraseña: ");
        scanf("%d", &contrasenaLectura);

        if (contrasenaLectura == contrasenaUsuario)
        {
            // Menu principal
            printf("Contraseña correcta\n\n");
            while (opcion != 4)
            {
                printf("----Bienvenido al Menu----\n");
                printf("1. Operaciones Básicas\n");
                printf("2. Operaciones Geométricas\n");
                printf("3. Operaciones Especiales\n");
                printf("4. Salir\n");
                printf("----------------------------\n");
                printf("Selecciona una opción: ");
                scanf("%d", &opcion);
                printf("\n");

                switch (opcion)
                {
                // Menu operaciones basicas
                case 1:
                    printf("(((Operaciones Básicas)))\n");
                    printf("1. Suma\n");
                    printf("2. Resta\n");
                    printf("3. Multiplicación\n");
                    printf("4. División\n");
                    printf("5. Regresar\n");
                    printf("Selecciona una opción: ");
                    scanf("%d", &opcion2);
                    printf("\n");

                    if (opcion2 > 0 && opcion2 <= 4)
                    {
                        printf("Ingresa el primer número: ");
                        scanf("%f", &numero1);
                        printf("Ingresa el segundo número: ");
                        scanf("%f", &numero2);
                    }

                    switch (opcion2)
                    {
                    case 1:
                        // Suma
                        resultado = numero1 + numero2;
                        printf("La suma es: %.2f", resultado);
                        break;
                    case 2:
                        // Resta
                        resultado = numero1 - numero2;
                        printf("La resta es: %.2f", resultado);
                        break;
                    case 3:
                        // Multiplicacion
                        resultado = numero1 * numero2;
                        printf("La multiplicacion es: %.2f", resultado);
                        break;
                    case 4:
                        // Division
                        resultado = numero1 / numero2;
                        if (numero2 != 0)
                        {
                            printf("La division es: %.2f", resultado);
                        }
                        else
                        {
                            printf("No se puede dividir entre cero");
                        }
                        break;
                    default:
                        printf("Opcion invalida");
                    }

                    printf("\n\n");

                    break;
                // Menu operaciones Geométricas
                case 2:
                    float perimetro;
                    float area;
                    printf("(((Operaciones Geométricas)))\n");
                    printf("1. Área y perimetro de un cuadrado\n");
                    printf("2. Área y perimetro de un triángulo\n");
                    printf("3. Área y perimetro de un circulo\n");
                    printf("4. Regresar\n");
                    printf("Selecciona una opción: ");
                    scanf("%d", &opcion2);
                    printf("\n");

                    if (opcion2 == 1)
                    {
                        // Cuadrado
                        printf("Ingresa el lado del cuadrado: ");
                        scanf("%f", &numero1);
                        perimetro = numero1 * 4;
                        area = numero1 * numero1;
                        printf("El perimetro del cuadrado es: %.2f\n", perimetro);
                        printf("El area del cuadrado es: %.2f\n\n", area);
                    }
                    else if (opcion2 == 2)
                    {
                        // Triangulo
                        printf("Ingresa el lado A del triangulo: ");
                        scanf("%f", &numero1);
                        printf("Ingresa el lado B del triangulo: ");
                        scanf("%f", &numero2);
                        printf("Ingresa el lado C del triangulo: ");
                        scanf("%f", &numero3);
                        perimetro = numero1 + numero2 + numero3;
                        area = numero1 * numero3 / 2;
                        printf("El perimetro del triangulo es: %.2f\n", perimetro);
                        printf("El area del triangulo es: %.2f\n\n", area);
                    }
                    else if (opcion2 == 3)
                    {
                        // Circulo
                        const float PI = 3.1416;
                        printf("Ingresa el radio del circulo: ");
                        scanf("%f", &numero1);
                        perimetro = 2 * PI * numero1;
                        area = PI * pow(numero1, 2);
                        printf("El perimetro del circulo es: %.2f\n", perimetro);
                        printf("El area del circulo es: %.2f\n\n", area);
                    }
                    break;
                // Menu operaciones Especiales
                case 3:
                    printf("(((Operaciones Especiales)))\n");
                    printf("1. Sumatoria a N\n");
                    printf("2. Factorial\n");
                    printf("3. Fibonacci\n");
                    printf("4. Regresar\n");
                    printf("Selecciona una opción: ");
                    scanf("%d", &opcion2);
                    printf("\n");

                    if (opcion2 == 1)
                    {
                        // Sumatoria N
                        printf("Ingresa N hasta donde llegara la sumatoria: ");
                        scanf("%d", &numeroEntero);
                        for (int i = 1; i <= numeroEntero; i++)
                        {
                            resultadoEntero = resultadoEntero + i;
                        }
                        printf("La suma de los numeros de 1 a %d es: %d\n\n", numeroEntero, resultadoEntero);
                    }
                    else if (opcion2 == 2)
                    {
                        // Factorial
                        printf("Ingresa N para calcular su factorial: ");
                        scanf("%d", &numeroEntero);
                        resultadoEntero = 1;
                        for (int i = 1; i <= numeroEntero; i++)
                        {
                            resultadoEntero = resultadoEntero * i;
                        }
                        printf("El factorial es: %d\n\n", resultadoEntero);
                    }
                    else if (opcion2 == 3)
                    {
                        // Fibonacci
                        int contador = 1;
                        int presente = 0;
                        int anterior1 = 0;
                        int anterior2 = 0;
                        printf("Ingresa un numero para la sucesion de Fibonacci: ");
                        scanf("%d", &numeroEntero);
                        while (contador <= numeroEntero)
                        {
                            printf("%d ", presente);
                            if (contador == 1)
                            {
                                presente++;
                                anterior1 = 0;
                            }
                            else
                            {
                                anterior2 = anterior1;
                                anterior1 = presente;
                                presente = anterior1 + anterior2;
                            }
                            contador++;
                        }
                        printf("\n\n");
                    }
                    break;
                default:
                    printf("Opcion Invalida");
                    break;
                }
            }
            printf("Saliendo del programa...");
        }
        else
        {
            intentos--;
            printf("Acceso denegado, contraseña incorrecta.\n\n");
        }

    } while (intentos > 0 && !(contrasenaLectura == contrasenaUsuario));

    return 0;
}