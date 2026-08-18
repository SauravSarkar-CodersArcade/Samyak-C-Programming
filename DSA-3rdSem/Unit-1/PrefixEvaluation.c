#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

#define MAX 20
float stack[MAX];
int top = -1;
void push(float val){
    stack[++top] = val;
} 
float pop(){
    if(top == -1){
        printf("Error in expression!\n");
        exit(1);
    }
    return stack[top--];
}
float evaluate(char prefix[]){
    float op1, op2;
    int len = strlen(prefix);
    // Scan from Right to Left
    for(int i= len-1; i>=0; i--){
        char ch = prefix[i];
        if(isdigit(prefix[i])){
            push(ch - '0'); // Convert char to int & push to stack
        }else{ // operator
            op1 = pop();
            op2 = pop();
            switch(ch){
                case '+':
                    push(op1 + op2);
                    break;
                case '-':
                    push(op1 - op2);
                    break;    
                case '*':
                    push(op1 * op2);
                    break;    
                case '/':
                    push(op1 / op2);
                    break;  
                default:
                    printf("Invalid Operator\n");
                    exit(1);
            }
        }
    }
    return pop();
}
int main(){
    char prefix[MAX];
    printf("Enter the prefix expression (e.g. + A * B C): ");
    scanf("%s", prefix);
    float result = evaluate(prefix);
    printf("Result = %0.2f\n", result);
    return 0;
}