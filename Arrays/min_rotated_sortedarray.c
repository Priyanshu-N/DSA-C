#include <stdio.h>


int minNumber(int arr[], int n){
    int left = 0;
    int right = n-1;

    while(left<right){
        int mid = (left + right)/2;

        if(arr[mid] > arr[right]){
            left = mid + 1;
        }
        else{
            right = mid;
        }
    }
    return arr[left];

}

int main() {
    int arr[] = {7, 8, 9, 1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("The smallest number is %d\n", minNumber(arr, n));
    return 0;

    
    return 0;
}
