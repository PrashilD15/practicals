#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    pid_t pid = fork();
    if (pid < 0) {
        perror("Fork failed");
        return 1;
    } else if (pid == 0) {
        printf("[Child] PID: %d, Parent PID: %d\n", getpid(), getppid());
        sleep(5); // Sleep to demonstrate orphan state if parent dies first
        printf("[Child] Adopted Parent PID: %d\n", getppid());
    } else {
        printf("[Parent] PID: %d. Terminating to leave child as orphan.\n", getpid());
        exit(0);
    }
    return 0;
}
