

#include<stdio.h>
#include<stdlib.h>t
struct node{
    int data;
    struct node *next;
};
void insertPosition(int pos,int data,struct node **head)
{
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    if(pos<0){
        printf("Invalid position");
        }
    else if(pos==0){
        newnode->next=*head;
    *head=newnode;
    }

else {
    struct node*temp=*head;
    while(--pos)
        temp=temp->next;
    newnode->next=temp->next;
    temp->next=newnode;
}
}
    void display(struct node *node){
        printf("Linked List:");
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

   display(head);
   insertPosition(3,15,&head);
   display(head);
   insertPosition(-2,100,&head);
   return 0;
}

