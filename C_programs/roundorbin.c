#include <stdio.h>

int main() {
    int n = 4, tq = 2;
    int bt[] = {5, 3, 8, 6};
    int rt[4], wt[4] = {0}, tat[4];
    int time = 0, done;

    for(int i = 0; i < n; i++) rt[i] = bt[i];

    do {
        done = 1;
        for(int i = 0; i < n; i++) {
            if(rt[i] > 0) {
                done = 0;
                if(rt[i] > tq) {
                    time += tq;
                    rt[i] -= tq;
                } else {
                    time += rt[i];
                    wt[i] = time - bt[i];
                    rt[i] = 0;
                }
            }
        }
    } while(!done);

    for(int i = 0; i < n; i++) tat[i] = bt[i] + wt[i];

    printf("P\tBT\tWT\tTAT\n");
    for(int i = 0; i < n; i++)
        printf("P%d\t%d\t%d\t%d\n", i+1, bt[i], wt[i], tat[i]);

    return 0;
}


// #include <stdio.h>

// int main() {
//     int n = 4, tq = 2;
//     int at[] = {0, 1, 2, 3};
//     int bt[] = {5, 3, 8, 6};
//     int rt[4], ct[4], wt[4], tat[4];
//     int time = 0, completed = 0, q[20], front = 0, rear = 0, i;
//     int inQ[4] = {0};

//     for(i = 0; i < n; i++) rt[i] = bt[i];

//     q[rear++] = 0;        // first process arrives at t=0
//     inQ[0] = 1;

//     while(completed < n) {
//         int p = q[front++];   // dequeue

//         if(time < at[p]) time = at[p]; // if CPU idle, jump to arrival

//         if(rt[p] > tq) {
//             time += tq;
//             rt[p] -= tq;
//         } else {
//             time += rt[p];
//             ct[p] = time;
//             rt[p] = 0;
//             completed++;
//         }

//         for(i = 0; i < n; i++) {
//             if(at[i] <= time && rt[i] > 0 && !inQ[i]) {
//                 q[rear++] = i; 
//                 inQ[i] = 1;
//             }
//         }

//         if(rt[p] > 0) {
//             q[rear++] = p;   // put back in queue
//         }
//     }

//     for(i = 0; i < n; i++) {
//         tat[i] = ct[i] - at[i];
//         wt[i] = tat[i] - bt[i];
//     }

//     printf("P\tAT\tBT\tWT\tTAT\n");
//     for(i = 0; i < n; i++)
//         printf("P%d\t%d\t%d\t%d\t%d\n", i+1, at[i], bt[i], wt[i], tat[i]);
// }
