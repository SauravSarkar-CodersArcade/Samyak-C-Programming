#include<stdio.h>
int main(){
    // even -> also div by 4 or not
    // odd -> also div by 3 or not
    int a = 101; 
    if(a % 2 == 0){
        if(a % 4 == 0){
            printf("Even & Div by 4");
        }
        else
        {
            printf("Even & NOT Div by 4");
        }
        
    }else{
        if(a % 3 == 0){
            printf("ODD & Div by 3");
        }
        else
        {
            printf("ODD & NOT Div by 3");
        }
    }
    return 0;
}