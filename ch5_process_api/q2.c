#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int main() {
    int fd = open("testfile.txt", O_WRONLY | O_CREAT | O_TRUNC, S_IRWXU);
    if (fd < 0) {
        perror("open");
        exit(1);
    }

    pid_t pid = fork();
    if (pid == 0) {
        write(fd, "Child writing\n", 14);
    } else {
        write(fd, "Parent writing\n", 15);
    }

    close(fd);
    return 0;
}
