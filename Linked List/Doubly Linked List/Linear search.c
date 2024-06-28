
#include<stdio.h>
int main(){
int a[50],size,data,i;
printf("Enter size of array:");
scanf("%d",&size);
printf("Enter elements of array:");
for(int i=0;i<size;i++){
    scanf("%d",&a[i]);
}
printf("Data you want to search:");
scanf("%d",&data);
for(int i=0;i<size;i++){
    if(a[i]==data){
        printf("Element found at index:%d",i);
        break;
    }
}
if(i==size){
    printf("Element not found");
}

printf("Elements of array are:");
for(int i=0;i<size;i++){
    printf("%d",a[i]);
}
return 0;
}
