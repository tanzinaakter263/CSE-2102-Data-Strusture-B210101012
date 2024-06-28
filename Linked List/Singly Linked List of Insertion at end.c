
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
void insertEnd(struct node **head,int data){
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    if(*head==NULL){
        *head=newnode;
        return;
    }

struct node *temp=*head;
    while(temp->next!=0){
        temp=temp->next;
        temp->next=newnode;
        printf("%d inserted at the end\n",data);
    }
}

    void display(struct node *node){
        while(node!=0){
            printf("%d",node->data);
            node=node->next;
        }
        printf("\n");
    }
int main(){
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));
    head->data=7;
    head->next=second;
   second->data=8;
    second->next=third;
    third->data=9;
   third->next=fourth;
    fourth->data=10;
   fourth->next=NULL;
   printf(" Inserted at the end before:");
   display(head);
   insertEnd(&head,50);
    printf(" inserted at the end after:");
   display(head);
   return 0;
}

