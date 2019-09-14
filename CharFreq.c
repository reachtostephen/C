#include<stdio.h>

int main(void){
  char str1[100];
  char ch;
  int i;
  int arr[26]={0};
  printf("Enter the String\n");
  gets(str1);
  for(i=0;i<strlen(str1);i++){
    arr[str1[i]-'a']++;
  }
 for(i=0;i<26;i++){
    if(arr[i]!=0){
    ch = i+'a';
    printf("%c is repeated %d times\n",ch,arr[i]);
  }

  }
return 0;
}
