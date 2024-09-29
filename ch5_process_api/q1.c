#include <stdio.h>
#include <unistd.h>

int main() {
    int x = 100;
    pid_t pid = fork();
    if (pid == 0) { // Child
        printf("Child: x = %d\n", x); // Child will have the same initial value as the parent
        x = 200;
        printf("Child: x changed to %d\n", x);
    } else { // Parent
        printf("Parent: x = %d\n", x); // Parent still has the original value
        x = 300;
        printf("Parent: x changed to %d\n", x);
    }

    return 0;
}
