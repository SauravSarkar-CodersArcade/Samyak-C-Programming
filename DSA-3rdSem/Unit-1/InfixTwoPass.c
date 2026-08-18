#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define MAX 100
int main(){
    char expr[MAX];
    float numbers[10];
    char operators[10];
    int numCount = 0, opCount = 0; 
    printf("Enter the expression (e.g., 3+5*2) ");
    scanf("%s", expr);
    // STEP 1 : Extract the numbers & operators
    for(int i=0; expr[i] != '\0'; i++){
        if (isdigit(expr[i]))
        {
            numbers[numCount] = expr[i] - '0';
            numCount++; // To go to the next index for the next number
        }else if(expr[i] == '+' || expr[i] == '-' || expr[i] == '/' || expr[i] == '*'){
            operators[opCount] = expr[i];
            opCount++; // To go to the next index for the next operator
        }    
    }
    // STEP 2 : Handle multiplication & division first
    for(int i=0; i<opCount; i++){
        if (operators[i] == '*' || operators[i] == '/')
        {
            float result;
            if (operators[i] == '*')
                result = numbers[i] * numbers[i+1];
            else
                result = numbers[i] / numbers[i+1];  
            // Replace the result back
            numbers[i] = result;     
            // Shift remaining numbers left
            for(int j=i+1; j < numCount - 1; j++){
                numbers[j] = numbers[j+1];
            } 
            numCount--;
            // Remove the operator we just used
            for(int j=1; j<opCount - 1; j++){
                operators[j] = operators[j+1];
            }
            opCount--;
            i--; // Check the same position again [+ or -]
        }
    }
    // STEP 3: Handle additon and subtraction
    float result = numbers[0];
    for(int i=0; i<opCount; i++){
        if (operators[i] == '+')
        {
            result += numbers[i + 1];
        }else if(operators[i] == '-'){
            result -= numbers[i + 1];
        }
    }
    printf("Result = %0.0f\n", result);
    return 0;
}