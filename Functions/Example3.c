#include<stdio.h>
int array_sum(int arr[], int n){
    int s = 0;
    for(int i=0; i<n; i++){
        s += arr[i];
    }
    return s;
}
int main(){
    int arr[] = {10,12,2,4,0};
    int size = sizeof(arr) / sizeof(arr[0]);
    int res = array_sum(arr, size);
    printf("The array sum is: %d\n", res);
    return 0;
}