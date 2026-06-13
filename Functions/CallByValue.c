#include<stdio.h>
void swap(int a, int b){
    printf("Before Swap in Swp Function: a=%d, b=%d\n", a,b);
    int t = a;
    a = b;
    b = t;
    printf("After Swap in Swap Function: a=%d, b=%d\n", a,b);
}
int main(){
    int a = 10;
    int b = 20;
    printf("Before Swap in Main Function: a=%d, b=%d\n", a,b);
    swap(a,b); // Pass By Value
    printf("After Swap in Main Function: a=%d, b=%d\n", a,b);
    return 0;
}