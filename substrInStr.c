#include<stdio.h>
#include<conio.h>

int main(void){
    int i,j,len1,len2,flag;
    char str[100];
    char substr[100];
    printf("Enter the string\n");
    gets(str);
    len1 = strlen(str);
    printf("Enter the String to be Searched\n");
    gets(substr);
    len2 = strlen(substr);
    for(i=0;i<=len1 - len2;i++){
        
        for(j=i;j<i+len2;j++){
            flag=1;
            if(str[j]!=substr[j-i]){
                flag=0;
                break;
            }
        if(flag==1){
            break;
        }
        }
    }
    if(flag==0){
        printf("Search is Successful\n");
    }
    else{
        printf("Search is unsuccessful");
    }
    return 0;
}
