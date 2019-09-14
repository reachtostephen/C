#include<stdio.h>

int main(void){
  char str[20];
  int a;
  printf("Enter the String : ");
  gets(str);
  a= str_ln(str);
  printf("%d",a);
}

int str_ln(char* a){
  int count =0;
  int i=0;
  while(*a!='\0'){
    count++;
    a++;
  }
  return count;
}
