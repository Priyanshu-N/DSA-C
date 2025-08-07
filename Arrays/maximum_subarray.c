#include <stdio.h>

int main(){

    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    int sum = arr[0];
    int max_sum = arr[0];
    int n = sizeof(arr)/sizeof(arr[0]);
    int temp = 0;
    int start = 0;
    int end = 0;

    for(int i = 1; i<n; i++){
        if(sum<0){
            sum = arr[i];
            temp = i;
            
        }
        else
            sum = sum + arr[i];
        
        if(max_sum<sum){
            max_sum = sum;
            start = temp;
            end = i;
            
        }
        
    }
    printf("\nmaximum subarray sum is: %d\n", max_sum);

    printf("Subarray: ");
    for (int i = start; i <= end; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}