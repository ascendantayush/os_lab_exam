#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    // char buffer[50];

    // while(1){
    //     printf("ayush > ");
    //     fgets(buffer,sizeof(buffer),stdin);

    //     buffer[strcspn(buffer, "\n")] = 0;

    //     if(strcmp(buffer,"exit")==0){
    //         printf("exiting from the shell \n");
    //         break;
    //     }

    //     else if(strcmp(buffer,"date")==0){
    //         system("date");
    //     }

    //     else if(strcmp(buffer,"pwd")==0){
    //         system("pwd");
    //     }

    //     else if(strcmp(buffer,"ls")==0){
    //         system("ls -lh");
    //     }

    //     else if(strncmp(buffer,"echo ",5)==0){
    //         printf("%s",buffer+5);
    //     }

    //     else{
    //         printf("unkown command \n");
    //     }
    // }


    char buffer[50];
    while(1){
        printf("ayush > ");

        fgets(buffer,sizeof(buffer),stdin);

        buffer[strcspn(buffer,"\n")] = 0;

        if(strcmp(buffer,"pwd")==0){
            system("pwd");
        }

        if(strncmp(buffer,"echo ",5)==0){
            printf("%s\n",buffer+5);
        }

        if(strcmp(buffer,"exit")==0){
            printf("we are exiting the custom shelll\n");
            break;
        }
    }
    return 0;
}