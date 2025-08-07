#include <stdio.h>

int main(){

    int arr[] = {1, 2, 3, 4, 5};

    int n = sizeof(arr)/ sizeof(arr[0]);
    int arr2[n];

    for(int i = 0; i<n; i++){
        arr2[i] = arr[n-i-1];

    }

    printf("Original array: ");
    for(int i = 0; i< n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("reversed array: ");

    for(int i = 0; i< n; i++){
        printf("%d ", arr2[i]);
    }
    printf("\n");
    return 0;
}