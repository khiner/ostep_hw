#include <stdio.h>
#include <sys/wait.h>
#include <unistd.h>

int main() {
    pid_t pid = fork();

    if (pid == 0) { // Child
        printf("Child process\n");
    } else { // Parent
        int status;
        pid_t child_pid = wait(&status); // Parent waits for child
        printf("Parent: Child process %d finished\n", child_pid);
    }

    return 0;
}
