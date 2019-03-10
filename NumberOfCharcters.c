#include<stdio.h>
#include<conio.h>

int main(void){
    char s[100];
    int i;
    int count=0;
    printf("Enter the string\n");
    scanf("%s",&s);
    for(i=0;s[i]!='\0';i++){
        if(s[i]=='A' || s[i]=='a'){
              count++;
        }
    }
    printf("%d",count);
}
