#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};
struct Node *top = NULL;
void push (int value){
    struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
    newnode->data = value;
    newnode->next = top;
    top = newnode;
    printf("Pushed element in stack %d \n", value);
}

void pop(){
    if (top == NULL){
        printf("stack underflow\n");
    } else {
        struct Node *temp = top;
        printf("Element poped is %d", top->data);
        top = top->next;
        free(temp);
    }
}

void peek(){
    if (top == NULL){
        printf("stack is empty\n");
    }
    else {
        printf("Top element in stack is %d ", top->data);
    }
}
void display(){
    if (top == NULL){
        printf("Stack is empty");
    }
    else {
        struct Node *temp = top;
        printf("Stack elements : ");
        while(temp != NULL){
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}
int main(){
    int choice, value;
    printf("Stack using Linked List : ");
    while (1){
        printf(" \n 1.Push \n 2.pop \n 3.peek \n 4.display \n 5.Exit \n");
        printf("Enter your choice :");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                printf("Enter value to push : ");
                scanf("%d", &value);
                push(value);
                break;


            case 2 :
                pop();
                break;
            case 3 :
                peek();
                break;
            case 4 :
                display();
                break;
            case 5 :
                return 0;
            default :
                printf("Invalid choice \n");
                }
    }
}
