#include<stdio.h>
#include<stdlib.h>
int main(){
    // We will try to create a dynamic array of integers [int]
    // of any size n
    int n;
    printf("Enter the size of the array:\n");
    scanf("%d", &n);
    // Dynamic Memory Allocation is done using pointers
    int * ptr;
    // Use of malloc(size) -> void pointer -> typecast [data]
    // ptr = (int*)malloc(n * sizeof(int));
    // Use of calloc(n, size) -> void pointer -> typecast [data]
    ptr = (int*)calloc(n, sizeof(int));
    if(ptr == NULL){
        printf("Memory Allocarion Failed!\n");
    }else{
        printf("Memory Allocation Successful!\n");
    }
    printf("Enter the %d elements of the array:\n", n);
    for(int i=0; i<n; i++){
        scanf("%d", &ptr[i]);
    }
    printf("The %d array elements are:\n",n);
    for(int i=0; i<n; i++){
        printf("%d ", ptr[i]);
    }
    // Use of realloc(ptr, new size);
    printf("\nEnter the new size of the array:\n");
    scanf("%d", &n);
    ptr = realloc(ptr, n * sizeof(int));
    printf("Enter the %d new elements of the array:\n", n);
    for(int i=0; i<n; i++){
        scanf("%d", &ptr[i]);
    }
    printf("The %d new array elements are:\n",n);
    for(int i=0; i<n; i++){
        printf("%d ", ptr[i]);
    }
    // Resources need to be deallocated as well [Release]
    // free(ptr)
    free(ptr);
    return 0;
}