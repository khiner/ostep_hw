#include <stdio.h>
#include <unistd.h>

int main() {
    pid_t pid = fork();
    if (pid == 0) { // Child
        printf("hello\n");
    } else { // Parent
        sleep(1); // This won't guarantee that the child will finish first though...
        printf("goodbye\n");
    }

    return 0;
}
