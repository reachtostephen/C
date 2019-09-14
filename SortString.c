#include<stdio.h>

int main(void){
  char str1[100];
  int i,j;
  int arr[26]={0};
  printf("Enter the String\n");
  gets(str1);
  for(i=0;i<strlen(str1);i++){
    arr[str1[i]-'a']++;
  }
  for(i=0;i<26;i++){
    if(arr[i]!=0){
      for(j=0;j<arr[i];j++){
        printf("%c",i+'a');
      }
    }
  }
}
