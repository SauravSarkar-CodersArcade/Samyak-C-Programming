#include<stdio.h>
#include<ctype.h>
// DRY => Don't Repeat Yourself
int main(){
    char ch = '#';
    if(!isalpha(ch)) return 0;
    int day = 71;
    switch (day){
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            printf("WEEKDAY");
            break;
        case 6:
        case 7:
            printf("WEEKEND");
            break;
         default:
            printf("Invalid Entry");   
    }
    return 0;
}