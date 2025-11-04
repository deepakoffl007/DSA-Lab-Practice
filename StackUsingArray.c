#include<stdio.h>
#define MAX 5
int stack[MAX];
int top = -1;
void push(int value){
    if (top == MAX-1){
        printf("Element over flow");
    }
    else {
        top++;
        stack[top] = value;
        printf("Inserted elements is %d\n", value);
    }


}
void pop(){
    if (top == -1){
        printf("Stack under flow");
    }
    else {
        printf("popped element is : %d", stack[top]);
        top--;

    }
}
void peek(){
    if (top == -1){
        printf("Stack is empty");
    }
    else {
        printf("Top element in the stack : %d",stack[top]);
    }
}
void display(){
    if (top == -1){
        printf("No elements in the stack ");
    }
    else {
        for (int i = top; i >= 0;i--){
            printf("%d", &stack[i]);
            printf("\n");
        }
    }
}
int main(){
    int value, choice;
    printf("Enter elements in the stack :\n");
    while(1){
        printf("For \n push : 1 \n For pop : 2 \n For peek : 3 \n For display : 4 \n For Exit 5");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                printf("Enter value to push in stack : ");
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