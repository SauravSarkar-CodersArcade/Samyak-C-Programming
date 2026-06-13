#include<stdio.h>

int main(){
    int a = 10, b = 20, c = 30;
    int res = (a > b && a > c) ? a : (b > c) ? b : c;
    printf("The largest is: %d", res);
    return 0;
}