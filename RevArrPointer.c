#include<stdio.h>

int main(void){
  int n,i;
  int a[10];
  int *p;
  printf("Enter the size of an array : ");
  scanf("%d",&n);
  printf("\nEnter the Elements one by one : ");
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  p=&a[n-1];
  printf("\nThe reversed elements are : ");
  for(i=n-1;i>=0;i--){
    printf("%d\n",*p);
    p--;
  }
}
