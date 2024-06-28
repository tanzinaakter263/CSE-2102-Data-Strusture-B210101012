#include<stdio.h>
int Binary_search(int A[],int f,int l,int data){
    int mid;
    if(f>l)
        return -1;
    mid=(f+l)/2;
    if(A[mid]==data)
        return mid;
    else if(data>A[mid])
        return Binary_search(A,mid+1,l,data);
    else
        return Binary_search(A,mid-1,f,data);
}
int main(){
    int first,last,n,arr[100],search,index;
    printf("Enter num of elements:");
    scanf("%d",&n);
    printf("Enter %d integers:");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Enter value to find:\n");
    scanf("%d",&search);
    first=0;
    last=n-1;
    index=Binary_search(arr,first,last,search);
    if(index==-1)
        printf("Not found!%d isnot present in the list\n",search);
    else
        printf("%d is present at location %d\n",search,index+1);
    return 0;
}
