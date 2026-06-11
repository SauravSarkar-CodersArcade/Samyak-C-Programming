#include<stdio.h>

int main(){
    int arr[] = {1,2,3,4,5,10,20,1,5,6};
    // Total Size of the Array / Individual Size
    // 9x4 = 36bytes / 4bytes = 9
    int size = sizeof(arr) / sizeof(arr[0]);
    
    for(int i=0; i<size; i++){
        // i -> 0 - 8
        // *arr -> 1
        // 1 + i [0-8]
        printf("%d ", *arr+i); 
    }
    // printf("\n");
    // for(int i=0; i<size; i++){
    //     printf("%x ", arr); 
    // }
    // printf("\n");
    // for(int i=0; i<size; i++){
    //     printf("%d ", arr+i); 
    // }
    printf("\n");
    for(int i=0; i<size; i++){
        printf("%d ", *(arr+i)); 
    }
    return 0;
}