#include<stdio.h>
#include<conio.h>

int main(void){
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    palin(num);
    getch();
}

void palin(int a){
    int rem,sum=0;
    int b=a;
    while(a>0){
        rem=a%10;
        sum+=rem*rem*rem;
        a/=10;
    }
    if(sum==b)
        printf("Palindrome");
    else
        printf("Not a Palindrome");
}
