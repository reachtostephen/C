//Sum of all digits in the number
#include<stdio.h>
#include<conio.h>
int main(void){
    int a,sum=0,num;
    printf("Enter the number\n");
    scanf("%d",&a);
    num=a;
    while(a>0){
        num=a%10;
        sum+=num;
        a=a/10;
    }
    printf("The sum of the digits is %d", sum);
    return 0;
}
