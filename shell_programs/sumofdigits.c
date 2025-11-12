#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main() {
pid_t pid = fork();
if (pid < 0) {
printf("Fork failed.\n");
} else if (pid == 0) {
// Child process
sleep(5); // Ensure parent exits first
printf("Child process is now orphaned.\n");
printf("Child PID: %d, Parent PID: %d\n", getpid(), getppid());
} else {
// Parent process
printf("Parent process exiting. PID: %d\n", getpid());
}
return 0;
}