#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *front=0;
struct node *rear=0;
void enqueue(int x){
    struct node *new;
    new=(struct node*)malloc(sizeof(struct node));
    new->data=x;
    new->next=NULL;
    if(front==0&&rear==0){
        front=rear=new;
    }
    else{
        rear->next=new;
        rear=new;
    }
}
void display(){
    struct node *temp=front;
    if(front==0&&rear==0){
        printf("Empty");
    }
    else{

    while(temp!=0){
        printf("%d->",temp->data);
        temp=temp->next;
    }
}
}
int main(){
    enqueue(10);
    enqueue(11);
    enqueue(12);
     enqueue(13);
      enqueue(14);
       enqueue(15);
    display();

}

