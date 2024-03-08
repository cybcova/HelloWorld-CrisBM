#include <stdio.h>

int main() {

    int year;
    int residuo4;
    int residuo100;
    int residuo400;

    printf("Ingrese un año: ");
    scanf("%d", &year);
    printf("\n");
  
    residuo4 = year % 4;
    residuo100 = year % 100;
    residuo400 = year % 400;
    
    if(residuo4 == 0 && residuo100 != 0 || residuo400 == 0){
        printf("Es año bisiesto");
    }

}