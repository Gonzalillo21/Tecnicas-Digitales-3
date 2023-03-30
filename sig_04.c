#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>

int main() {
    pid_t pid1, pid2, pid3;

    pid1 = fork();
    if (pid1 == 0) {
        while (1) {
        }
        exit(0);}

    pid2 = fork();
    if (pid2 == 0) {
        while (1) {
        }
        exit(0);}

    pid3 = fork();
    if (pid3 == 0) {
        while (1) {
printf ("estoy funcionando hijo3");
        }
        exit(0); }

    sleep(5);

    kill(pid1, SIGKILL);
    kill(pid2, SIGKILL);
    kill(pid3, SIGKILL);
    return 0;
}
