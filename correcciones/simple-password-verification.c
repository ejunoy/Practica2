#include <stdio.h>
#include <string.h>

char * login = "root";

int granted() {
    printf("Lograste llegar hasta aquí. ¡Felicidades!\n");
    printf("Acceso Autorizado...\n");
    return 0;
}

int main() {
    char password[16];
    printf("¡Bienvenido!\n");
    printf("Anota la contraseña por favor: ");
    // Cambiado de gets() a fgets() para evitar desbordamiento
    fgets(password, sizeof(password), stdin);
    password[strcspn(password, "\n")] = 0; 

    if (strcmp(password, login)) {
        printf("Lo siento la contraseña es incorrecta.\nAcceso Denegado\n");
    } else {
        granted();
    }
}
