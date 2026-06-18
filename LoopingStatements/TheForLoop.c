#include<stdio.h>
int main(){
    // Suppose we need to print 1 to 10
    for (int i = 1; i < 11; i++)
    {
        printf("%d ", i);
    }
    printf("\n");
    for (int i = 10; i >= 1; i--)
    {
        printf("%d ", i);
    }
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", i); // 0 1 2 3 4

    }
    printf("\n");
    for (int i = 0; i < 5; ++i)
    {
        printf("%d ", i); // 0 1 2 3 4 
    }
    return 0;
}