#include<stdio.h>
void zigZag(int cols){
    for(int r=1; r<4; r++){
        for (int c=1; c<=cols; c++)
        {
            if((r+c)%4==0 || (r==2 && c%4==0)){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
}
void zigZag_fast(int cols){
    for(int r=1; r<4; r++){
        for (int c=1; c<=cols; c++)
        {
            if((r==1 && c%4==3) || (r==2 && c%2==0) || (r==3 && c%4==1)){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
}
int main(){
    zigZag(9);
    zigZag(13);
    zigZag_fast(9);
    zigZag_fast(13);
    return 0;
}