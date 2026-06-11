#include<stdio.h>
// Function Definition
// b, h -> Variables 
// The variables in function definition = Parameters
float area_of_triangle(int b, int h){
    // Function Body
    return 0.5 * b * h;
}
int main(){
    // Function Call
    // 10, 20 -> Actual Numbers => Arguments
    // The actual values passed in function call 
    float ans = area_of_triangle(10, 20);
    printf("The area is: %0.2f sq. units", ans);
    return 0;
}