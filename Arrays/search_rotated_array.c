#include <stdio.h>

// Sort the array using Bubble Sort
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

// Rotate array using user-given index 'm'
void rotateFromIndex(int arr[], int arr2[], int n, int m) {
    int k = 0;
    for(int i = m; i < n; i++) {
        arr2[k++] = arr[i];
    }
    for(int i = 0; i < m; i++) {
        arr2[k++] = arr[i];
    }
}

// binary search in rotated sorted array 
int searchElement(int arr[], int n, int target){
    int left = 0, right = n-1;

    while(left<=right){
        int mid = (left + right)/2;

        if(arr[mid] == target)
            return mid;

        if(arr[left]<=arr[mid]){
            if(arr[left] <= target && target <arr[mid]){
                right = mid-1;
            }
            else
                left = mid +1;
        }else{
            if(arr[mid] < target && target <=arr[right]){
                left = mid +1;
            }
            else
                right = mid-1;
        }
    }
    return 0;
}

int main(){
    int arr[]={1,3,4,6,8,2,9,7,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int arr2[n];

    sortArray(arr, n);
    printf("sorted array: ");
    for(int i = 0; i< n; i++){
        printf("%d ", arr[i]);
    }

    int m;
    printf("enter the index from which array needs to be rotated: ");
    scanf("%d", &m);

    rotateFromIndex(arr, arr2, n, m);
    printf("Rotated array: ");
    for(int i = 0; i < n; i++) 
        printf("%d ", arr2[i]);
    printf("\n");

    int target;
    printf("enter number to search: ");
    scanf("%d", &target);

    int index = searchElement(arr2, n, target);

    if(index != -1)
        printf("Element %d found at index %d\n", target, index);
    else
        printf("Element %d not found\n", target);

    return 0;
}
    