#include<stdio.h>
#include<conio.h>

int main(void){
    char s1[100],s2[100]={0};
    int i;
    printf("Enter the string\n");
    gets(s1);
    for(i=0;i<strlen(s1);i++){
        if(s1[i]>='a'&&s1[i]<='z'){
            s2[i]=(char)s1[i]-32;
        }
        if(s1[i]>='A'&&s1[i]<='Z'){
            s2[i]=(char)s1[i]+32;
        }
    }
    puts(s2);
    return 0;
}
