#include<stdio.h>

int main(void){
  char str1[100],str2[100];
  int a[26]={0},b[26]={0};
  int flag;
  printf("Enter String 1 : ");
  gets(str1);
  printf("Enter String 2 : ");
  gets(str2);
  flag=getnumbers(str1,str2);
  if(flag==0){
    printf("The Two Strings doesn't form an anagram");
  }
  else{
    printf("The two Strings form an anagram");
  }
}

int getnumbers(char a[],char b[]){
  char *p;
  int i;
  int arr1[26]={0};
  p= &a[0];
  int arr[26]={0};
  while(p!=&a[strlen(a)]){
    int v =*p - 'a';
    arr[v]++;
    p++;
  }
  p= &b[0];
  while(p!=&b[strlen(b)]){
    int v =*p - 'a';
    arr1[v]++;
    p++;
  }
  for(i=0;i<26;i++){
    if(arr[i]!=arr1[i]){
      return 0;
    }
  }  
  return 1;
}
