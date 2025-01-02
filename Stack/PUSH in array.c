#include<stdio.h>
#include<stdlib.h>
#define MAX 4
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
int main(){
push(1);
push(12);
push(14);
push(11);
push(13);
return 0;
}

