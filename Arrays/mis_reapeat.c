#include <stdio.h>

int main(){
    int arr[] = {1, 3, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);

    long long sumN = (long long)n * (n+1)/2;
    long long sumsqN = (long long)n * (n+1)*(2*n+1)/6;

    long long sum = 0, sumsq = 0;

    for(int i = 0; i<n; i++){
        sum += arr[i];
        sumsq +=(long long)arr[i] * arr[i];
    }

    long long x = sum - sumN;
    long long y = sumsq-sumsqN;

    long long sumrm = y/x;

    long long R = (x + sumrm)/2;
    long long M = R - x;

    printf("Repeating number: %lld\n", R);
    printf("Missing number: %lld\n", M);

    return 0;

}