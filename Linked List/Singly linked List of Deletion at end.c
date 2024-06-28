
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
void deleteEnd(struct node **head)
{
    struct node *temp=*head;
    struct node *previous;
   if(*head==NULL){
    printf("Linked List Empty,nothing to delete");
    return ;
   }
   if(temp->next==NULL){
    printf("%d deleted\n",(*head)->data);
    *head=NULL;
    return ;
   }
   while(temp->next!=NULL){
    previous=temp;
    temp=temp->next;
   }
   previous->next=NULL;
    printf("%d deleted\n",temp->data);
    free(temp);
}

    void display(struct node *node){

        while(node!=0){
            printf("%d" , node->data);
            node  =  node->next;
        }
        printf("\n\n");
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
    printf("Linked list:");
    display(head);

   deleteEnd(&head);
   deleteEnd(&head);

    printf("Linked list:");

    display(head);
    return 0;
}

