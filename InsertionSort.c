#include<stdio.h>

int main(void){
  int a[100],n,i,t,d;
  printf("Enter the length of an array\n");
  scanf("%d",&n);
  printf("Enter the Elements one by one\n");
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }

  for(i=1;i<=n-1;i++){
    d=i;
    while(d>0&&a[d]<a[d-1]){
      t=a[d];
      a[d] = a[d-1];
      a[d-1] =t;
      d--;
    }
  }
  for(i=0;i<n;i++){
    printf("%d ",a[i]);
  }
}
