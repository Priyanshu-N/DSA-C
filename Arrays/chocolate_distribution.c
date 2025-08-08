#include <stdio.h>
#include <limits.h>

void sortArray(int arr[], int n) {
    for(int i=0; i<n-1; i++) {
        for(int j=0; j<n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int choco_dis(int arr[],int n, int m){
    int min_diff = INT_MAX;

    
    if(m>n)
        return -1;

    sortArray(arr, n);

    for(int i = 0; i<n-m;i++){
        int diff = arr[i+m-1]-arr[i];
        if(diff < min_diff){
            min_diff = diff;
        }
    }
    
    return min_diff;
}

int main(){
    int arr[] = {7, 8, 9, 10, 5, 4, 5, 3,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int m = 3;

    int result = choco_dis(arr, n, m);
    if(result != -1)
        printf("minimum difference is %d\n", result);
    else
        printf("not enough packests\n");
    return 0;
}