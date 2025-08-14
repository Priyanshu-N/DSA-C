#include <stdio.h>

int main(){
    int arr[] = { 1, 2, 3, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    

    int arr2[n];

    arr2[0] = 1;
    for(int i = 1; i<n; i++){
        arr2[i] = arr2[i-1] * arr[i-1];
    }

    int right_product = 1;

    for(int i =n-1; i>=0; i--){
        arr2[i] = right_product * arr2[i];
        right_product *= arr[i];
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    return 0;

    
    return 0;
}