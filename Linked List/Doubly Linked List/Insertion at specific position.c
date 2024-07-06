
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
    struct node *prev;
};
void insertlast(struct node **head,int data);
   void insertlast(struct node **head,int data);
   int calcsize(struct node *node){
int  size=0;
   while(node!=NULL)
    {
        node=node->next;
        size++;
    }
    return size;
   }
   void insertposition(int pos,int data,struct node **head){
       int size=calcsize(*head);
       if(pos<0||size<pos){
        printf("\nCannot insert,%d is not a valid");
        return ;
       }
       if(pos==0)
        insertstart(head,data);
       else if(pos==size)
         insertlast(head,data);
       else{
        struct node *temp=*head;
        struct node *newnode=(struct node*)malloc(sizeof(struct node));
        newnode->data=data;
        newnode->next=NULL;
        while(--pos)
            temp=temp->next;
        struct node *temp2=temp->next;
        newnode->next=temp->next;
        newnode->prev=temp;
        temp->next=newnode;
        temp2->prev=newnode;
       }
   }
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
    printf("List is forward direction:");
    while(node!=NULL){
        printf("%d",node->data);
        end=node;
        node=node->next;
    }
     printf("\nList is backward direction:");
      while(end!=NULL){
        printf("%d",end->data);
        end=end->prev;
    }
}
int main(){
    struct node *head=NULL;
     insertstart(&head,14);
    insertstart(&head,15);
      insertstart(&head,16);
    insertlast(&head,12);
    insertlast(&head,10);
      insertlast(&head,8);
      printf("Linked before insertion specific position\n");
      display(head);
       printf("\n\nLinked before insertion specific position");
       insertposition(3,25,&head);
       display(head);
      return 0;
}


