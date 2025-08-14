#include <stdio.h>

int traprain(int arr[], int n){
    if(n==0)
        return 0;
    
    int left[n], right[n];

    // fill left array

    left[0] = arr[0];

    for(int i = 1; i<n; i++){
        left[i] = (left[i-1] >arr[i])? left[i-1]: arr[i];
    }

    // for right array 
    right[n-1] = arr[n-1];

    for(int i = n-2; i>=0; i--){
        right[i] = (right[i+1] > arr[i]) ? right[i+1] : arr[i];
    }

    // trapped water

    int total_water = 0;

    for(int i = 0; i<n; i++){
        int height = (left[i] < right[i]) ? left[i] : right[i];

        if(height > arr[i]){
            total_water += height - arr[i];
        }
    }
    return total_water;

}

int main() {
    int arr[] = {0, 1, 0, 3, 0, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Total water trapped: %d\n", traprain(arr, n));
    return 0;
}



