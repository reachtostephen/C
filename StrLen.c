#include<stdio.h>
#include<conio.h>

int main(void){
    char s[100];
    int len=0;
    int i;
    printf("Enter the string whose length is to be calculated\n");
    scanf("%s",&s);
    for(i=0;s[i]!='\0';i++){
        len++;
    }
    printf("The length of the string is %d",len);
    getch();
    return 0;
}
