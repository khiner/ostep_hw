#include <stdio.h>
#include <unistd.h>

int main() {
    pid_t pid = fork();
    if (pid == 0) { // Child
        // Try different exec variants here:
        execl("/bin/ls", "ls", NULL);  // Using execl variant
        // execle("/bin/ls", "ls", NULL, envp);
        // execlp("ls", "ls", NULL);
        // execv("/bin/ls", args);
        // execvp("ls", args);
        // execvpe("ls", args, envp);
    } else { // Parent
        printf("Parent process\n");
    }

    return 0;
}
