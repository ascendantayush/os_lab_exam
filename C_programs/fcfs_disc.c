#include <stdio.h>
#include <stdlib.h>
// sstf
int main() {
    int n, head, i, j, seek = 0;

    printf("Enter number of requests: ");
    scanf("%d", &n);

    int req[n], visited[n];
    printf("Enter the requests: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &req[i]);
        visited[i] = 0;
    }

    printf("Enter initial head position: ");
    scanf("%d", &head);

    int current = head;
    for(i = 0; i < n; i++) {
        int min = 9999, index = -1;

        for(j = 0; j < n; j++) {
            if(!visited[j]) {
                int diff = abs(req[j] - current);
                if(diff < min) {
                    min = diff;
                    index = j;
                }
            }
        }

        seek += abs(req[index] - current);
        current = req[index];
        visited[index] = 1;
    }

    printf("\nTotal Seek Time (SSTF) = %d\n", seek);
    return 0;
}




