
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
int calcsize(struct node *head);
void deleteBegin(struct node **head){
    struct node *tempnode=*head;
    if(*head==NULL){
        printf("Linked list empty,nothing to delete");
        return ;
    }
    if(tempnode->next==*head){
        *head=NULL;
        return;
    }
    struct node *curr=*head;
    while(curr->next!=*head)
        curr=curr->next;
        curr->next=(*head)->next;
        *head=(*head)->next;
        free(tempnode);

}
void deleteEnd(struct node **head){
    struct node *tempnode=*head;
    struct node *previous;
    if(*head==NULL){
          printf("Linked list empty,nothing to delete");
          return ;
    }
    if(tempnode->next==*head){
        *head=NULL;
        return;
    }
    while(tempnode->next!=*head){
            previous=tempnode;
    tempnode=tempnode->next;

    }
    previous->next=*head;
    free(tempnode);
}
void deletePos(struct node **head,int n){
    int size =calcsize(*head);
    if(n>1||size<n){
        printf("Cannot delete,%d is not valid position\n");
    }
    else if(n==1)
        deleteBegin(head);
     else if(n==size)
        deleteEnd(head);
        else{
           struct node *tempnode=*head;
           struct node *previous;
           while(--n) {
            previous=tempnode;
            tempnode=tempnode->next;
           }
           previous->next=tempnode->next;
           free(tempnode);
        }
}
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
int calcsize(struct node *head){
    int size =0;
    struct node *temp=head;
    if(temp==NULL)
        return size;
        do{
            size++;
            temp=temp->next;
        }
        while(temp!=head);
        return size;
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
    insertstart(&head,60);
    insertstart(&head,50);
    insertstart(&head,40);
    insertstart(&head,30);
    insertstart(&head,25);
    insertstart(&head,15);
    insertstart(&head,10);
    display(head);
    deleteBegin(&head);
    display(head);
    deleteEnd(&head);
    display(head);
    deletePos(&head,3);
    display(head);
    return 0;
}

