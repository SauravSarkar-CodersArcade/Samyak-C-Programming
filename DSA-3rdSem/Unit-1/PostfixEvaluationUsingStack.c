#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#define SIZE 20
float stack[SIZE];
int top = -1;

void push(float value){
    stack[++top] = value;
}
float pop(){
    if (top == -1)
    {
        printf("Invalid postfix expression\n");
        exit(0);
    }
    return stack[top--];
}
float evaluate(char postfix[]){
    int i=0; 
    float op1, op2;
    while (postfix[i] != '\0')
    {
        if(isdigit(postfix[i])){
            push(postfix[i] - '0'); // char ascii - o ascii
        }else
        {
            op2 = pop();
            op1 = pop();
            switch (postfix[i]){
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
                    exit(0);
            }
        }
        i++;
    }
    return pop(); // The last remaining number is our answer, so pop it
}
int main(){
    char postfix[20];
    printf("Enter the postfix expression: ");
    scanf("%s", postfix);
    printf("Result = %0.2f\n", evaluate(postfix));
    return 0;
}