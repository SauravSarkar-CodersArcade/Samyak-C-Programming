#include<stdio.h>
void show(){
    // Local Variable
    int y = 20; // Only valid inside the function
    // printf("%d", x); // Inaccessible
}
int main(){
    int x = 10; // Local variable
    int * ptr = &x;
    // printf("%d", y); // Inaccessible
    // NULL Pointer
    int * ptr_new = NULL; // Safety
    if(ptr == NULL){
        printf("It is null\n");
    }else{
        printf("%d", *ptr);
    }
    return 0;
}