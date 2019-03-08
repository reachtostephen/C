#include<stdio.h>
#include<conio.h>

int main(void){
    int i,left,right,n;
    printf("Enter the size of an array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements to be in the array\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    left=0;
    right=n-1;
    while(left<right){
        while(a[left]==0 && left<right){
            left++;
        }
        while(a[right]==1&& left<right){
            right--;
        }
        if(left<right){
            a[left]=0;
            a[right]=1;
            left++;
            right--;
        }
    }
    printf("Hence the produced output is\n");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    getch();
}
