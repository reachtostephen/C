#include<stdio.h>
#include<conio.h>
int main(void){
    char a;
    printf("Enter the character");
    scanf("%c",&a);
    if((a>='a' || a>='A') && (a<='z')||(a<='Z'))
        printf("It is a character");
    else
        printf("Nope it's not");
    return 0;
}
