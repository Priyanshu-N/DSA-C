#include <stdio.h>

int main(){

    int arr[100];
    int n,max, min;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    for(int i = 0; i<n; i++){
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i<n; i++){
        printf("%d ", arr[i]);
        
    }
    printf("\n");

    min = max = arr[0];

    for(int i = 1; i<n; i++){

        // for max element 
        if(max<arr[i]){
            max=arr[i];
        }

        if(max>arr[i]){
            max=arr[i];
        }
    }
    printf("maximum element: %d\n", max);
    printf("minimum element: %d\n", min);
    return 0;
}