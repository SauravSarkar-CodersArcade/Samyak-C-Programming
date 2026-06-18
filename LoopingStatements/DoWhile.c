#include<stdio.h>
// Exit Controlled Loop
/*
    It will execute at least once, 
    Then the condition is checked, if ture, it continues
    Else, it exits
*/
int main(){
    int a = 5;    
    do{
        printf("%d ", a);
        a++;
    }while (a < 1);
       
    return 0;
}