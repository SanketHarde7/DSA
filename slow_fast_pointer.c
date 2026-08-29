#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
int hascycle(struct node *head){
    struct node *slow=head;
    struct node *fast=head;
    while (fast!=NULL && fast->next!=NULL){
    slow=slow->next;
    fast =fast->next->next;
    if (slow==fast){
        return 1;
    }
    }
    return 0;

}
void main(){
struct node *head=NULL;
struct node *n1=(struct node*)malloc(sizeof(struct node));
struct node *n2=(struct node*)malloc(sizeof(struct node));
struct node *n3=(struct node*)malloc(sizeof(struct node));
n1->data=1;
n2->data=2;
n3->data=3;

n1->next=n2;
n2->next=n3;
n3->next=n1; // Creating a cycle for testing 
head=n1;   
int result=hascycle(head);
printf("Cycle detected: %d\n", result);
}