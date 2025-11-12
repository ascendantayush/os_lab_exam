#include <stdio.h>

int main(){
    int n= 5,m =3;

    int alloc[5][3] = {{1,1,2},{2,1,2},{4,0,1},{0,2,0},{1,1,2}};
    int max[5][3] = {{4,3,3},{3,2,2},{9,0,2},{7,5,3},{9,2,3}};

    int avail[3] = {2,1,0};

    int need[5][3];
    int f[5] ={0};
    int ans[5]; //stores the safe sequence
    int index = 0; //used to store the index in ans;

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            need[i][j] = max[i][j] - alloc[i][j];
        }
    }

    for(int k = 0; k < n ; k++){
        for(int i = 0 ; i<n ; i++){
            if(f[i]==0){
                int flag = 0;
                for(int j =0 ; j < m ; j++){
                    if(need[i][j] > avail[j]){
                         flag = 1;
                    break;
                    }
                   
                }

                if(flag == 0){
                    ans[index++] = i;
                    for(int y = 0 ; y < m ; y++){
                        avail[y] = avail[y] + alloc[i][y];
                    }

                    f[i] = 1;
                }
            }
        }
    }

        // Check if all processes finished
    int flag = 1;
    for (int i = 0; i < n; i++)
        if (f[i] == 0)
            flag = 0;

    // Print result
    if (flag) {
        printf("\nSystem is in Safe State.\nSafe Sequence: ");
        for (int i = 0; i < n - 1; i++)
            printf("P%d -> ", ans[i]);
        printf("P%d\n", ans[n - 1]);
    } else {
        printf("\nSystem is not in Safe State.\n");
    }

    return 0;
}
