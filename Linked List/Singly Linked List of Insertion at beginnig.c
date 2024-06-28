#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
void Traversal(struct node *ptr){
    while(ptr!=0){
        printf("Element is:%d\n",ptr->data);
        ptr=ptr->next;
    }
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
   struct node *newnode;
   newnode=(struct node*)malloc(sizeof(struct node));
   printf("Enter data you want to insert:");
   scanf("%d",&newnode->data);
   newnode->next=head;
   head=newnode;
   Traversal(head);
   return 0;
}
