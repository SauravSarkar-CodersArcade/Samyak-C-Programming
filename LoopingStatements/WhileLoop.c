#include<stdio.h>
// Entry Controlled Loop
/*
Only if the condition is true, the control enters the loop
Or else it ignores
*/
int main(){
    int a = 5;
    while (a < 10)
    {
        printf("%d ", a);
        a++;
    }
       
    return 0;
}