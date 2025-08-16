#include <stdio.h>

int pairRotatedArray(int arr[], int n, int key){
    
    int pivot;

    for(int i = 0; i<n-1; i++){
        if(arr[i]> arr[i+1]){
            pivot = i;
            break;
        }
    }

    int min_i = (pivot + 1) % n;

    int max_i = pivot;

    while(min_i!=max_i){
        int sum = arr[min_i] + arr[max_i];

        if(arr[min_i] + arr[max_i] == key){
            printf("Pair found: (%d, %d)\n", arr[min_i], arr[max_i]);
            return 1;
        }
        if(sum<key){
            min_i = (min_i + 1)% n;
        }
        else{
            max_i = (max_i -1)%n;
        }

    }
    printf("No pair found for sum %d\n", key);
    return 0;

}

int main() {
    int arr[] = {11, 15, 6, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    int key;
    printf("Enter sum to search: ");
    scanf("%d", &key);

    pairRotatedArray(arr, n, key);

    return 0;
}