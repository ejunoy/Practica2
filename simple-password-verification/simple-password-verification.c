#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

char *login = "root";

int granted() {
  printf("Lograste llegar hasta aquí. ¡Felicidades!\n");
  printf("Acceso autorizado...");
  system("gnome-terminal -x sh -c \"./a.out\"");
  return 0;
}

int main() {
  char password[16];
  printf("Benvenido\n");
  printf("Anota la contraseña ");
  gets(password);
  
  if(strcmp(password, login)){
    printf("Lo siento la contraseña es incorrecta\n Acceso deneagado");
  }else {
    granted();
  }

}

