#include <stdio.h>

int main() {

float celsius;
float fahrenheit;

printf("Ingrese la temperatura en grados Celsius: ");
scanf("%f", &celsius);
printf("\n");
printf("Convirtiendo la temperatura...\n\n");

fahrenheit = (celsius * 9/5) + 32;
printf("Temperatura en Fahrenheit: %.2f", fahrenheit);


}