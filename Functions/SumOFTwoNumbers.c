#include<stdio.h>
void add(int * x, int * y, int * r){
    *r = *x + *y;
}
int main(){
    int x = 10; // [1000]
    int * ptr = &x; // [1000]
    int n1 = 10;
    int n2 = 20;
    int total = 0;
    int * a = &n1;
    int * b = &n2;
    int * t = &total; 
    add(a, b, t);
    printf("Total: %d\n", total);
    return 0;
}