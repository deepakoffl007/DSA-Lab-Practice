#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
struct Node *left, *right;
};
struct Node *createnode(int value){
    struct Node *newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->data = value;
    newnode->left = newnode->right = NULL;
    return newnode;

}
void inorder(struct Node* root){
    if (root == NULL)
        return;
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}
void preorder(struct Node* root){
    if (root == NULL)
        return;
    printf("%d ", root->data);
    preorder(root->left);
    preorder(root->right);
}
void postorder(struct Node* root){
    if (root==NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    printf("%d ",root->data);
}
int main(){
    struct Node *root = createnode(10);
    root->left = createnode(20);
    root->right = createnode(30);
    root->left->left = createnode(40);
    root->left->left = createnode(50);
    root->right->right = createnode(60);
    printf("In Order :");
    inorder(root);
    printf("\n Pre Order :");
    preorder(root);
    printf("\n Post Order : ");
    postorder(root);
    return 0;

}