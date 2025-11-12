#include <stdio.h>

int main() {
    int n=4;
    int at[]={3,1,2,0}, bt[]={5,3,8,6}, wt[4], tat[4];
    int i, j, temp, time=0;

    for(i=0;i<n;i++)
        for(j=i+1;j<n;j++)
            if(at[i] > at[j]) {
                temp=at[i]; at[i]=at[j]; at[j]=temp;
                temp=bt[i]; bt[i]=bt[j]; bt[j]=temp;
            }

    for(i=0;i<n;i++) {
        if(time < at[i]) time = at[i];
        wt[i]=time-at[i];
        time+=bt[i];
        tat[i]=wt[i]+bt[i];
    }

    printf("P AT BT WT TAT\n");
    for(i=0;i<n;i++)
        printf("P%d %d %d %d %d\n",i+1,at[i],bt[i],wt[i],tat[i]);


    
}
