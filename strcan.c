#include<stdio.h>
#include<conio.h>

int main(void){
    char s1[100]={0};
    char s2[100]={0};
    int i,j;
    
    printf("Enter the first string\n");
    gets(s1);
    printf("Enter the Second string\n");
    gets(s2);
    for(i=0;i<strlen(s1);i++);
    s1[i]=' ';
    i++;
    for(j=0;j<strlen(s2);j++){
        s1[i]=s2[j];
        i++;
    }
    s1[i]='\0';
    puts(s1);
    getch();
}
