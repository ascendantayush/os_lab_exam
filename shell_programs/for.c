#include <stdio.h>
#include <stdlib.h>

int main(void){
    // system(
    //     "bash -c '"
    //     "read -p \"enter the number : \" N; "
    //     "for ((i=$N;i>0;i--)); do "
    //     "echo -n \"$i \"; "
    //     "done; "
    //     "'"
    // );

    // printf("\n");
    // system(
    //     "bash -c '"
    //     "read -p \"Enter the number :\" N; "
    //     "i=0; "
    //     "while [ $i -le $N ]; do "
    //     "echo -n \"$i \"; "
    //     "i=$((i+1)); "
    //     "done; "
    //     "'"
    // );
    // printf("\n");

    printf("printing using the for loop \n");
    system(
        "bash -c '"
        "read -p \"Enter the number:\" N; "
        "for ((i=$N;i>0;i--)); do "
        "echo -n \"$i \"; "
        "done; "
        "'"
    );

    printf("\n");

    system(
        "bash -c '"
        "read -p \"Enter the number for while loop : \" N; "
        "while [ $N -gt 0 ]; do "
        "echo -n \"$N \"; "
        "N=$((N-1)); "
        "done; "
        "'"
    );

    printf("\n");

    return 0;
}