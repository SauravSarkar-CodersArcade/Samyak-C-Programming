#include<stdio.h>
int main(){
    int a = 0;
    if(a > 0){
        printf("Positive");
    }else if(a < 0){
        printf("Negative");
    }else{
        printf("Equal to zero.");
    }
    return 0;
}