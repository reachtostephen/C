#include<stdio.h>
#include<conio.h>

int main(void){
    char s[100];
    int i;
    int count=0;
    printf("Enter the String\n");
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++){
        if(s[i]=='a'|| s[i]=='A'||s[i]=='e'||s[i]=='E'||s[i]=='i'||s[i]=='I'||s[i]=='o'||s[i]=='O'||s[i]=='u'||s[i]=='U'){
            count++;
        }
    }
    printf("Hence the number of vowels in the given string is %d",count);
    getch();
}
