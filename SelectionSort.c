#include<stdio.h>

int main(void){
  int n,a[100],i,j,k,t,temp;
  printf("Enter the length of the array\n");
  scanf("%d",&n);
  printf("Enter the elements one by one\n");
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  for(j=0;j<n-1;j++){
    t=j;
    for(k=j+1;k<n;k++){
      if(a[j]>a[k]){
        t=k;
      }
    }
    if(t!=j){
      temp = a[t];
      a[t] = a[j];
      a[j] = temp; 
    }
  }
  for(i=0;i<n;i++){
    printf("%d ",a[i]);
  }
}
