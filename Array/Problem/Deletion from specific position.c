
#include<stdio.h>
int main(){
int a[50],size,pos;
printf("Enter size of array:");
scanf("%d",&size);
printf("Enter elements of array:");
for(int i=0;i<size;i++){
    scanf("%d",&a[i]);
}
printf("Position you want delete:");
scanf("%d",&pos);
if(pos<=0||pos>size)
    printf("Invalid position");

else
for(int i=pos-1;i<=size-1;i--){
    a[i]=a[i+1];
}
size--;

printf("Elements of array are:");
for(int i=0;i<size;i++){
    printf("%d",a[i]);
}
return 0;
}
