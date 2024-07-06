#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
    struct node *prev;
};
void insertlast(struct node **head,int data){
struct node *newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=data;
newnode->next=NULL;
if(*head==NULL){
        *head=newnode;
    newnode->prev=NULL;
return;
}
struct node *temp=*head;
while(temp->next!=NULL)
    temp=temp->next;
temp->next=newnode;
newnode->prev=temp;
}
/*void insertstart(struct node **head,int data){
struct node *newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=data;
newnode->next=*head;
newnode->prev=NULL;
if(*head!=NULL)
    (*head)->prev=newnode;
*head=newnode;
}*/
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
     /*insertstart(&head,14);
    insertstart(&head,15);
      insertstart(&head,16);*/
    insertlast(&head,12);
    insertlast(&head,10);
      insertlast(&head,8);
      display(head);
      return 0;
}


