#include<stdio.h> 
// Function Prototype 
void display();
// The main() function is the entry point of a C Program
int main(){
    display(); // Function Call from main function
    return 0;
}
// Function Definition
// If the function is not called, it is inactive
void display(){
    // Function Body
    printf("We are learning C Programming!");
}