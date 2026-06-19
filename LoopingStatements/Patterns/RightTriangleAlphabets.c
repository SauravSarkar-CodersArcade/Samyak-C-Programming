#include<stdio.h>
int main(){
    int ch = 65;
    int n = 6;
    for(int r=1; r<=n; r++){
        int temp = 0; // Reset for every row
        for(int c=1; c<=r; c++){
            printf("%c ", 65+temp);
            temp++;
        }
        printf("\n");
    }
    return 0;
}