#include<stdio.h>

int main(void){
    int n;
    scanf("%d",&n);
fun1(n);
return 0;
}

void fun1(int n){
    int sum = 0;
    int i=2;
    int a;
    a=fun2(sum,i,n);
    printf("%d",a);
}

int fun2(int sum,int i,int n){
    while(i<=n){
        sum=sum+i;
        i+=2;
        fun2(sum,i,n);
    }
    return sum;
}
