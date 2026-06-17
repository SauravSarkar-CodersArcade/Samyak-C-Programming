#include<stdio.h>

int main(){
    // 24 hour time format:
    int time;
    printf("Enter the time in 24 hr format[1-24]:\n");
    scanf("%d", &time); 
    (time >= 12) ? printf("Second half") : printf("First half");
    return 0;
}