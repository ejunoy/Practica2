#include <stdio.h>
#include <string.h>

int secretMsg() {
    printf("Lo lograste, el secreto es tomar mucha aguita\n");
    printf("Lograste llegar hasta aquí. ¡Felicidades!\n");
    return 0;
}

int main() {
    char pass[16];
    printf("Anota una palabra e intenta descubrir el secreto:\n");
    fgets(pass, sizeof(pass), stdin);
    pass[strcspn(pass, "\n")] = 0; 

    if (pass[0] == '\0') {
        printf("No lo lograste. Intenta de nuevo\n");
        return 0;
    } else if (strlen(pass) < 11) {
        secretMsg();
    } else {
        printf("No lo lograste. Intenta de nuevo\n");
        return 0;
    }
}
