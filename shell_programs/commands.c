#include <stdio.h>
#include <stdlib.h>

int main(void){
    printf("this is to execute basic linux commands \n");
    printf("who am i ? \n");
    system("whoami");

    printf("what is my username ? \n" );
    system("uname -a");

    printf("where am i currently ? \n");
    system("pwd");


    printf("what are the files inside me ? \n");
    system("ls -lh");

    printf("creating a new directory \n");
    system("mkdir new_directory");

    printf("moving into the new directoy \n");
    system("cd new_directory");

    printf("create a new file \"myfile.txt\"");
    system("touch myfile.txt");
    
    system("ls");

    printf("what is todays date ? \n");
    system("date");

    return 0;
}