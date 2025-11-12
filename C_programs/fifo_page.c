#include <stdio.h>

int main(){
    int pages[8] ;
    for(int i = 0 ;i < 8 ; i++){
        scanf("%d",&pages[i]);
    }

    int frame[3]= {-1,-1,-1};

    int f = 3,front = 0, faults = 0;
    int hiter = 0;

    for(int i = 0 ; i < 8 ; i++){
        int hit = 0;


        for(int j = 0 ; j < f ; j++){
            if(frame[j]==pages[i]){
                hit = 1;
                hiter++;

            }
        }

        if(!hit){
            frame[front] = pages[i];
            faults++;
            front = (front + 1)% f;
        }
    }    

    printf("%d %d\n",hiter,faults);
}