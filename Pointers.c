#include<stdio.h>

int main(){
    int x = 10;
    printf("Raw Address of x using address operator: %d\n", &x);
    printf("Hexa Address of x using address operator: %p\n", &x);
    printf("Base Address of x using address operator: %x\n", &x);

    int * ptr = &x;

    printf("Raw Address of x using pointer 'ptr': %d\n", ptr);
    printf("Hexa Address of x using pointer 'ptr': %p\n", ptr);
    printf("Base Address of x using pointer 'ptr': %x\n", ptr);
    // The process of deriving value from a pointer is called ->
    // "de-referencing".
    printf("Value of 'x' using pointer 'ptr' %d\n", *ptr);

    printf("Raw Address of ptr using address operator: %d\n", &ptr);
    printf("Hexa Address of ptr using address operator: %p\n", &ptr);
    printf("Base Address of ptr using pointer address operator: %x\n", &ptr);

    int ** dPtr = &ptr;
    printf("Raw Address of ptr using d-pointer 'dPtr': %d\n", dPtr);
    printf("Hexa Address of ptr using d-pointer 'dPtr': %p\n", dPtr);
    printf("Base Address of ptr using d-pointer 'dPtr': %x\n", dPtr);

    printf("Value of 'x' using pointer 'dPtr' %d\n", **dPtr);

    printf("%d\n", *(&x));   // *[1000] = 10
    return 0;
}   