#include <stdio.h>
#include <stdlib.h>

int main(void){
    // int n;
    // printf("input the integer whose factorial you want to find : \n");
    // scanf("%d",&n);


    // int ans = 1;

    // if(n == 0){
    //     printf("your answer is : %d\n",ans);
    // }else{
    //     for(int i = 1 ; i <= n ;i++){
    //         ans = ans * i;
    //     }
        
    //     printf("your answer is : %d \n",ans);
        
    // }



    //using bash code : 

    // system(
    //     "bash -c '"
    //     "read -p \"enter a number: \" N; "
    //     "ans=1; "
    //     "finalans=1; "
    //     "for ((i=1;i<=N;i++)); do "
    //     "ans=$((ans*i)); "
    //     "done; "
    //     "echo $ans"
    //     "'"
    // );
    

    system(
        "bash -c '"
        "read -p \"enter the number :\" N; "
        "ans=1; "
        "for ((i=1;i<=N;i++)); do "
        "ans=$((ans*i)); "
        "done; "
        "echo $ans "
        "'"
    );

    return 0;
}