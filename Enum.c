#include<stdio.h>
enum Boolean {
    TRUE, FALSE, A=100, B, C=200, D, E
};
int main(){
    enum Boolean b = B;
    printf("%d\n", b);
    printf("Size of enum: %d bytes.", sizeof(b));
    return 0;
}