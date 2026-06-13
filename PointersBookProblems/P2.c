/*
Write a program to add two floating point numbers. The
result should contain only two digits after the decimal.
*/
#include <stdio.h>
int main(){
    float x, y, sum = 0.0;
    float *ptr1= &x, *ptr2 = &y, *ptr3 = &sum;
    printf("\n Enter the two numbers: ");
    scanf("%f %f", ptr1, ptr2);
    
    *ptr3 = *ptr1 + *ptr2;
    printf("\n %f + %f = %.2f", *ptr1, *ptr2, *ptr3);
    return 0;
}
