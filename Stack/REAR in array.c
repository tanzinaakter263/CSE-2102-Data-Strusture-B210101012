#include<stdio.h>
#define N 4
int queue[5];
int front =-1;
int rear=-1;
void enqueue(int x){
    if(rear==N){
    printf("Overflow");
    }
    else if(front==-1&&rear==-1){
        front=rear=0;
    queue[rear]=x;
    }
    else{
        rear++;
    queue[rear]=x;
    }
}
void display(){
    for(int i=front;i<rear+1;i++){
        printf("%d\t",queue[i]);
    }
}
int main(){
    enqueue(35);
    enqueue(20);
    enqueue(25);
    enqueue(21);
    display();
    return 0;
}
