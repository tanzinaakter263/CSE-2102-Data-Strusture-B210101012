
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
    struct node *prev;
};
void insert(struct node **head,int data){
struct node *newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=data;
newnode->next=*head;
newnode->prev=NULL;
if(*head!=NULL)
    (*head)->prev=newnode;
*head=newnode;
}
void deletefront(struct node **head){
    struct node *tempnode=*head;
    if(*head==NULL){
        printf("LInked list empty,nothing to delete");
        return ;
    }
     if(tempnode->next==NULL){
             printf("%d deleted\n\n",tempnode->data);
             *head=NULL;
                 return;
     }
     *head=(*head)->next;
     (*head)->prev=NULL;
      printf("%d deleted\n\n",tempnode->data);
         free(tempnode);
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
    printf("\n\n");
}
int main(){
    struct node *head=NULL;
    insert(&head,12);
    insert(&head,10);
      insert(&head,8);
      insert(&head,6);
      insert(&head,4);
      display(head);
      deletefront(&head);
      display(head);
      return 0;
}
