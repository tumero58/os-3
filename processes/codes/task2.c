#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main() {
    pid_t pid1 = fork();
    if (pid1 < 0) {
        printf("Failed fork");
        return 1;
    } else if (pid1 == 0) {
        printf("Child 1 PID: %d\n", getpid());
        return 5;
    } else {
        int status;
        wait(&status);
        printf("Child 1 exit status: %d\n", WEXITSTATUS(status));
    }

    pid_t pid2 = fork();

    if (pid2 < 0) {
	printf("Failed fork");
        return 1;
    } else if (pid2 == 0) {
    	printf("Child process 2: PID = %d\n", getpid());
        return 10;
    } else {
	int status;
        pid_t waitedPid = waitpid(pid2, &status, 0);
        printf("Waited for PID: %d\n", waitedPid);
        printf("Child 2 exited status: %d\n", WEXITSTATUS(status));
    }

    return 0;
}
