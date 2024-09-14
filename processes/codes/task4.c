#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>

int main() {
    pid_t pid1 = fork();

    if (pid1 < 0) {
        printf("fork");
        return 1;
    } else if (pid1 == 0) {
        printf("Child 1 PID:  %d\n", getpid());
        exit(10);
    } else {
        int status;
        waitpid(pid1, &status, 0);

        if (WIFEXITED(status)) {
       		printf("Child 1 exit status ok, status:  %d\n", WEXITSTATUS(status));
        } else {
        	printf("Child 1 exit status error");
       	}
    }

    pid_t pid2 = fork();

        if (pid2 < 0) {
            printf("Failed fork");
            return 1;
        } else if (pid2 == 0) {
            printf("Child 1 PID: %d\n", getpid());
            exit(20);
        } else {
            int status;
            waitpid(pid2, &status, 0);

            if (WIFEXITED(status)) {
                printf("Child 2 exit status ok, status: %d\n", WEXITSTATUS(status));
            } else {
                printf("Child 2 exit status error");
            }
        }

    return 0;
}
