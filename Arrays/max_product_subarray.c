#include <stdio.h>

int maxproduct(int num[], int n){
    int max_p = num[0];
    int min_p = num[0];
    int max_so_far = num[0];

    for(int i = 1; i<n; i++){
        if(num[i]<0){
            int temp = max_p;
            max_p = min_p;
            min_p = temp;
        }

        if(num[i]> num[i]*max_p)
            max_p = num[i];
        else
            max_p = num[i]*max_p;

        if(num[i]< num[i]*min_p)
            min_p = num[i];
        else
            min_p = num[i] * min_p;

        if(max_p > max_so_far)
            max_so_far = max_p;
    }
    return max_so_far;
}

int main() {
    int num[] = {2, 3, -2, 4, -1};
    int n = sizeof(num) / sizeof(num[0]);

    printf("Maximum Product Subarray = %d\n", maxproduct(num, n));
    return 0;
}