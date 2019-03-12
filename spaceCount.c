#include<stdio.h>
#include<conio.h>

int main(void){
    char s1[100]={0};
    int i;
    int count=0;
    printf("Enter the string\n");
    gets(s1);
    for(i=0;i<strlen(s1);i++){
        if(s1[i]==' '){
            count++;
        }
    }
    printf("The Number of Spaces in a given sentence is %d",count);
    return 0;
}
