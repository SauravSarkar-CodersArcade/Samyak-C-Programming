#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data; // Date of the current node
    struct node *next; // Poiner / Address to the next node
}Node;
Node *head = NULL; // head is a pointer so we use *
void display(){
    Node *temp = head;
    if(head == NULL){
        printf("List is empty.\n");
        return; // Return to main function
    }
    while(temp != NULL){
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
// Insert at beginning
void insertBegin(int value){
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}
void deleteBegin(){
    if(head == NULL){
        printf("List is empty.\n");
        return; // Return to main function
    }
    Node* temp = head;
    head = head->next;
    free(temp);
}
int main(){
    insertBegin(20); // 20 -> NULL
    display();
    insertBegin(10); // 10 -> 20 -> NULL
    display();
    insertBegin(5); // 5 -> 10 -> 20 -> NULL
    display();
    deleteBegin();
    display(); // 10 -> 20 -> NULL
    return 0;
}