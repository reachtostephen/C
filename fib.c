#include<stdio.h>
#include<conio.h>
int main(void){
    int c,num,a=0,b=1;
    printf("Enter the number to which fibonacci to be produced");
    scanf("%d",&num);
    printf("%d %d",a,b);
    c=a+b;
    while(c<num){
        printf(" %d",c);
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}
