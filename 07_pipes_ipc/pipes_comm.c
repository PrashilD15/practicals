#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main() {
    int pipe1[2], pipe2[2];
    pid_t pid;

    pipe(pipe1);
    pipe(pipe2);

    pid = fork();
    if (pid == 0) {
        close(pipe1[1]);
        close(pipe2[0]);

        char path[50];
        read(pipe1[0], path, sizeof(path));
        printf("[Child] Received path: %s\n", path);

        char *msg = "File contents loaded and processed successfully.";
        write(pipe2[1], msg, strlen(msg) + 1);
    } else {
        close(pipe1[0]);
        close(pipe2[1]);

        char *path = "sample.txt";
        write(pipe1[1], path, strlen(path) + 1);

        char buffer[150];
        read(pipe2[0], buffer, sizeof(buffer));
        printf("[Parent] Received from child:\n%s\n", buffer);
    }
    return 0;
}
