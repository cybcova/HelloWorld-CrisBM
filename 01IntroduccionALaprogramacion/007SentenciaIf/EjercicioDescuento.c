#include <stdio.h>
#include <math.h>

int main() {

    float compra;
    float descuento = 15;
    float descuentoResiduo;
    float total;

    printf("Ingrese el monto total de la compra: ");
    scanf("%f", &compra);
    printf("\n");


    if (compra >= 200){
        
     descuentoResiduo = (compra*descuento)/100;
     total = compra - descuentoResiduo;
     printf("Descuento del 15 porciento aplicado: $%.2f" , descuentoResiduo);
     printf("\n");
     printf("Monto original: $%f\n\n", compra);
     printf("--------------------------\n");
     printf("Nuevo monto a pagar: $%f", total);
    }

    if (compra < 200){
     printf("--------------------\n");
     printf("Monto a pagar: %f", compra);
    }


}