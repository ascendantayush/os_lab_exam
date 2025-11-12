#include <stdio.h>
#include <stdlib.h>

int main(void){
    char input[100];

    FILE *fp = popen("date","r");

    if(fp == NULL){
        printf("error has been encounterd \n");
        return 1;
    }

    while(fgets(input,sizeof(input),fp) != NULL){
        printf("current date: %s",input);
    }

    pclose(fp);

    
    return 0;
}