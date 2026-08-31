#include <stdio.h>
#include <stdlib.h>
struct
    node
{
    int data;
    struct node *left;
    struct node *right;
};
void inorder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    printf("%d\t", root->data);
    inorder(root->right);
}

void preorder(struct node *root){
    if (root==NULL){
        return;
    }
    printf("%d\t",root->data);
    preorder(root->left);
    preorder(root->right);
}
void postorder(struct node *root){
     if (root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    printf("%d\t",root->data);
}

void main()
{
    struct node *root = (struct node *)malloc(sizeof(struct node));
    root->data = 1;
    root->left = (struct node *)malloc(sizeof(struct node));
    root->left->data = 2;
    root->right = (struct node *)malloc(sizeof(struct node));
    root->right->data = 3;
    root->left->left = (struct node *)malloc(sizeof(struct node));
    root->left->left->data = 4;
    root->left->right = (struct node *)malloc(sizeof(struct node));
    root->left->right->data = 5;
    root->right->left = NULL;
    root->right->right = NULL;
    root->left->left->left = NULL;
    root->left->left->right = NULL;
    root->left->right->left = NULL;
    root->left->right->right = NULL;
    printf("traversing using preorder : ");
    preorder(root);
    printf("\n traversing using inorder : ");
    inorder(root);
    printf("\n traversing using postorder : ");
    postorder(root);
}
