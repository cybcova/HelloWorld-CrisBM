#include <stdio.h>

/*Printf a fondo*/

int main()
{
    //Asi se ve un texto simple
    printf("TEXTO SIMPLE");

    //Asi se ven puros saltos de linea
    printf("\n\n\n\n\n");

    printf(":)");

    printf("\n");

    printf("\tAsi se ve un tabulador\n");
    printf("\t\tAsi se ven dos tabuladores\n");
    printf("\t\t\tAsi se ven 3 tabuladores\n\n");

    printf("De hecho podriamos fingir una tabla con tabuladores\n");
    printf("A\tB\tC\n");
    printf("---------\n");
    printf("1\t3\t4\n");
    printf("2\t3\t4\n");

    printf("\n");
    
    printf("Por ejemplo aqui no estoy usando saltos de linea");



    printf("Y por mas que separe ambos textos uno del otro apreceran pegados");

    int i = 0;
    i = 1 + 2;

    printf("Incluso aun haciendo operaciones en medio");
    
    printf("\n\n\n");

    //Ahora si, con datos
    printf("Un numero es: %d otro es: %d \nUn decimal es: %f \nUn caracter es %c\n", 1, 2, 1.2, 'A');

    printf("\n");
    int entero1 = 1;
    int entero2 = 2;
    float decimal1 = 3.3;
    float decimal2 = 4.4;
    char caracter1 = 'f';
    char caracter2 = 'g';

    printf("%d : %d : %f : %f : %c : %c\n", entero1, entero2, decimal1, decimal2, caracter1, caracter2);
    
    //Sobran argumentos
    printf("%d : %d : %f : %f\n", entero1, entero2, decimal1, decimal2, caracter1, caracter2);
    
    //Faltan argumentos
    printf("%c : %c : %c : %c : %c : %c : %c : %c : %c : %c : %c : %c : %c : %c : %c : %c : %c : %c : %c : %c : %c : %c\n");
    printf("\n");
    
    //Al final y como fun fact por que dudo que lo utilizen
    printf("En caso de querer imprimir como tal %%d tendremos que usar doble %%%% \n");
    printf("Lo mismo pasa con \\n tendremos que usar doble \\\\ \n");

}