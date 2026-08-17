#include<stdio.h>
#define SIZE 5
int stack[SIZE];
int top = -1; // Initially the stack is empty
void push(){
    int element;
    if (top == SIZE - 1)
    {
        printf("Stack Overflow\n");
        return;
    }
    printf("Enter the element: ");
    scanf("%d", &element);
    stack[++top] = element;
    printf("Element %d pushed to the stack.\n", element);
}
void pop(){
    if (top == -1)
    {
        printf("Stack Underflow\n");
        return;   
    }
    printf("Popped element: %d\n", stack[top--]);
}
void display(){
    int i;
    if (top == -1)
    {
        printf("Stack is empty\n");
        return;
    }
    for(i = top; i >= 0; i--){
        printf("%d ", stack[i]);
    }
    printf("\n");
}
void isEmpty(){
    if (top == -1)
    {
        printf("Stack is EMPTY.");
    }else{
        printf("Stack is NOT Empty.");
    }
}
void isFull(){
    if (top == SIZE -1)
    {
        printf("Stack is FULL.");
    }else{
        printf("Stack is NOT FULL.");
    }
}
int main(){
    int choice;
    while (1){ // Infinite Loop
        printf("\n1. PUSH");
        printf("\n2. POP");
        printf("\n3. EMPTY");
        printf("\n4. FULL");
        printf("\n5. DISPLAY");
        printf("\n6. EXIT");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice){
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                isEmpty();
                break;  
            case 4:
                isFull();
                break;
            case 5:
                display();
                break;
            case 6:
                return 0;
            default:
                printf("Invalid Choice\n");    
        }
    }
    return 0;
}