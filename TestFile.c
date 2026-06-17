#include<stdio.h>
#include<stdbool.h>
int main(){
    printf("Hello World!");
    // $var or _var is allowed
    // 1var 1 var not allowed
    int x = 10;
    int y = 10;
    bool status = true; // 1
    bool valid = false; // 0
    printf("\n%d %d\n",status, valid);
    printf("%i %i\n",status, valid);
    return 0;
}