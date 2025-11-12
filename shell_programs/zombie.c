#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>

int main(void){
    int pid = fork();

    if(pid < 0){
        printf("fork has just failed");
    }else if(pid == 0){
        printf("child process is exiting\n");
    }else{
        printf("Parent process sleeping: child pid : %d\n",pid);
        sleep(10);
        system("ps -l");
        printf("parent process exiting \n");
    }

    

    return 0;
}