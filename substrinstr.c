#include<stdio.h>
#include<conio.h>

int main(void){
    char str[100];
    char substr[100];
    int i,j,len1,len2,flag;
    printf("Enter the string\n");
    gets(str);
    printf("Enter the substring to be found in the string\n");
    gets(substr);
    len1=strlen(str);
    len2=strlen(substr);
    for(i=0;i<len1-len2;i++){
        for(j=i;j<i+len2;j++){
            flag=1;
            if(str[j]!=substr[j-i]){
                flag=0;
                break;
            }
        }
        if(flag==1)
        break;
    }
    if(flag==1){
        printf("Search Successful");
    }
    else{
        printf("Search unsuccessful");
    }
}
