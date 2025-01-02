
#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int Stack[MAX];
int top=-1;
void push(int ITEM){
if(top==MAX-1){
    printf("Overflow\n");
    return;
}
        top=top+1;
    Stack[top]=ITEM;
    printf("%d\t",ITEM);
}
void pop(){
    int data;
    if(top==-1){
        printf("Underflow");
        return;
    }
    data=Stack[top];
    top--;
    printf("POP Operation\t");
    printf("%d\n",data);

}
int main(){
push(1);
push(12);
push(14);
push(11);
push(13);
pop();
pop();
return 0;
}
