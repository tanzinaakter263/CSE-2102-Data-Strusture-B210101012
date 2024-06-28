
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
int getCurrSize(struct node *node){
    int size=0;
    while(node!=0){
        node=node->next;
        size++;
    }
    return size;
}
void deletePosition(struct node **head,int n)
{
    struct node *temp=*head;
    struct node *previous;
    int size=getCurrSize(*head);
   if(n<1||n>size){
    printf("Enter valid position\n");
    return ;
   }
   if(n==1){
    *head=(*head)->next;
    printf("Deleted:%d\n",temp->data);
    free(temp);
    return;
   }

   while(--n){
    previous=temp;
    temp=temp->next;
   }
   previous->next=temp->next;
    printf("%d deleted\n",temp->data);
    free(temp);
}

    void display(struct node *node){
        printf("LinkedList:");

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
    //printf("Linked list:");
    display(head);

   deletePosition(&head,2);
   display(head);
      deletePosition(&head,1);
      display(head);
       deletePosition(&head,1);
   display(head);
   deletePosition(&head,3);
   display(head);
    return 0;
}

