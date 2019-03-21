#include<stdio.h>
#include<conio.h>

int main(void){
    char str[100]={0};
    char substr[100][100]={0};
    char s;
    int k=0;
    int i=0;
    int j=0,len;
    printf("Enter the String\n");
    gets(str);
    printf("Enter the character to be split\n");
    scanf("%c",&s);
    while(str[k]!='\0'){
        j=0;
        while(str[k]!=s && str[k]!='\0'){
            substr[i][j]=str[k];
            j++;
            k++;
        }
        substr[i][j]='\0';
        i++;
        if(str[k]!='\0'){
            k++;
        }
    }
    len=i;
    printf("The words are\n");
    for(i=0;i<len;i++){
        printf("%s\n",substr[i]);
    }
return 0;    
}
