#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

char *login = "root";

int granted()
{
    printf("Lograste llegar hasta aquí. ¡Felicidades!\n");
    printf("Acceso Autorizado...\n");
    // Esta línea podría no funcionar en algunos SO.
    // Realiza la practica en Kali linux
    system("gnome-terminal -x sh -c \"./a.out\"");  
    return 0;
}

int main()
{
    char password[16];
    printf("¡Bienvenido!\n");
    printf("Anota la contraseña por favor: ");
    gets(password);  
    
    if (strcmp(password, login))  
    {
        printf("Lo siento la contraseña es incorrecta.\nAcceso Denegado\n");
    }
    else
    {
        granted();  
    }
}
