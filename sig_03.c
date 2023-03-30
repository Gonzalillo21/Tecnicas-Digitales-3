#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>

void handler(int sig) {
    // Manejador de señal vacío
}

int main() {
    pid_t pid1, pid2, pid3;

    // Crear tres procesos hijos
    pid1 = fork();
    if (pid1 == 0) {
        // Código del primer proceso hijo
        while (1) {
            // Bucle infinito
        }
        exit(0);
    }

    pid2 = fork();
    if (pid2 == 0) {
        // Código del segundo proceso hijo
        while (1) {
            // Bucle infinito
        }
        exit(0);
    }

    pid3 = fork();
    if (pid3 == 0) {
        // Código del tercer proceso hijo
        while (1) {
            // Bucle infinito
        }
        exit(0);
    }

    // Establecer un manejador de señal vacío
    signal(SIGINT, handler);

    // Esperar un tiempo antes de enviar las señales de finalización
    sleep(5);

    // Finalizar los procesos hijos
    kill(pid1, SIGKILL);
    kill(pid2, SIGKILL);
    kill(pid3, SIGKILL);

    return 0;
}
