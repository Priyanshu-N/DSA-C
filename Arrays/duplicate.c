#include <stdio.h>
#include <stdbool.h>

int main(){

    int arr[] = {1, 4, 6, 8, 9, 9, 8};
    int n = sizeof(arr)/sizeof(arr[0]);
    bool hasduplicate = false;

    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            if(arr[i] == arr[j]){
                hasduplicate = true;
                printf("duplicate found: %d\n", arr[i]);
                break;
            }
            if(hasduplicate){
                break;
            }

        }
        
    }
    if(!hasduplicate){
        printf("duplicate not found.\n");
    }
    return 0;

}