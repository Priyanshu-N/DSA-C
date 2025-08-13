#include <stdio.h>

void swap (int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high){
    int pivot = arr[high];
    int i = low -1;

    for(int j = low; j<high; j++){
        if(arr[j]>pivot){
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i+1], &arr[high]);
    return i+1;
}

int quickselect(int arr[], int low, int high, int k){
    if(low<=high){
        int pi = partition(arr, low, high);

        if(pi == k-1)
            return arr[pi];
        else if(pi>k-1){
            return quickselect(arr, low, pi-1, k);
        }
        else
            return quickselect(arr, pi+1, high, k);
    }
    return -1;
}

int main() {
    int arr[] = {7, 10, 4, 3, 20, 15};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 4;

    int result = quickselect(arr, 0, n - 1, k);
    printf("%d-th largest element is %d\n", k, result);

    return 0;
}

