#include<stdio.h>
#include<stdlib.h>
struct node {
    int data ;
    struct node *next;
};
struct node * reverse_linked_list (struct node *head){
    struct node *prev=NULL;
    struct node *current=head;
    struct node *next=NULL;
    while (current !=NULL){
    next=current->next;
    current->next=prev;
        prev=current;
        current=next;
}
return prev;
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

struct node * result=reverse_linked_list(head);
printf("Reversed linked list: ");
while(result!=NULL){
    printf("%d ",result->data);
    result=result->next;    


}
}