#include<stdio.h>
int main(){
    int x = 10; // [1000][10]
    char c = 'S'; // [2000]['S']
    // Generic Pointer or void pointer
    void * ptr; 
    ptr = &x; // [1000]
    printf("ptr is now holding an integer: %d\n",
    *(int*)ptr); // void pointer -> integer pointer
    ptr = &c;
    printf("ptr is now holding an integer: %c\n",
    *(char*)ptr);
    return 0;
}