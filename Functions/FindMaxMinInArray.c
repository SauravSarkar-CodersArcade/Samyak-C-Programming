#include<stdio.h>
void findMaxMinInArray(int arr[], int n, int * max, int * min){
    for(int i=1; i<n; i++){
        if(arr[i] > *max) *max = arr[i];
        if(arr[i] < *min) *min = arr[i];
    }
}
int main(){
    int arr[] = {22,4,-7,0,1,3,243,7};
    // We assume that the first element itself is the max,min [Just for starting] 
    int max = arr[0];
    int min = arr[0]; 
    int n = sizeof(arr) / sizeof(arr[0]);
    findMaxMinInArray(arr, n, &max, &min);
    printf("Max = %d, Min = %d\n", max, min);
    return 0;
}