#include <stdio.h>

int main() {
    int contrasenaUsuario = 4455;
    int contrasenaLectura;
    int intentos = 3;

    do{
        printf("Ingrese su contraseña: ");
        scanf("%d", &contrasenaLectura);
        if (contrasenaLectura == contrasenaUsuario){
            printf("Contraseña correcta. Bienvenido.");   
        } else {
            intentos--;
            printf("Contraseña incorrecta. Intentos restantes: %d\n", intentos);
        }
    } while (intentos > 0 && !(contrasenaLectura == contrasenaUsuario));

    return 0;
}