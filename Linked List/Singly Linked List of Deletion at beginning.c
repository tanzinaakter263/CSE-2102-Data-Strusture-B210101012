#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
void deleteStart(struct node **head)
{
    struct node *temp=*head;
    if(*head==0){
        printf("Linked list Empty");
    return ;
    }
    *head=(*head)->next;
    printf("Deleted:%d\n",temp->data);
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
    printf("Linked list Before Operations:");
    display(head);

   deleteStart(&head);
   deleteStart(&head);

    printf("Linked list after Operations:");

    display(head);
    return 0;
}

