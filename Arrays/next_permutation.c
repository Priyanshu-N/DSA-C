#include <stdio.h>
#include <limits.h>

void reverse(int arr[], int start, int end){
    while(start < end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main(){
    int arr[] = {1, 1, 5, 4, 1};
    int n = sizeof(arr)/ sizeof(arr[0]);
    int j = n -2;

    while(j>=0 && arr[j]>=arr[j+1]){
        j--;
    }

    if(j>=0){
        int k = n-1;
        while(arr[k] <= arr[j]){
            k--;
        }

        int temp = arr[j];
        arr[j] = arr[k];
        arr[k] = temp;
    }

    reverse(arr, j+1, n-1);

    for(int i = 0; i< n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}