#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
void insertstart(struct node **head,int data){
struct node *newnode=(struct node *)malloc (sizeof(struct node ));
newnode->data=data;
if(*head==NULL){
    *head=newnode;
    (*head)->next=*head;
    return ;
}
struct node *curr=*head;
while(curr->next!=*head){
    curr=curr->next;
}
curr->next=newnode;
newnode->next=*head;
*head=newnode;
}
void display(struct node *head){
    if(head==NULL)
        return;
    struct node *temp=head;
    do{
        printf("%d",temp->data);
        temp=temp->next;
    }
    while(temp!=head);
    printf("\n");
}
int main(){
    struct node *head=NULL;
    printf("Linked List:");
    insertstart(&head,6);
     insertstart(&head,5);
     insertstart(&head,4);
      insertstart(&head,3);
       insertstart(&head,2);
        insertstart(&head,1);
        display(head);
        return 0;
}

