#include<stdio.h>
#include<conio.h>
#include<string.h>
int GetReverseString(char *str,char *str1,int c);

int main(void){
    char str[100][100],s[100];
    int len,i;
    int j=0,k=0;
    int c=0;
    
    printf("Enter the String\n");
    gets(s);
    len=strlen(s);
    for(i=0;i<len;i++){
        if(s[i]!=' '){
            str[j][k]=s[i];
            k++;
        }
        else{
            str[j][k]='\0';
            k=0;
            j++;
        }
    }
    str[j][k]='\0';
    for(i=0;i<=j;i++){
        c=GetReverseString(str[i],s,c);
        s[c]=' ';
        c++;
    }
    printf("The Reversed String is\n");
    printf("%s",s);
}

int GetReverseString(char *str,char *str1,int c){
        int j;
        for(j=strlen(str)-1;j>=0;j--){
            str1[c]=str[j];
            c++;
        }
        return c;
    }
