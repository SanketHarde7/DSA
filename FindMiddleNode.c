#include<stdio.h>

#include<stdlib.h>

struct node {
    int data ;
    struct node *next;
};
struct node * find_middle (struct node *head){
    struct node *slow =head;
    struct node *fast =head;
    while (fast !=NULL && fast->next !=NULL){
        slow=slow->next ;
        fast =fast->next->next;
    }
    return slow;
}

void main(){
    
struct node *head=NULL;
struct node *n1=(struct node*)malloc(sizeof(struct node));
struct node *n2=(struct node*)malloc(sizeof(struct node));
struct node *n3=(struct node*)malloc(sizeof(struct node));
struct node *n4=(struct node*)malloc(sizeof(struct node));
struct node *n5=(struct node*)malloc(sizeof(struct node));
n1->data=1;
n2->data=2;
n3->data=3;
n4->data=4;
n5->data=5;


n1->next=n2;
n2->next=n3;
n3->next=n4;
n4->next=n5;
n5->next = NULL; 
head=n1; 
struct node * result=find_middle(head);
printf("Cycle detected: %d\n", result->data);
}