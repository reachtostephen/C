#include<stdio.h>
#include<conio.h>
#include<string.h>


int main(void){
    char str1[100];
    int k=0;
    int i;
    int x;
    int count[26]={0};
    printf("Enter the String \n");
    gets(str1);
    while(str1[k]!='\0'){
        if(str1[k]>='a'&&str1[k]<='z'){
            x=str1[k]-'a';
            count[x]++;
        }
        if(str1[k]>='A'&&str1[k]<='Z'){
            x=str1[k]-'A';
            count[x]++;
        }
        k++;
    }
    printf("Hence the number of time the letter has occured is\n");
    for(i=0;i<26;i++){
        if(count[i]!=0){
            printf("The letter %c has occured %d times\n",i+'a',count[i]);
        }
    }
}
