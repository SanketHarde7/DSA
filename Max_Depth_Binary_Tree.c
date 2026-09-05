#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left;
    struct node *right;
};
int height (struct node *root ){
    if (root==NULL){
        return 0;
    }
    int leftheight=height(root->left);
    int rightheight=height(root->right);
    return (leftheight>rightheight?leftheight:rightheight)+1;
}

void main(){
    struct node *root=(struct node*)malloc(sizeof(struct node));;
     root->data = 1;
    root->left = (struct node*)malloc(sizeof(struct node));
    root->left->data = 2;
    root->right = (struct node*)malloc(sizeof(struct node));
    root->right->data = 3;
    root->right->left = NULL;
    root->right->right = NULL;
    root->left->left = (struct node*)malloc(sizeof(struct node));
    root->left->left->data = 4;
    root->left->left->left = NULL;
    root->left->left->right = NULL;
    root->left->right = NULL;
    int result = height(root);
    printf("Height: %d\n", result);
}