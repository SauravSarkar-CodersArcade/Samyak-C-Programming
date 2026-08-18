#include<stdio.h>
#include<ctype.h>
#define MAX 100
float stack[MAX];
int top = -1;
void push(float val){
    stack[++top] = val;
}
float pop(){
    return stack[top--];
}
int main(){
    char expr[MAX];
    float num = 0;
    char op = '+';
    int i = 0;
    printf("Enter Expression: ");
    scanf("%s", expr);

    while(expr[i] != '\0'){
        // Read Number
        if(isdigit(expr[i])){
            num = expr[i] - '0';
        }
        // When we hit operator or end of expression
        if(!isdigit(expr[i]) || expr[i+1] == '\0'){
            switch(op) {
                case '+' : push(num); break; // Push as positive
                case '-' : push(-num); break; // Push as negative
                case '*' : push(pop() * num); break; // Multiply
                case '/' : push(pop() / num); break; // Divide 
            }
            // Remember current operator for next number
            op = expr[i];
        }
        i++;
    }
    // Add all numbers in stack
    float result = 0;
    while (top >= 0)
    {
        result += pop();
    }
    printf("Result = %.0f\n", result);
    
    return 0;
}