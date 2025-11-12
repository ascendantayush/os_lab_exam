#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>


int main(){
    int n = 5;
    int m = 3;

    int alloc[5][3] ={{1,1,2},{2,1,2},{4,0,1},{0,2,0},{1,1,2}};
    int required[5][3] = {{4,3,3},{3,2,2},{9,0,2},{7,5,3},{9,2,3}};
    int need[5][3] ;

    int avail[3] = {2,1,0};

    int f[5] ={0};
    int ans[5];
    int index = 0;

    for(int i = 0 ; i< n ; i++){
        for(int j = 0 ; j < m ; j++){
            need[i][j] = required[i][j] - alloc[i][j];
        }
    }

    for(int k = 0 ; k < n ; k++){
        for(int i = 0 ; i < n ; i++){
            if(f[i]==0){
            int flag = 0;
            for(int j = 0 ; j < m ; j++){
                if(need[i][j] > avail[j]){
                    flag =1;
                    break;
                }
            }

            if(flag == 0){
                ans[index++] = i;
                for(int ayush = 0 ; ayush < m ; ayush++){
                    avail[ayush] = avail[ayush] + alloc[i][ayush];
                }
                f[i] = 1;
            }
        }
        }
    }

    int deadlock = 0 ;
    for(int i = 0 ; i < n ; i++){
        if(f[i]==0){
            deadlock = 1;
            break;
        }
    }

    if(deadlock == 1){
        printf("deadlock detected \n");
    }else{
        for(int i = 0; i < n-1; i++){
            printf("%d-> ",ans[i]);
        }
        printf("%d \n",ans[n-1]);
    }
}