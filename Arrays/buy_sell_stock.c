#include <stdio.h>

int buy_sell(int arr[], int n){
    int minprice = arr[0];
    int maxprofit = 0;
    for(int i =1; i<n; i++){
        if(arr[i] < minprice){
            minprice = arr[i];
        }else{
            int profit = arr[i]-minprice;
            if(profit > maxprofit){
                maxprofit = profit;
            }

        }
    }
    return maxprofit;

}
int main() {
    int arr[] = {7, 1, 10, 3, 6, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Max Profit: %d\n", buy_sell(arr, n));
    return 0;
}