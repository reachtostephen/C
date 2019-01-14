//Reverse of a given number
#include<stdio.h>
int main(void){
    int a,b,num;
    printf("Enter the number\n");
    scanf("%d",&a);
    while(a>0){
        b=a%10;
        num=(num*10)+b;
        a=a/10;
    }
    printf("The reverse number is %d",num);
    return 0;
}
