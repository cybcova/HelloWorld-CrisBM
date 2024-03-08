#include <stdio.h>

int main() {
    int ano, divisible4, divisible100;
    int residuo4, residuo100, residuo400;
    printf("Teclea un año: ");
    scanf("%d", &ano);
    residuo4 = ano % 4; 
    residuo100 = ano % 100;
    residuo400 = ano % 400;

    printf("\nresiduo4: %d",residuo4 == 0);
    printf("\nresiduo100: %d",residuo100 != 0);
    printf("\nresiduo400: %d",residuo400 == 0);

    if(
        residuo4 == 0 
        && residuo100 != 0 
        || residuo400 == 0 ){
    printf("\nEs un año bisiesto");
    }
   
}