
#include<stdio.h>
int main(){
int a[50],size,num;
printf("Enter size of array:");
scanf("%d",&size);
printf("Enter elements of array:");
for(int i=0;i<size;i++){
    scanf("%d",&a[i]);
}
printf("Enter data you want insert:");
scanf("%d",&num);

a[size]=num;
size++;
printf("Elements of array are:");
for(int i=0;i<size;i++){
    printf("%d",a[i]);
}
return 0;
}
