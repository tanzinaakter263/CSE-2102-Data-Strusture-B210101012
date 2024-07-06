#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
    struct node *prev;
};
void insertstart(struct node **head,int data){
struct node *newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=data;
newnode->next=*head;
newnode->prev=NULL;
if(*head!=NULL)
    (*head)->prev=newnode;
*head=newnode;
}
void display(struct node *node){
    struct node *end;
    printf("List is forward direction");
    while(node!=NULL){
        printf("%d",node->data);
        end=node;
        node=node->next;
    }
     printf("List is backward direction");
      while(end!=NULL){
        printf("%d",end->data);
        end=end->prev;
    }
}
int main(){
    struct node *head=NULL;
    insertstart(&head,12);
    insertstart(&head,10);
      insertstart(&head,8);
      display(head);
      return 0;
}

