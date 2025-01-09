#include<stdio.h>
int main(){
    int i,j,n,a[100],swap,position;
    printf("Enter n elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<(n-1);i++){
    position=i;
    for(j=i+1;j<n;j++){
            if(a[position]>a[j])
                position=j;
    }
    if(position!=i){
        swap=a[i];
        a[i]=a[position];
        a[position]=swap;
    }
}
for(i=0;i<n;i++){
    printf("%d\t",a[i]);
}
return 0;
}
