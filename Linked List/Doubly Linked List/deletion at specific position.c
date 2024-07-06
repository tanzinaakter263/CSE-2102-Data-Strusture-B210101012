

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
void deleteend(struct node **head){
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
     while(tempnode->next!=NULL)
        tempnode=tempnode->next;
     struct node *secondlast=tempnode->prev;
     secondlast->next=NULL;
      printf("%d deleted\n\n",tempnode->data);
         free(tempnode);
}
void deleteNthnode(struct node **head,int n ){
    int len=getlength(*head);
    if(n<1||n>len){
        printf("Enter valid position\n");
        return;
    }
    if(n==1){
        deletefront(head);
        return;
    }
    if(n==len){
        deleteend(head);
        return;
    }
    struct node *tempnode=*head;
    while(--n){
        tempnode=tempnode->next;
    }
     struct node *prevnode=tempnode->prev;
      struct node *nextnode=tempnode->next;
      prevnode->next=tempnode->next;
      nextnode->prev=tempnode->prev;
      printf("%d deleted\n\n",tempnode->data);
         free(tempnode);
}
int getlength(struct node *node){
int len=0;
while(node!=NULL)
    {
        node=node->next;
        len++;
    }
    return len;
}
void display(struct node *node){
    struct node *end=NULL;
    while(node!=NULL){
        printf("%d",node->data);
        end=node;
        node=node->next;
    }
    printf("\n\n");
}
int main(){
    struct node *head=NULL;
    insert(&head,7);
    insert(&head,8);
      insert(&head,9);
      insert(&head,10);
      insert(&head,11);
      insert(&head,12);
       printf("List Before deletion::");
      display(head);
      deleteNthnode(&head,3);
      printf("List After deletion::");
       display(head);
      return 0;
}
