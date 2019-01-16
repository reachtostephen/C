#include<stdio.h>
#include<conio.h>
int main(void){
    int a,b,max,gcd,i;
    printf("Enter the two numbers");
    scanf("%d %d",&a,&b);
    if(a>b)
        max =a;
    else
        max=b;
    for(i=1;i<=max/2;i++){
        if(a%i==0 && b%i==0)
            gcd =i;
    }
    printf("The gcd value is %d", gcd);
    return 0;
}
