#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(void){
    int pid;
    pid = fork();//create a child process

    if(pid < 0){
        printf("Fork Failed. \n");
    }if (pid==0){
        printf("hello from child \n");
        printf("I am a child process. \n");
        printf("Child PID: %d\n",getpid());
        printf("Parent PID: %d\n",getppid());

        printf("---------------------------------------------------------------\n");
    }else{
        printf("hello from parent \n");
        printf("I am the parent process.\n");
        printf("Parent PID: %d\n", getpid());
        printf("Child PID: %d\n", pid);

        printf("---------------------------------------------------------------\n");
        // printf("i am the grandfather : %d\n",getppid());
    }
    return 0;
}
