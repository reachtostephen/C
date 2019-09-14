#include<stdio.h>

int main(void){
  int a[100],n,i,j;
  int *ptr;
 printf("Enter the Length of the array\n");
 scanf("%d",&n);
 printf("Enter the elements of the array : ");
 for(i=0;i<n;i++){
   scanf("%d",&a[i]);
 }
bubblesort(a,n);
}

bubblesort(int list[], int n){
  int i,j;
  int temp;
  for(i=0;i<n-1;i++){
    for(j=0;j<n-i-1;j++){
        if(list[j]>list[j+1]){
          temp=list[j];
          list[j] = list[j+1];
          list[j+1] = temp;
        }
    }
  }
  for(i=0;i<n;i++){
    printf("%d ",list[i]);
  }
}
