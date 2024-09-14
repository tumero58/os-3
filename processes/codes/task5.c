#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main() {
    printf("a zombie process is created when a child process completes its execution, but its parent process fails to handle the termination properly\n ");
    printf("wait() and waitpid(): These functions allow the parent process to wait for its child processes to complete and collect their exit status.\n ");
    printf("When a parent process calls wait() or waitpid(), the operating system removes the corresponding child process from the process table, preventing it from becoming a zombie.\n");
    pid_t pid = fork();

    if (pid < 0) {
        printf("Failed fork");
        return 1;
    } else if (pid == 0) {
        return 0;
    } else {
        wait(NULL);
    }

    return 0;
}
