#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
struct node {
    int data ;
    struct node *left ;
    struct node *right ;
};
struct node *findlca(struct node *root, struct node *p, struct node *q) {
 struct node *current = root ;
 while (current != NULL) {
        if (p->data < current->data && q->data < current->data) {
            current = current->left ;
        } else if (p->data > current->data && q->data > current->data) {
            current = current->right ;
        } else {
            return current ;
        }
    }
    return NULL ;
}

int main() {
    struct node *root = (struct node*)malloc(sizeof(struct node));
    root->data = 6;
    root->left = (struct node*)malloc(sizeof(struct node));
    root->left->data = 2;
    root->right = (struct node*)malloc(sizeof(struct node));
    root->right->data = 8;
    root->left->left = (struct node*)malloc(sizeof(struct node));
    root->left->left->data = 0;
    root->left->right = (struct node*)malloc(sizeof(struct node));
    root->left->right->data = 4;
    root->right->left = (struct node*)malloc(sizeof(struct node));
    root->right->left->data = 7;
    root->right->right = (struct node*)malloc(sizeof(struct node));
    root->right->right->data = 9;

    struct node *p = root->left; // Node with value 2
    struct node *q = root->right; // Node with value 8

    struct node *lca = findlca(root, p, q);
    if (lca != NULL) {
        printf("Lowest Common Ancestor of %d and %d is: %d\n", p->data, q->data, lca->data);
    } else {
        printf("Lowest Common Ancestor not found.\n");
    }

    return 0;
}