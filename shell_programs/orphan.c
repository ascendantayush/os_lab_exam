#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>

int main(void){
    pid_t pid = fork();

    if(pid < 0){
        printf("the fork has failed \n");
    }if(pid == 0 ){
        //child will now go to sleep 
        sleep(5);
        printf("child process is now orphaned. \n");
        printf("child PID: %d, Parents PID : %d\n",getpid(),getppid());
    }else{
        printf("parent process is exiting : %d\n",getpid());
    }
}